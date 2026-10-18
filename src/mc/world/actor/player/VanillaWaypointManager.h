#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/ServerLocatorBar.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerLocatorBar;
// clang-format on

class VanillaWaypointManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>    mWaypointGroup;
    ::ll::TypedStorage<1, 1, bool> mIsLocatorBarEnabled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ServerLocatorBar::GroupStrongHandle> mWaypointGroup;
    ::ll::TypedStorage<1, 1, bool>                                   mIsLocatorBarEnabled;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void update(::Player&, ::ServerLocatorBar&, bool);

    MCNAPI ~VanillaWaypointManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void update(::Player& self, ::ServerLocatorBar& serverLocatorBar, bool isLocatorBarEnabled);
#endif // @header-generator platform
    // NOLINTEND
};
