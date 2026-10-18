#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/services/messaging/surfaces/BaseMessageSurface.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Core { class Path; }
// clang-format on

class AnnouncementSurface : public ::BaseMessageSurface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mImageLoadedSubscription;
    ::ll::TypedStorage<8, 24, std::vector<MessageData>>        mMessageData;
    ::ll::TypedStorage<1, 1, bool>                             mHasShownMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnouncementSurface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnouncementSurface();

    virtual void reset();

    virtual void _handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnnouncementSurface(::PlayerMessagingService&, std::string const&);

    MCNAPI ::MessageData const& getMessage() const;

    MCNAPI bool hasMessageToShow() const;

    MCNAPI void reportClick(std::string const&, std::string const&, std::string const&);

    MCNAPI void reportDismiss(std::string const&, std::string const&);

    MCNAPI void reportImpression(::MessageData const&);

    MCNAPI void reportSuppressed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService&, std::string const&);
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

    MCNAPI void $_handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class AnnouncementSurface {};
#endif // @header-generator platform
