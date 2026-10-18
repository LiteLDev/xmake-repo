#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/world/level/storage/GameRule.h"
#include "mc/world/level/storage/GameRules.h"

struct LevelGameRuleChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4>                                                 mRule;
    ::ll::UntypedStorage<1, 1>                                                 mType;
    ::ll::TypedStorage<4, 8, std::variant<cereal::NullType, bool, int, float>> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::GameRules::GameRulesIndex>                          mRule;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                     mType;
    ::ll::TypedStorage<4, 8, ::std::variant<::cereal::NullType, bool, int, float>> mValue;
#endif // @header-generator platform
    // NOLINTEND
};
