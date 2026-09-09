#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class BeforeLevelForLevelHoldingOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mClientLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeLevelForLevelHoldingOwnership();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BeforeLevelForLevelHoldingOwnership();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
