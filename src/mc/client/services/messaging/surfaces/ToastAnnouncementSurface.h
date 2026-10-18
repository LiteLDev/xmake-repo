#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/services/messaging/surfaces/BaseMessageSurface.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
class ToastMessage;
// clang-format on

class ToastAnnouncementSurface : public ::BaseMessageSurface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mHasQueuedToast;
    ::ll::TypedStorage<8, 24, std::vector<MessageData>> mMessageData;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mInGameMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastAnnouncementSurface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastAnnouncementSurface();

    virtual void reset();

    virtual void _handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ToastAnnouncementSurface(::PlayerMessagingService&);

    MCNAPI ::ToastMessage const _makeToastMessage(::MessageData const&) const;

    MCNAPI bool checkIfSuppressed();

    MCNAPI ::ToastMessage getInGameToast() const;

    MCNAPI ::ToastMessage getToast() const;

    MCNAPI bool hasInGameToastToShow() const;

    MCNAPI bool hasToastToShow() const;

    MCNAPI void reportClick(std::string const&);

    MCNAPI void reportDismiss(std::string const&);

    MCNAPI void reportImpression(std::string const&);

    MCNAPI void reportQueued();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService&);
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
class ToastAnnouncementSurface {};
#endif // @header-generator platform
