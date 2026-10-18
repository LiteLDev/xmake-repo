#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/LevelAnimateTickType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockSource;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Vec3;
#endif // @header-generator platform
// clang-format on

class LevelAnimateTickHelper {
public:
    // LevelAnimateTickHelper inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct TimeLimitedJavaParityOffsetCenterData;
#else // @header-generator platform
#endif // @header-generator platform
    struct LoopCount;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TimeLimitedJavaParityOffsetCenterData;
#endif // @header-generator platform
    // clang-format on

    // LevelAnimateTickHelper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TimeLimitedJavaParityOffsetCenterData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mAnimateTickCenter;
        ::ll::TypedStorage<4, 4, int>         mFullRadius;
        ::ll::TypedStorage<4, 4, int>         mHalfRadius;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct LoopCount {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> mLoopCountFullRadius;
        ::ll::TypedStorage<4, 4, uint> mLoopCountHalfRadius;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk6eea10;
        ::ll::UntypedStorage<4, 4> mUnk5d0383;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LoopCount& operator=(LoopCount const&);
        LoopCount(LoopCount const&);
        LoopCount();
    };

    struct TimeLimitedJavaParityOffsetCenterData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk103825;
        ::ll::UntypedStorage<4, 4>  mUnkc00d85;
        ::ll::UntypedStorage<4, 4>  mUnk355eb9;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeLimitedJavaParityOffsetCenterData& operator=(TimeLimitedJavaParityOffsetCenterData const&);
        TimeLimitedJavaParityOffsetCenterData(TimeLimitedJavaParityOffsetCenterData const&);
        TimeLimitedJavaParityOffsetCenterData();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                mPrevPosition;
    ::ll::TypedStorage<4, 4, uint>                   mNumberOfTicksNextUpdate;
    ::ll::TypedStorage<4, 4, ::LevelAnimateTickType> mTickType;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk3e3067;
    ::ll::UntypedStorage<4, 4>  mUnkd511a7;
    ::ll::UntypedStorage<4, 4>  mUnk623737;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelAnimateTickHelper& operator=(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper(LevelAnimateTickHelper const&);
#endif // @header-generator platform
    LevelAnimateTickHelper();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LevelAnimateTickHelper(::BaseGameVersion const&);

    MCNAPI void _tickBlockAnimationsTimeLimitedJavaParity(
        ::BlockSource&,
        ::Random&,
        ::Vec3 const&,
        ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData const&
    );

    MCNAPI void doAnimateTick(::BlockSource&, ::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void
    _tickBlockAnimationsJavaParity(::BlockSource& region, ::Random& random, ::Vec3 const& centerPosition) const;

    MCNAPI void _tickBlockAnimationsTimeLimitedJavaParity(
        ::BlockSource&                                                         region,
        ::Random&                                                              random,
        ::Vec3 const&                                                          centerPosition,
        ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData const& offsetCenterData
    );

    MCNAPI void doAnimateTick(::BlockSource& region, ::Vec3 const& centerPosition, ::Vec3 const& viewDirection);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _animateTickRandomBlockInRadius(::BlockSource&, ::Random&, ::Vec3 const&, float, bool);

    MCNAPI static ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData
    _computeTimeLimitedJavaParityAnimateTickCenter(::Vec3 const&, ::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void _animateTickRandomBlockInRadius(
        ::BlockSource& region,
        ::Random&      random,
        ::Vec3 const&  centerPosition,
        float          radius,
        bool           doAnimateTickBedrockLegacy
    );

    MCNAPI static ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData
    _computeTimeLimitedJavaParityAnimateTickCenter(
        ::Vec3 const& centerPosition,
        ::Vec3 const& prevPosition,
        ::Vec3 const& viewDirection
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& MIN_TIME_LIMITED_JAVA_PARITY_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::BaseGameVersion const& MIN_TIME_LIMITED_JAVA_PARITY_VERSION();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
