#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace Social { class IUserManager; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class PlayStreamEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayStreamEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayStreamEventListener();

    virtual int getEventTagsFilter() const;

    virtual void sendEvent(::Social::Events::Event const&);

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;

    virtual bool _isListenerReadyForEvents() const;
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

    MCNAPI bool $_isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
