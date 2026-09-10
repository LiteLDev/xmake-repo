#pragma once
#include "ll/api/android/Kernel.h"
#include "ll/core/mod/ModOwner.h"
#include <array>
#include <atomic>
#include <condition_variable>
#include <mutex>

namespace ll::android {
class EventRegistry final {
public:
    EventRegistry() = default;
    ~EventRegistry();
    EventRegistry(EventRegistry const&)            = delete;
    EventRegistry& operator=(EventRegistry const&) = delete;
    bool           open() noexcept;
    bool           activateOwner(ModOwner&) noexcept;
    uint64_t       subscribe(uint32_t kind, LLAndroidEventCallback callback, void* userData) noexcept;
    bool           unsubscribe(uint64_t token) noexcept;
    void           publish(uint32_t kind, void const* payload) noexcept;
    bool           removeOwner(ModOwner&) noexcept;
    bool           closeAndDrain() noexcept;
    bool           clean() const noexcept;
    struct Stats {
        size_t slots{}, inFlight{}, snapshots{};
        bool   publishing{};
    };
    Stats stats() const noexcept;

private:
    friend struct EventRegistryFixture;
    struct Slot {
        Slot*                  previous{};
        Slot*                  next{};
        ModOwner*              owner{};
        uint64_t               token{};
        uint32_t               kind{};
        LLAndroidEventCallback callback{};
        void*                  userData{};
        size_t                 references{1}, inFlight{};
        bool                   active{true}, counted{};
    };
    mutable std::mutex                 mutex;
    std::condition_variable            drained;
    std::atomic<bool>                  publishing{};
    std::array<std::atomic<size_t>, 2> listeners{};
    Slot*                              first{};
    Slot*                              last{};
    uint64_t                           nextToken{1};
    bool                               tokensExhausted{};
    size_t                             inFlight{}, snapshots{};
    Slot*                              find(uint64_t token) const noexcept;
    void                               deactivate(Slot&) noexcept;
    void                               unlink(Slot&) noexcept;
    static void                        release(Slot*) noexcept;
    void                               reclaim() noexcept;
};
} // namespace ll::android
