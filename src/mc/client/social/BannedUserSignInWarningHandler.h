#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class BannedUserSignInWarningHandler {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onUserIsSignedIntoPlayFabAndGameIsInitialized(std::shared_ptr<Social::User>, ::OreUI::Router&);

    MCNAPI void onUserSignOutPlayFab(std::shared_ptr<Social::User>);
    // NOLINTEND
};
#else // @header-generator platform
class BannedUserSignInWarningHandler {};
#endif // @header-generator platform

} // namespace Social
