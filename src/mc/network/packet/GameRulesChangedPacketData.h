#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class GameRule;
// clang-format on
#endif // @header-generator platform

class GameRulesChangedPacketData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<GameRule>> mRules;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::GameRule>> mRules;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRule(::GameRule const&);
#else // @header-generator platform
    MCAPI void setRules(::std::vector<::GameRule> rules);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRules(std::vector<GameRule>);
#else // @header-generator platform
    MCAPI ~GameRulesChangedPacketData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
