#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/LevelAnimateTickType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockSource;
class Random;
// clang-format on

class LevelAnimateTickHelper {
public:
    // LevelAnimateTickHelper inner types declare
    // clang-format off
    struct TimeLimitedJavaParityOffsetCenterData;
    struct LoopCount;
    // clang-format on

    // LevelAnimateTickHelper inner types define
    struct TimeLimitedJavaParityOffsetCenterData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mAnimateTickCenter;
        ::ll::TypedStorage<4, 4, int>         mFullRadius;
        ::ll::TypedStorage<4, 4, int>         mHalfRadius;
        // NOLINTEND
    };

    struct LoopCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mLoopCountFullRadius;
        ::ll::TypedStorage<4, 4, uint> mLoopCountHalfRadius;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                mPrevPosition;
    ::ll::TypedStorage<4, 4, uint>                   mNumberOfTicksNextUpdate;
    ::ll::TypedStorage<4, 4, ::LevelAnimateTickType> mTickType;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelAnimateTickHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelAnimateTickHelper(::BaseGameVersion const&);

    MCNAPI void _tickBlockAnimationsTimeLimitedJavaParity(
        ::BlockSource&,
        ::Random&,
        ::Vec3 const&,
        ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData const&
    );

    MCNAPI void doAnimateTick(::BlockSource&, ::Vec3 const&, ::Vec3 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _animateTickRandomBlockInRadius(::BlockSource&, ::Random&, ::Vec3 const&, float, bool);

    MCNAPI static ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData
    _computeTimeLimitedJavaParityAnimateTickCenter(::Vec3 const&, ::Vec3 const&, ::Vec3 const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& MIN_TIME_LIMITED_JAVA_PARITY_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const&);
    // NOLINTEND
};
