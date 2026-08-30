#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/IEventFilter.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class EventManager; }
// clang-format on

template <typename... T0>
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
