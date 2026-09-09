#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct InboxSummaryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<std::string, ulong>> categoryMessagesTotal;
    ::ll::TypedStorage<8, 24, std::map<std::string, ulong>> categoryMessagesUnread;
    ::ll::TypedStorage<8, 8, ulong>                         messageCountTotal;
    ::ll::TypedStorage<8, 8, ulong>                         messageCountUnread;
    ::ll::TypedStorage<1, 1, bool>                          messageBadgeVisible;
    ::ll::TypedStorage<1, 1, bool>                          invitesBadgeVisible;
    ::ll::TypedStorage<1, 1, bool>                          showOnlyFriendInvites;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~InboxSummaryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
