#include "KernelLifecycle.h"
#include "ClientLifecycle.h"

#include "ll/api/i18n/I18n.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/ModRegistrar.h"
#include "pl/Config.h"

namespace ll {
void setGamingStatus(GamingStatus);
}

namespace ll::android {

KernelLifecycle& kernel() noexcept {
    static KernelLifecycle instance;
    return instance;
}

bool KernelLifecycle::load(pl::android::ModContext const& source) noexcept try {
    {
        std::lock_guard lock(mMutex);
        if (mLoaded || mLoading || mDisabling || mDisableResult || mStopResult || source.id() != selfModName
            || !source.javaVm() || !pl::pl_mods_path || !*pl::pl_mods_path || !pl::pl_log_path || !*pl::pl_log_path)
            return false;
        if (getSelfModIns()->getModDir().lexically_normal()
            != std::filesystem::path(source.rootPath()).lexically_normal())
            return false;
        mLoading = true;
    }
    // Follow the applicable client startup sequence through the original APIs.
    if (auto result = i18n::getInstance().load(getSelfModIns()->getLangDir()); !result) result.error().log(getLogger());
    printWelcomeMsg();
    mod::ModRegistrar::getInstance().loadAllMods();
    {
        std::lock_guard lock(mMutex);
        mLoading = false;
        if (mStopResult) return false;
        mLoaded = true;
    }
    getLogger().info("LeviLamina shared client core loaded");
    return true;
} catch (...) {
    {
        std::lock_guard lock(mMutex);
        mLoading = false;
    }
    source.log(3, "LeviLamina shared initialization failed");
    return false;
}

bool KernelLifecycle::enable(pl::android::ModContext const& source) noexcept {
    {
        std::lock_guard lock(mMutex);
        if (!mLoaded || mInstalling || mDisabling || mDisableResult || mStopResult) return false;
        if (mHookResult) return *mHookResult;
        mInstalling = true;
    }
    bool installed = installClientReadyHook();
    {
        std::lock_guard lock(mMutex);
        mInstalling = false;
        mHookResult = installed;
        if (mStopResult || mDisabling || mDisableResult) installed = false;
    }
    source.log(
        installed ? 2 : 3,
        installed ? "LeviLamina client Ready Hook installed" : "LeviLamina client Ready Hook unavailable"
    );
    return installed;
}

void KernelLifecycle::gameReady() noexcept {
    {
        std::lock_guard lock(mMutex);
        if (!mLoaded || !mHookResult.value_or(false) || mReadyStarted || mDisabling || mDisableResult || mStopResult)
            return;
        mReadyStarted    = true;
        mReadyInProgress = true;
    }
    // Reuse the original client behavior and original manager error handling.
    mod::ModRegistrar::getInstance().enableAllMods();
    {
        std::lock_guard lock(mMutex);
        mReadyInProgress = false;
        if (!mStopResult && !mDisableResult) setGamingStatus(GamingStatus::Running);
    }
}

bool KernelLifecycle::disable(pl::android::ModContext const& source) noexcept {
    {
        std::lock_guard lock(mMutex);
        if (mDisableResult) return *mDisableResult;
        if (!mLoaded || mLoading || mInstalling || mReadyInProgress || mDisabling || mStopResult) return false;
        mDisabling = true;
    }
    bool disabled{};
    try {
        // Preserve the original client ordering and manager semantics. This
        // adapter summarizes public states; it does not strengthen LL cleanup.
        setGamingStatus(GamingStatus::Stopping);
        auto& registrar = mod::ModRegistrar::getInstance();
        registrar.disableAllMods();
        setGamingStatus(GamingStatus::Default);
        disabled = true;
        for (auto const& name : registrar.getSortedModNames()) {
            auto instance = mod::ModManagerRegistry::getInstance().getMod(name);
            if (instance && instance->isEnabled()) disabled = false;
        }
    } catch (...) {
        disabled = false;
    }
    {
        std::lock_guard lock(mMutex);
        mDisabling     = false;
        mDisableResult = disabled;
    }
    source.log(
        disabled ? 2 : 3,
        disabled ? "LeviLamina original Mods disabled" : "LeviLamina retained: original Mod disable failed"
    );
    return disabled;
}

bool KernelLifecycle::unload(pl::android::ModContext const& source) noexcept {
    {
        std::lock_guard lock(mMutex);
        if (mStopResult) return *mStopResult;
        mStopResult = false;
    }
    // Reusing the original LL lifecycle does not establish general SO
    // quiescence. Keep the existing parent reference, including failed loads.
    source.log(3, "LeviLamina retained: shared client shutdown is not yet available");
    return false;
}

} // namespace ll::android
