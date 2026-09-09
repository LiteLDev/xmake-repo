#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BossbarInfo.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BossbarManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, BossbarInfo>> mBossbars;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BossbarManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
