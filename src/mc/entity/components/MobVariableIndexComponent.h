#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

struct MobVariableIndexComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mAttackTime;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mChargeAmount;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mDamageNearbyMobs;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mGlidingSpeedValue;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mHasTarget;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsBlocking;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsBowAndArrow;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsBrandishingSpear;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsHoldingLeft;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsHoldingRight;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsHoldingSpyglass;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsSneaking;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsTootingGoatHorn;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mIsUsingBrush;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mLeftArmSwimAmount;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mRightArmSwimAmount;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mSwimAmount;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mUseItemIntervalProgress;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mUseItemStartupProgress;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobVariableIndexComponent();
#else // @header-generator platform
    MCAPI MobVariableIndexComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
