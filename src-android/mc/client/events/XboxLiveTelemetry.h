#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class XboxLiveTelemetry : public ::Social::Events::AggregationEventListener {
public:
    // prevent constructor by default
    XboxLiveTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XboxLiveTelemetry();

    virtual int getEventTagsFilter() const;

    virtual void sendEvent(::Social::Events::Event const&);

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEventTagsFilter() const;

    MCNAPI void $sendEvent(::Social::Events::Event const&);

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
