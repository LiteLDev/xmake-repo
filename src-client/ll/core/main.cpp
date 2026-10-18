#include "ll/core/LeviLamina.h"

#include "ll/api/Versions.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/mod/ModRegistrar.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/client/gui/screens/ScreenController.h"
#include "mc/deps/core/string/StringHash.h"

#if defined(LL_PLAT_A)
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/RapidShutdown.h"
#include "mc/client/game/SerialWorkList.h"
#include "mc/deps/application/AppPlatform.h"
#include <memory>
#else
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"
#include "ll/core/CrashLogger.h"
#include "ll/core/command/BuiltinCommands.h"
#include "ll/core/tweak/VulnerabilityFixes.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/entry/src_gamecore_pc/pc/WndProc_PC.h"
#include "mc/module/VanillaGameModuleClient.h"
#include "mc/resources/CompositePackSource.h"
#include "mc/resources/DirectoryPackSource.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/Pack.h"
#include "mc/resources/PackInstance.h"
#include "mc/resources/PackSettingsFactory.h"
#include "mc/resources/PackSourceFactory.h"
#include "mc/resources/RepositorySources.h"
#include "mc/resources/ResourcePack.h"
#include "mc/resources/ResourcePackStack.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/scripting/modules/PackManifest.h"
#include "mc/server/module/VanillaGameModuleServer.h"
#include "pl/Config.h"
#include "windows.h"
#include <filesystem>
#endif

