#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/HitResultType.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct AABBHitResult;
// clang-format on

class HitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>          mStartPos;
    ::ll::TypedStorage<4, 12, ::Vec3>          mRayDir;
    ::ll::TypedStorage<4, 4, ::HitResultType>  mType;
    ::ll::TypedStorage<1, 1, uchar>            mFacing;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>          mPos;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<4, 24, ::AABB>          mEntityAABB;
    ::ll::TypedStorage<1, 1, bool>             mIsHitLiquid;
    ::ll::TypedStorage<1, 1, uchar>            mLiquidFacing;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mLiquid;
    ::ll::TypedStorage<4, 12, ::Vec3>          mLiquidPos;
    ::ll::TypedStorage<1, 1, bool>             mIndirectHit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HitResult(::Vec3 const&, ::Vec3 const&, ::Actor&);

    MCNAPI HitResult(::Vec3 const&, ::Vec3 const&, ::Actor&, ::Vec3 const&);

    MCNAPI float distanceToSqr(::Actor const&) const;

    MCNAPI ::Actor* getEntity() const;

    MCNAPI ::HitResult& operator=(::HitResult&&);

    MCNAPI ::HitResult& operator=(::HitResult const&);

    MCNAPI void setIsHitLiquid(bool, ::HitResult const&);

    MCNAPI ~HitResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&, ::Actor&);

    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&, ::Actor&, ::Vec3 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
