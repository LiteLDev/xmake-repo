#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct InboxSettingsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShowMessageBadges;
    ::ll::TypedStorage<1, 1, bool> mShowInvitesBadges;
    // NOLINTEND
};
#else // @header-generator platform
struct InboxSettingsData {};
#endif // @header-generator platform
