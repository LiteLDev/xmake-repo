#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
struct MessageData;
// clang-format on

class BaseMessageSurface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&>        mMessagingService;
    ::ll::TypedStorage<1, 1, bool>                             mShowMessageSuppressed;
    ::ll::TypedStorage<8, 24, std::string>                     mSurfaceName;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mNewMessageSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMessageSurface& operator=(BaseMessageSurface const&);
    BaseMessageSurface(BaseMessageSurface const&);
    BaseMessageSurface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseMessageSurface();

    virtual void reset();

    virtual void _handleNewMessages(std::vector<MessageData>&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseMessageSurface(std::string, ::PlayerMessagingService&);

    MCNAPI void _handleDismiss(::MessageData const&);

    MCNAPI void _handleImpression(::MessageData const&);

    MCNAPI void _handleReportClick(::MessageData const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::PlayerMessagingService&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
