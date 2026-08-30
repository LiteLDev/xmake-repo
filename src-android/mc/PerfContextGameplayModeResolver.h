#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/IsMarketplaceContent.h"
#include "mc/PerfContextGameplayMode.h"
#include "mc/events/NetworkType.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

class PerfContextGameplayModeResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level*> mLevel;
    ::ll::TypedStorage<1, 1, bool>     mIsInGame;
    ::ll::TypedStorage<1, 1, bool>     mIsMarketplaceContent;
    ::ll::TypedStorage<1, 1, bool>     mIsSingleplayer;
    ::ll::TypedStorage<1, 1, bool>     mIsMultiplayerOnline;
    ::ll::TypedStorage<1, 1, bool>     mIsRealm;
    ::ll::TypedStorage<1, 1, bool>     mIsThirdPartyServer;
    ::ll::TypedStorage<1, 1, bool>     mIsGathering;
    // NOLINTEND
};
