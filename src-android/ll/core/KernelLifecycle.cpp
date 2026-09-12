#include "KernelLifecycle.h"

#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/ModRegistrar.h"
#include "pl/Config.h"

namespace ll::android {

KernelLifecycle& kernel() noexcept {
    static KernelLifecycle instance;
    return instance;
}

bool KernelLifecycle::load(pl::android::ModContext const& source) noexcept try {
    {
        std::lock_guard lock(mMutex);
        if (mLoaded || mLoading || mStopResult || source.id() != selfModName || !source.javaVm() || !pl::pl_mods_path
            || !*pl::pl_mods_path || !pl::pl_log_path || !*pl::pl_log_path)
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
        mLoaded  = true;
    }
    getLogger().info("LeviLamina shared client core loaded");
    return true;
} catch (...) {
    std::lock_guard lock(mMutex);
    mLoading = false;
    source.log(3, "LeviLamina shared initialization failed");
    return false;
}

bool KernelLifecycle::enable(pl::android::ModContext const&) noexcept {
    std::lock_guard lock(mMutex);
    // PL activation is a host phase. Game Ready will be connected at G4.
    return mLoaded && !mStopResult;
}

bool KernelLifecycle::disable(pl::android::ModContext const&) noexcept {
    std::lock_guard lock(mMutex);
    return mLoaded && !mStopResult;
}

bool KernelLifecycle::unload(pl::android::ModContext const& source) noexcept {
    std::lock_guard lock(mMutex);
    if (mStopResult) return *mStopResult;
    // G0-G2 cannot yet prove shared event/task/log quiescence. Keep PL's parent
    // reference, including after a partially failed load, until G3-G4 supply it.
    source.log(3, "LeviLamina retained: shared client shutdown is not yet available");
    mStopResult = false;
    return false;
}

} // namespace ll::android
