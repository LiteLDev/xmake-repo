#include "ll/core/mod/NativeModManager.h"

#include <cstddef>
#include <filesystem>
#include <memory>
#include <string>
#include <string_view>
#include <utility>

#if defined(_WIN32)
#include "pl/dependency/DependencyWalker.h"
#endif

#include "ll/api/base/ScopedValue.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"
#if defined(LL_PLAT_A)
#include "ll/core/mod/NativeModPlatform.h"
#endif

namespace ll::mod {
NativeModManager::NativeModManager() : ModManager(NativeModManagerName) {
    handleMap[sys_utils::getCurrentModuleHandle()] = NativeMod::current();
}
NativeModManager::~NativeModManager() = default;

static thread_local std::shared_ptr<NativeMod> currentLoadingMod;

std::shared_ptr<NativeMod> NativeModManager::getModByHandle(Handle handle) {
    std::lock_guard l(mHandleMutex);
    if (handleMap.contains(handle)) {
        return handleMap.at(handle);
    }
    if (currentLoadingMod) { // for getCurrent before main
        return currentLoadingMod;
    }
    return {};
}
#if defined(_WIN32)
static Error diagnosticDependency(pl::dependency_walker::DependencyIssueItem const& item, size_t depth = 0) {
    Error       error;
    std::string indent(depth * 3 + 3, ' ');
    if (item.mContainsError) {
        error.join(
            makeI18nStringError<"{0}module: {1}">(indent, string_utils::u8str2str(item.mPath.filename().u8string()))

        );
        if (!item.mMissingModule.empty()) {
            error.join(makeI18nStringError<"{0}missing module:">(indent));
            for (auto const& missingModule : item.mMissingModule) {
                error.join(makeI18nStringError<"{0}|- {1}">(indent, missingModule));
            }
        }
        if (!item.mMissingProcedure.empty()) {
            error.join(makeI18nStringError<"{0}missing content:">(indent));
            for (auto const& [module, missingProcedure] : item.mMissingProcedure) {
                error.join(makeI18nStringError<"{0}|- {1}">(indent, module));
                for (auto const& procedure : missingProcedure) {
                    error.join(makeI18nStringError<"{0}|---- {1}">(indent, memory::SymbolView(procedure).toString()));
                }
            }
        }
        if (!item.mDependencies.empty()) {
            for (auto const& [_, subItem] : item.mDependencies) {
                error.join(diagnosticDependency(*subItem, depth + 1));
            }
        }
    }
    return error;
}

static Error diagnosticDependency(std::filesystem::path const& path) {
    auto  result = pl::dependency_walker::pl_diagnostic_dependency_new(path);
    Error error  = makeI18nStringError<"Dependency diagnostic:">();
    error.join(diagnosticDependency(*result));
    return error;
}
#endif

Expected<> NativeModManager::load(Manifest manifest) {
    auto l(lock());
    if (hasMod(manifest.name)) {
        return makeI18nStringError<"Mod {0} is already owned by the native manager">(manifest.name);
    }
    ScopedValue     currentLoadingScope{currentLoadingMod, std::make_shared<NativeMod>(std::move(manifest))};
    std::error_code ec;
    auto            modDir = getModsRoot() / string_utils::sv2u8sv(currentLoadingMod->getName());
    if (auto c = std::filesystem::canonical(modDir, ec); ec.value() == 0) {
        modDir = c;
    } else {
        modDir = modDir.lexically_normal();
    }
#if defined(_WIN32)
    sys_utils::addOrSetEnvironmentVariable("PATH", string_utils::u8sv2sv(modDir.u8string()));
#endif

    auto entry = modDir / string_utils::sv2u8sv(currentLoadingMod->getManifest().entry);
#if defined(LL_PLAT_A)
    auto prepared = prepareNativeMod(currentLoadingMod->getManifest(), modDir);
    if (!prepared) return forwardError(prepared.error());
    entry = std::move(*prepared);
#endif
    if (auto e = currentLoadingMod->getDynamicLibrary().load(entry); e) {
        Expected<> error{makeExceptionError(std::make_exception_ptr(e.value()))};
#if defined(_WIN32)
        if (e->code().value() == 126 || e->code().value() == 127) {
            error.error().join(diagnosticDependency(entry));
        }
#endif
        return error;
    }
    auto& lib = currentLoadingMod->getDynamicLibrary();
    if (!lib.getAddress("ll_memory_operator_overrided")) {
        // Static initialization may already have published objects. Keep the
        // original Mod/library owner until cleanup can actually be established.
        addMod(currentLoadingMod->getName(), currentLoadingMod);
        return makeI18nStringError<
            "{0} will not be loaded because it isn't using the unified memory allocation operator">(
            currentLoadingMod->getName()
        );
    }
    currentLoadingMod->onLoad(lib.getAddress<Mod::callback_t*>("ll_mod_load"));
    currentLoadingMod->onUnload(lib.getAddress<Mod::callback_t*>("ll_mod_unload"));
    currentLoadingMod->onEnable(lib.getAddress<Mod::callback_t*>("ll_mod_enable"));
    currentLoadingMod->onDisable(lib.getAddress<Mod::callback_t*>("ll_mod_disable"));

    {
        std::lock_guard handleLock(mHandleMutex);
        handleMap[currentLoadingMod->getHandle()] = currentLoadingMod;
    }
    auto result = currentLoadingMod->onLoad();
    if (!result) {
        auto error = std::move(result.error());
        if (currentLoadingMod->hasOnUnload()) {
            if (auto cleanup = currentLoadingMod->onUnload(); !cleanup) error.join(std::move(cleanup.error()));
        }
#if defined(LL_PLAT_A)
        error.join(makeI18nStringError<"Native owner retained until shared callback drain is available">());
#endif
        auto reported = makeStringError(error.message());
        mFailures.insert_or_assign(currentLoadingMod->getName(), std::move(error));
        addMod(currentLoadingMod->getName(), currentLoadingMod);
        return reported;
    }
    addMod(currentLoadingMod->getName(), currentLoadingMod);
    return {};
}

#if defined(LL_PLAT_A)
Expected<> NativeModManager::enable(std::string_view name) {
    auto guard(lock());
    auto result = ModManager::enable(name);
    if (result) {
        mFailures.erase(std::string{name});
        return result;
    }
    auto error    = std::move(result.error());
    auto reported = makeStringError(error.message());
    // Preserve the original exception/error while this manager owns the SO.
    mFailures.insert_or_assign(std::string{name}, std::move(error));
    return reported;
}
#endif

Expected<> NativeModManager::unload(std::string_view name) {
#if defined(LL_PLAT_A)
    // G0-G2 can load original Mods; G3 must establish callback/type/task drain
    // before this platform can release a general Mod SO.
    return makeI18nStringError<"Cannot unload {0}: shared Android callback drain is not yet available">(name);
#else
    auto l(lock());
    auto ptr = std::static_pointer_cast<NativeMod>(getMod(name));
    if (!ptr->hasOnUnload()) {
        return makeI18nStringError<"The mod does not register an unload function">();
    }
    if (auto res = ptr->onUnload(); !res) {
        return res;
    }
    auto const oldHandle = ptr->getHandle();
    if (auto err = ptr->getDynamicLibrary().free(); err) {
        return makeExceptionError(std::make_exception_ptr(*err));
    }
    {
        std::lock_guard handleLock(mHandleMutex);
        handleMap.erase(oldHandle);
    }
    eraseMod(name);
    return {};
#endif
}
} // namespace ll::mod
