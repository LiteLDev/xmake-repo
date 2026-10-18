#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class EventRef {};
#else // @header-generator platform
template <typename EventVariant>
class EventRef {
    static_assert(std::is_copy_constructible_v<EventVariant>, "EventVariant must be copy constructible");

public:
    template <typename Event>
    EventRef(Event& event)
        requires(!std::same_as<std::decay_t<Event>, EventRef> && std::is_const_v<Event>)
    : variant_(std::cref(event)) {}

    template <typename Event>
    EventRef(Event& event)
        requires(!std::same_as<std::decay_t<Event>, EventRef> && !std::is_const_v<Event>)
    : variant_(std::ref(event)) {}

    EventRef(const EventRef& other) = default;

    EventVariant& get() { return variant_; }

    EventVariant const& get() const { return variant_; }

private:
    EventVariant variant_;
};
#endif // @header-generator platform
