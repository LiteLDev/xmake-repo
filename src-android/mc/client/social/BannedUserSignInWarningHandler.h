#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
namespace Social { class User; }
// clang-format on

namespace Social {

class BannedUserSignInWarningHandler {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onUserIsSignedIntoPlayFabAndGameIsInitialized(std::shared_ptr<Social::User>, ::OreUI::Router&);

    MCNAPI void onUserSignOutPlayFab(std::shared_ptr<Social::User>);
    // NOLINTEND
};

} // namespace Social
