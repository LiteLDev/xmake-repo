#pragma once

#include "ll/core/android/CompilationContract.h"
#include "pl/android/Mod.hpp"

#include <atomic>
#include <cstdint>

namespace ll::android {

class KernelLifecycle {
public:
    bool load(pl::android::ModContext const& context) noexcept;
    bool enable(pl::android::ModContext const& context) noexcept;
    bool disable(pl::android::ModContext const& context) noexcept;
    bool unload(pl::android::ModContext const& context) noexcept;

private:
    enum class State : std::int32_t { Unloaded = 0, Loaded = 1, Enabled = 3 };
    std::atomic<State> state{State::Unloaded};
};

} // namespace ll::android
