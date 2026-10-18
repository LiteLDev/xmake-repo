#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BeforeLevelForLevelHoldingOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk393182;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeLevelForLevelHoldingOwnership& operator=(BeforeLevelForLevelHoldingOwnership const&);
    BeforeLevelForLevelHoldingOwnership(BeforeLevelForLevelHoldingOwnership const&);
    BeforeLevelForLevelHoldingOwnership();
};
#else // @header-generator platform
class BeforeLevelForLevelHoldingOwnership {};
#endif // @header-generator platform
#endif // @header-generator platform
