#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/config/AdventureSettingsOverride.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/LevelDataValue.h"
#else // @header-generator platform
#endif // @header-generator platform

struct LevelDataOverrideValues {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 24, std::vector<GameRule>>                            mGameRules;
    ::ll::TypedStorage<8, 40, std::unordered_map<AbilitiesIndex, Ability>>      mAbilities;
    ::ll::TypedStorage<1, 10, ::AdventureSettingsOverride>                      mAdventureSettings;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk4558ca;
    ::ll::UntypedStorage<8, 24> mUnk20ebef;
    ::ll::UntypedStorage<8, 64> mUnk5bc4ce;
    ::ll::UntypedStorage<1, 10> mUnk363223;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LevelDataOverrideValues& operator=(LevelDataOverrideValues const&);
    LevelDataOverrideValues(LevelDataOverrideValues const&);
    LevelDataOverrideValues();
#endif // @header-generator platform
};
