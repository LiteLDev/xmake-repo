#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/edu_discovery/Button.h"
#include "mc/client/social/edu_discovery/ButtonAction.h"
#include "mc/client/social/edu_discovery/LocKey.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
struct Dialog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       mId;
    ::ll::TypedStorage<8, 48, ::EDUDiscovery::LocKey>            mTitleText;
    ::ll::TypedStorage<8, 48, ::EDUDiscovery::LocKey>            mBodyText;
    ::ll::TypedStorage<8, 24, std::vector<EDUDiscovery::Button>> mButtons;
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ButtonAction>       mCloseAction;
    // NOLINTEND
};
#else // @header-generator platform
struct Dialog {};
#endif // @header-generator platform

} // namespace EDUDiscovery
