#pragma once
#include <cstddef>
#include <cstdint>

namespace ll::android {
// State is accessed under EventRegistry's mutex. Loader owns this object until
// removeOwner succeeds and the lifecycle callback that borrows it has returned.
struct ModOwner {
    uint64_t id{};
    bool     enabled{}, retiring{};
    size_t   inFlight{};
};
enum class ModPhase { None, Load, Enable, Callback, Disable, Unload };
struct OwnerContext {
    ModOwner*   owner{};
    ModPhase    phase{};
    uint64_t    callbackToken{};
    void const* callbackSource{};
};
OwnerContext currentOwner() noexcept;
class OwnerScope final {
public:
    OwnerScope(
        ModOwner&   owner,
        ModPhase    phase,
        uint64_t    callbackToken  = 0,
        void const* callbackSource = nullptr
    ) noexcept;
    ~OwnerScope();
    OwnerScope(OwnerScope const&)            = delete;
    OwnerScope& operator=(OwnerScope const&) = delete;

private:
    OwnerContext previous;
};
} // namespace ll::android
