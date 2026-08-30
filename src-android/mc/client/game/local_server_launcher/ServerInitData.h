#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/StartIntent.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/world/level/LevelSettings.h"

namespace LocalServerLauncher {

struct ServerInitData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mPremiumTemplateContentIdentity;
    ::ll::UntypedStorage<8, 1112>                mSettings;
    ::ll::TypedStorage<4, 4, ::StartIntent>      mStartIntent;
    ::ll::TypedStorage<8, 24, std::string>       mLevelId;
    ::ll::TypedStorage<8, 24, std::string>       mLevelName;
    ::ll::TypedStorage<8, 24, std::string>       mErrorMessage;
    // NOLINTEND
};

} // namespace LocalServerLauncher
