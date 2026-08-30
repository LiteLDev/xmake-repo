#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

class GameRulesChangedPacketData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GameRule>> mRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addRule(::GameRule const&);

    MCNAPI void setRules(std::vector<GameRule>);
    // NOLINTEND
};
