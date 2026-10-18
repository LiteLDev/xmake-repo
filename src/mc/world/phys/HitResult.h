#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/Actor.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/HitResultType.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
struct AABBHitResult;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class HitResult {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    [[nodiscard]] constexpr explicit operator bool() const {
        return mType == HitResultType::Tile || mType == HitResultType::Entity;
    }

    HitResult& operator=(HitResult const&) = default;
    HitResult(HitResult const&)            = default;
    HitResult(::HitResult&&)               = default;

    HitResult(
        ::Vec3 const& startPos,
        ::Vec3 const& rayDir,
        ::Actor&      entity,
        ::Vec3 const& pos,
        ::AABB const& entityAABB
    )
    : mStartPos(startPos),
      mRayDir(rayDir),
      mType(HitResultType::Entity),
      mFacing(0),
      mPos(pos),
      mEntity(entity.getEntityContext().getWeakRef()),
      mEntityAABB(entityAABB),
      mIsHitLiquid(false),
      mLiquidFacing(0),
      mIndirectHit(false) {}

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::Vec3          mStartPos;
    ::Vec3          mRayDir;
    ::HitResultType mType;
    uchar           mFacing;
    ::BlockPos      mBlock;
    ::Vec3          mPos;
    ::WeakEntityRef mEntity;
    ::AABB          mEntityAABB;
    bool            mIsHitLiquid;
    uchar           mLiquidFacing;
    ::BlockPos      mLiquid;
    ::Vec3          mLiquidPos;
    bool            mIndirectHit;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    HitResult() = default;

#else // LL_PLAT_C
public:
    HitResult() = default;

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HitResult(::Vec3 const&, ::Vec3 const&, ::Actor&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HitResult(::Vec3 const&, ::Vec3 const&, ::Actor&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::Actor* getEntity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float distanceToSqr(::Actor const&) const;

    MCNAPI ::Actor* getEntity() const;

    MCNAPI ::HitResult& operator=(::HitResult&&);

    MCNAPI ::HitResult& operator=(::HitResult const&);

    MCNAPI void setIsHitLiquid(bool, ::HitResult const&);

    MCNAPI ~HitResult();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::HitResult& operator=(::HitResult&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&, ::Actor&);

    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&, ::Actor&, ::Vec3 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
