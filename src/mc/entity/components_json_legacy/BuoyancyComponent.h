#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/BuoyancyMovementType.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class IConstBlockSource;
class SemVersion;
struct StateVectorComponent;
// clang-format on

class BuoyancyComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                         mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                         mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                         mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                         mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, ::BuoyancyMovementType>        mMovementType;
    ::ll::TypedStorage<1, 1, bool>                          mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                          mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 8, double>                        mTimer;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mLiquidBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                             mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                             mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, ::BuoyancyMovementType>            mMovementType;
    ::ll::TypedStorage<1, 1, bool>                              mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                              mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 8, double>                            mTimer;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mLiquidBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BuoyancyComponent();
#else // @header-generator platform
    MCAPI bool canFloat(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canAutoStepFromLiquid() const;
#else // @header-generator platform
    MCAPI void loadData(::std::string const& data, ::SemVersion const& engineVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canFloat(::StateVectorComponent const&, ::IConstBlockSource const&) const;

    MCNAPI float getBaseBuoyancy() const;

    MCNAPI float getBigWaveProbability() const;

    MCNAPI float getBigWaveSpeedMultiplier() const;

    MCNAPI ::BuoyancyMovementType getMovementType() const;

    MCNAPI double getTimer() const;

    MCNAPI void increaseTimer(float);

    MCNAPI void loadData(std::string const&, ::SemVersion const&);

    MCNAPI bool needToResurface(::StateVectorComponent const&, ::IConstBlockSource const&) const;

    MCNAPI bool shouldApplyGravity() const;

    MCNAPI ~BuoyancyComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool
    needToResurface(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;
#endif // @header-generator platform
    // NOLINTEND
};