namespace ll {

void setGamingStatus(GamingStatus);

#if defined(LL_PLAT_C)
namespace i18n {
std::string& defaultLocaleCode();
}

// appmanifest.xml has broken on 26.32, fuck Mojang
void AppManifestFix() {
    auto xmlPath = std::filesystem::path("appxmanifest.xml");
    auto content = ll::file_utils::readFile(xmlPath);
    if (content) {
        ll::file_utils::writeFile(
            xmlPath,
            ll::string_utils::replaceAll(
                content.value(),
                "<uap:VisualElements DisplayName=\"Minecraft for Windows\"",
                "<uap:VisualElements DisplayName=\"Minecraft\""
            ),
            false
        );
    }
}
#endif

void leviLaminaMain() {
#if defined(LL_PLAT_C)
    AppManifestFix();
#endif

    if (auto res = i18n::getInstance().load(getSelfModIns()->getLangDir()); !res) {
        getLogger().error("i18n load failed");
        res.error().log(getLogger());
    }
#if defined(LL_PLAT_C)
    auto& config = getLeviConfig();

    if (config.language != "system") {
        i18n::defaultLocaleCode() = config.language;
    }
#endif

    printWelcomeMsg();
#if defined(LL_PLAT_C)
    CrashLogger::init();
    command::registerCommands();
#endif
    mod::ModRegistrar::getInstance().loadAllMods();
#if defined(LL_PLAT_C)
    if (config.targeted.vulnerabilityFixes.enable) {
        vulnerability_fixes::enableFixes();
    }
#endif
}

#if defined(LL_PLAT_C)
LL_AUTO_TYPE_INSTANCE_HOOK(
    LanguageChangeHook,
    HookPriority::High,
    MinecraftGame,
    &MinecraftGame::$onLanguageChanged,
    void,
    std::string const& code,
    bool               languageSystemInitializing
) {
    auto& config = getLeviConfig();
    if (config.language == "system") {
        i18n::defaultLocaleCode() = code;
    }
    origin(code, languageSystemInitializing);
}
#endif

LL_AUTO_TYPE_INSTANCE_HOOK(
    EnableAllModsHook,
    HookPriority::High,
    MinecraftGame,
    &MinecraftGame::_initFinish,
    SerialWorkList::WorkResult,
    ::std::shared_ptr<::MinecraftGame::InitContext>& initContext
) {
    mod::ModRegistrar::getInstance().enableAllMods();
    setGamingStatus(GamingStatus::Running);
    return origin(initContext);
}

#if defined(LL_PLAT_A)
LL_AUTO_TYPE_STATIC_HOOK(
    DisableAllModsHook,
    HookPriority::High,
    RapidShutdown,
    &RapidShutdown::_rapidShutdown,
    void,
    ::std::unique_ptr<::AppPlatform>    platform,
    ::std::unique_ptr<::IMinecraftGame> game
) {
    setGamingStatus(GamingStatus::Stopping);
    mod::ModRegistrar::getInstance().disableAllMods();
    setGamingStatus(GamingStatus::Default);
    origin(std::move(platform), std::move(game));
}
#else
LL_AUTO_TYPE_INSTANCE_HOOK(
    InitPacksHook,
    HookPriority::High,
    RepositorySources,
    &RepositorySources::initializePackSource,
    void,
    ::PackSourceFactory& packSourceFactory
) {
    origin(packSourceFactory);
    auto& resourcePackSourceMain = packSourceFactory.createDirectoryPackSource(
        ll::getSelfModIns()->getResourceDir(),
        PackType::Resources,
        PackOrigin::User,
        false
    );
    mPackSource->mPackSources->push_back(&resourcePackSourceMain);
    auto& behaviorPackSourceMain = packSourceFactory.createDirectoryPackSource(
        ll::getSelfModIns()->getBehaviorDir(),
        PackType::Behavior,
        PackOrigin::User,
        false
    );
    mPackSource->mPackSources->push_back(&behaviorPackSourceMain);
    for (auto& mod : ll::mod::ModManagerRegistry::getInstance().mods()) {
        auto& resourcePackSource =
            packSourceFactory
                .createDirectoryPackSource(mod.getResourceDir(), PackType::Resources, PackOrigin::User, false);
        mPackSource->mPackSources->push_back(&resourcePackSource);
        auto& behaviorPackSource =
            packSourceFactory
                .createDirectoryPackSource(mod.getBehaviorDir(), PackType::Behavior, PackOrigin::User, false);
        mPackSource->mPackSources->push_back(&behaviorPackSource);
    }
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    InitPacksHook2,
    HookPriority::High,
    VanillaGameModuleClient,
    &VanillaGameModuleClient::$initializeResourceStack,
    void,
    ::Experiments const*                                            experiments,
    ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
    ::ResourcePackStack&                                            stack,
    ::BaseGameVersion const&                                        baseGameVersion,
    ::GameModuleClient::ResourceLoadingPhase                        loadingPhase,
    bool                                                            includeEditorPacks
) {
    repo->forEachPack([&](::ResourcePack const& pack) {
        if (pack.mPack->mManifest->mPackType == PackType::Resources) {
            auto packPath = pack.mPack->mManifest->mLocation->mPath->value;
            if (packPath.find(pl::pl_mods_path) != std::string::npos) {
                auto& identity = pack.mPack->mManifest->mIdentity;
                auto  newPack  = repo->getResourcePackForPackId(identity);
                if (newPack) {
                    PackSettingsFactory& factory  = repo->getPackSettingsFactory();
                    auto&                manifest = newPack->mPack->mManifest;
                    PackSettings*        settings = factory.getPackSettings(*manifest, {});
                    stack.add({newPack, -1, false, settings}, repo, false);
                }
            }
        }
    });
    origin(experiments, repo, stack, baseGameVersion, loadingPhase, includeEditorPacks);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    InitPacksHook3,
    HookPriority::High,
    VanillaGameModuleServer,
    &VanillaGameModuleServer::$initializeBehaviorStack,
    void,
    ::Experiments const&                                            experiments,
    ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
    ::ResourcePackStack&                                            stack,
    ::BaseGameVersion const&                                        baseGameVersion,
    bool                                                            includeEditorPacks
) {
    repo->forEachPack([&](::ResourcePack const& pack) {
        if (pack.mPack->mManifest->mPackType == PackType::Behavior) {
            auto packPath = pack.mPack->mManifest->mLocation->mPath->value;
            if (packPath.find(pl::pl_mods_path) != std::string::npos) {
                auto& identity = pack.mPack->mManifest->mIdentity;
                auto  newPack  = repo->getResourcePackForPackId(identity);
                if (newPack) {
                    PackSettingsFactory& factory  = repo->getPackSettingsFactory();
                    auto&                manifest = newPack->mPack->mManifest;
                    PackSettings*        settings = factory.getPackSettings(*manifest, {});
                    stack.add({newPack, -1, false, settings}, repo, false);
                }
            }
        }
    });
    origin(experiments, repo, stack, baseGameVersion, includeEditorPacks);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    DisableAllModsHook,
    HookPriority::High,
    MainGameCore::WndProc_PC,
    &MainGameCore::WndProc_PC::$onDestroy,
    std::optional<int64>,
    MainGameCore::WndProc::WndProcParams params
) {
    setGamingStatus(GamingStatus::Stopping);
    mod::ModRegistrar::getInstance().disableAllMods();
    setGamingStatus(GamingStatus::Default);
    return origin(params);
}
#endif

LL_AUTO_TYPE_INSTANCE_HOOK(
    PatchVersionBinding,
    HookPriority::Normal,
    ScreenController,
    &ScreenController::bindString,
    void,
    StringHash const&                                bindingName,
    brstd::move_only_function<::std::string() const> callback,
    brstd::move_only_function<bool() const>          condition
) {
    static auto hash = StringHash("#version");
    if (bindingName == hash) {
        origin(
            bindingName,
            [callback = std::move(callback)]() -> auto {
#if defined(LL_PLAT_A)
                auto gameVersion = callback();
#else
                auto gameVer     = getGameVersion();
                auto gameVersion = fmt::format("v{}.{}", gameVer.minor, gameVer.patch);
#endif
                auto loaderVer = getLoaderVersion();
                return fmt::format(
                    "{}/LeviLamina-{}.{}.{}",
                    gameVersion,
                    loaderVer.major,
                    loaderVer.minor,
                    loaderVer.patch
                );
            },
            []() -> auto { return true; }
        );
    } else {
        origin(bindingName, std::move(callback), std::move(condition));
    }
}
} // namespace ll

#if defined(LL_PLAT_A)
// Link this translation unit last so shared static registrations precede Mod loading,
// as they do before the Windows CRT calls DllMain.
[[maybe_unused]] static bool const leviLaminaEntry = [] {
    using namespace ll;
    setGamingStatus(GamingStatus::Default);
    try {
        leviLaminaMain();
    } catch (...) {
        error_utils::printCurrentException(getLogger());
    }
    setGamingStatus(GamingStatus::Starting);
    return true;
}();
#else
BOOL APIENTRY DllMain(HMODULE /*hModule*/, DWORD ulReasonForCall, LPVOID /*lpReserved*/) {
    using namespace ll;
    if (ulReasonForCall != DLL_PROCESS_ATTACH) return TRUE;

    setGamingStatus(GamingStatus::Default);
    try {
        leviLaminaMain();
    } catch (...) {
        error_utils::printCurrentException(getLogger());
    }
    setGamingStatus(GamingStatus::Starting);
    return TRUE;
}
#endif
