#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/IEventFilter.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class EventManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
template <typename... T0>
#if defined(LL_PLAT_A) // @header-generator platform
class Filter : public ::IEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::Events::EventManager>> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    Filter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Filter();

    virtual void setAcceptNewEvents(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setAcceptNewEvents(bool);
    // NOLINTEND
};
#else // @header-generator platform
struct Filter {};
#endif // @header-generator platform
