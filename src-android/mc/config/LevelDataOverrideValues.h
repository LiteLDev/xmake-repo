#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/AdventureSettingsOverride.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/LevelDataValue.h"

struct LevelDataOverrideValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 24, std::vector<GameRule>>                            mGameRules;
    ::ll::TypedStorage<8, 40, std::unordered_map<AbilitiesIndex, Ability>>      mAbilities;
    ::ll::TypedStorage<1, 10, ::AdventureSettingsOverride>                      mAdventureSettings;
    // NOLINTEND
};
