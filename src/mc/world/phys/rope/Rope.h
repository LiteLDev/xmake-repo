#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/rope/AABBBucket.h"
#include "mc/world/phys/rope/RopeNode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/phys/rope/RopeParams.h"
#include "mc/world/phys/rope/RopePoints.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/rope/RopeWave.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/phys/rope/rope_details/AABBPred.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
struct AABBBucket;
struct RopeNode;
struct RopeWave;
#endif // @header-generator platform
// clang-format on

class Rope {
public:
    // Rope inner types declare
    // clang-format off
    struct IntermediateData;
    // clang-format on

    // Rope inner types define
    struct IntermediateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::RopePoints> mQueuedRenderPoints;
        ::ll::TypedStorage<4, 12, ::Vec3>       mPrevStartPin;
        ::ll::TypedStorage<4, 12, ::Vec3>       mPrevEndPin;
        ::ll::TypedStorage<4, 12, ::Vec3>       mStartPin;
        ::ll::TypedStorage<4, 12, ::Vec3>       mEndPin;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>         mToCutNode;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>        mToCutNode;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>          mAbandonCollision;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        IntermediateData& operator=(IntermediateData const&);
        IntermediateData(IntermediateData const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::Rope::IntermediateData>                                    mIntermediateData;
    ::ll::TypedStorage<8, 88, ::RopeParams>                                                mParameters;
    ::ll::TypedStorage<8, 32, ::RopePoints>                                                mRenderPoints;
    ::ll::TypedStorage<8, 24, std::vector<RopeNode>>                                       mNodes;
    ::ll::TypedStorage<8, 24, std::vector<AABBBucket>>                                     mColliderBuckets;
    ::ll::TypedStorage<8, 24, std::vector<RopeWave>>                                       mWaves;
    ::ll::TypedStorage<8, 24, std::set<AABB, RopeDetails::AABBPred, std::allocator<AABB>>> mDenyListedColliders;
    ::ll::TypedStorage<8, 8, ulong>                                                        mCutNode;
    ::ll::TypedStorage<8, 8, ulong>                                                        mMinNodes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::Rope::IntermediateData>                    mIntermediateData;
    ::ll::TypedStorage<8, 88, ::RopeParams>                                mParameters;
    ::ll::TypedStorage<8, 32, ::RopePoints>                                mRenderPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeNode>>                   mNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABBBucket>>                 mColliderBuckets;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeWave>>                   mWaves;
    ::ll::TypedStorage<8, 16, ::std::set<::AABB, ::RopeDetails::AABBPred>> mDenyListedColliders;
    ::ll::TypedStorage<8, 8, uint64>                                       mCutNode;
    ::ll::TypedStorage<8, 8, uint64>                                       mMinNodes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Rope& operator=(Rope const&);
    Rope(Rope const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _solveCollisions(bool const);
#else // @header-generator platform
    MCAPI Rope();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addWave(::RopeWave&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _finalizeBucket(::AABBBucket& bucket);

    MCAPI float _solveCollisions(bool const checkDenyList);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializePins(std::optional<RopeParams>);
#else // @header-generator platform
    MCAPI void initializePins(::std::optional<::RopeParams> parameters);

    MCAPI ~Rope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
