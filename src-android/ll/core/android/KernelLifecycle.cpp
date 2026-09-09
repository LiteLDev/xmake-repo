#include "ll/core/android/KernelLifecycle.h"

namespace ll::android {

bool KernelLifecycle::load(pl::android::ModContext const& context) noexcept {
    if (context.id().empty() || context.rootPath().empty()) {
        return false;
    }
    auto expected = State::Unloaded;
    if (!state.compare_exchange_strong(expected, State::Loaded)) {
        return false;
    }
    context.log(4, "LeviLamina G2: load");
    return true;
}

bool KernelLifecycle::enable(pl::android::ModContext const& context) noexcept {
    auto expected = State::Loaded;
    if (!state.compare_exchange_strong(expected, State::Enabled)) {
        return false;
    }
    context.log(4, "LeviLamina G2: enable");
    return true;
}

bool KernelLifecycle::disable(pl::android::ModContext const& context) noexcept {
    auto expected = State::Enabled;
    if (!state.compare_exchange_strong(expected, State::Loaded)) {
        return expected == State::Loaded;
    }
    context.log(4, "LeviLamina G2: disable");
    return true;
}

bool KernelLifecycle::unload(pl::android::ModContext const& context) noexcept {
    auto expected = State::Loaded;
    if (!state.compare_exchange_strong(expected, State::Unloaded)) {
        return expected == State::Unloaded;
    }
    context.log(4, "LeviLamina G2: unload");
    return true;
}

} // namespace ll::android
