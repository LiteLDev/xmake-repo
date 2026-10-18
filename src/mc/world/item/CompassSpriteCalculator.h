#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class CompassSpriteCalculator {
public:
    // CompassSpriteCalculator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using PointToTargetFunction = ::BlockPos (*)(::BlockSource const*, ::Actor*);

#else // @header-generator platform
#endif // @header-generator platform
    using IsPointingAtTargetFunction = bool (*)(::BlockSource const*, ::Actor*);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using PointToTargetFunction = ::BlockPos (*)(::BlockSource const*, ::Actor*);
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockPos (*)(::BlockSource const*, ::Actor*)> mTargetToPointTo;
    ::ll::TypedStorage<8, 8, bool (*)(::BlockSource const*, ::Actor*)>       mIsPointingAtTarget;
    ::ll::TypedStorage<4, 4, int>                                            mFrame;
    ::ll::TypedStorage<4, 4, float>                                          mRot;
    ::ll::TypedStorage<4, 4, float>                                          mRotA;
    ::ll::TypedStorage<4, 4, int>                                            mLastUpdatedAt;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CompassSpriteCalculator(CompassSpriteCalculator const&);
    CompassSpriteCalculator();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CompassSpriteCalculator(
        ::BlockPos (*)(::BlockSource const*, ::Actor*),
        bool (*)(::BlockSource const*, ::Actor*),
        float,
        float
#else // @header-generator platform
    MCAPI int updateFromPosition(
        ::BlockSource const* region,
        ::Actor*             actor,
        float                x,
        float                z,
        float                yRot,
        bool                 isZFlipped,
        bool                 instant
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI int getFrame() const;

    MCNAPI ::CompassSpriteCalculator& operator=(::CompassSpriteCalculator const&);

    MCNAPI int update(::Actor&, bool);

    MCNAPI int updateFromPosition(::BlockSource const*, ::Actor*, float, float, float, bool, bool);

    MCNAPI int updateFromPosition(::BlockSource const*, ::BlockPos const&, float, float, float, bool, bool, bool);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isInLastDeathDimension(::BlockSource const*, ::Actor*);
#else // @header-generator platform
    MCAPI static bool isInLastDeathDimension(::BlockSource const* region, ::Actor* actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isInOverworldDimension(::BlockSource const*, ::Actor*);
#else // @header-generator platform
    MCAPI static bool isInOverworldDimension(::BlockSource const* region, ::Actor*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos pointTowardsLastDeathLocation(::BlockSource const*, ::Actor*);
#else // @header-generator platform
    MCAPI static ::BlockPos pointTowardsLastDeathLocation(::BlockSource const* region, ::Actor* actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos pointTowardsSpawnPoint(::BlockSource const*, ::Actor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::BlockPos (*)(::BlockSource const*, ::Actor*), bool (*)(::BlockSource const*, ::Actor*), float, float);
#else // @header-generator platform
    MCAPI static ::BlockPos pointTowardsSpawnPoint(::BlockSource const* region, ::Actor*);
#endif // @header-generator platform
    // NOLINTEND
};
