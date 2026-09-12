#pragma once

#include "pl/android/Mod.hpp"
#include <mutex>
#include <optional>

namespace ll::android {

// The PL parent connection owns no ordinary-Mod registry or event system.
class KernelLifecycle {
public:
    bool load(pl::android::ModContext const&) noexcept;
    bool enable(pl::android::ModContext const&) noexcept;
    bool disable(pl::android::ModContext const&) noexcept;
    bool unload(pl::android::ModContext const&) noexcept;

private:
    std::mutex mMutex;
    bool mLoaded{};
    std::optional<bool> mStopResult;
};

KernelLifecycle& kernel() noexcept;

} // namespace ll::android
