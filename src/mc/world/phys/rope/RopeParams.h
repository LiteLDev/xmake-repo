#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct RopeParams {
public:
    // RopeParams inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Flags : uint {
#else // @header-generator platform
    enum class Flags : int {
#endif // @header-generator platform
        None             = 0,
        DynamicResize    = 2,
        DynamicStretch   = 4,
        CollisionEnabled = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mNodeDist;
    ::ll::TypedStorage<4, 4, float>   mNodeSize;
    ::ll::TypedStorage<4, 4, float>   mGravity;
    ::ll::TypedStorage<4, 4, float>   mSlack;
    ::ll::TypedStorage<4, 4, float>   mMaxTension;
    ::ll::TypedStorage<4, 4, float>   mVelDamping;
    ::ll::TypedStorage<4, 4, float>   mRelaxation;
    ::ll::TypedStorage<4, 4, float>   mFriction;
    ::ll::TypedStorage<4, 12, ::Vec3> mStartPin;
    ::ll::TypedStorage<4, 12, ::Vec3> mEndPin;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>   mIterations;
    ::ll::TypedStorage<8, 8, ulong>   mDestroyDelay;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>  mIterations;
    ::ll::TypedStorage<8, 8, uint64>  mDestroyDelay;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>     mFlags;
    ::ll::TypedStorage<4, 4, float>   mLength;
    ::ll::TypedStorage<4, 4, float>   mOriginalNodeDist;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RopeParams(::Vec3 const&, ::Vec3 const&, float);

    MCNAPI void leadInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&, float);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
