#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class MoveActorDeltaData;
class Vec2;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MoveActorAbsoluteData {
public:
    // MoveActorAbsoluteData inner types define
    union Header {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 1> mRaw;
        ::ll::UntypedStorage<1, 1> mField_b181a669;
#else // @header-generator platform
        bool                            mForceCompletion      : 1;
        bool                            mForceMove            : 1;
        bool                            mForceMoveLocalEntity : 1;
        bool                            mIsOnGround           : 1;
        ::ll::TypedStorage<1, 1, uchar> mRaw;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<1, 1, ::MoveActorAbsoluteData::Header> mHeader;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mPos;
    ::ll::TypedStorage<1, 1, schar>                           mRotX;
    ::ll::TypedStorage<1, 1, schar>                           mRotY;
    ::ll::TypedStorage<1, 1, schar>                           mRotYHead;
    ::ll::TypedStorage<1, 1, schar>                           mRotYBody;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    MoveActorAbsoluteData();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MoveActorAbsoluteData(::Actor const&);
#else // @header-generator platform
    MCAPI explicit MoveActorAbsoluteData(::Actor const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MoveActorDeltaData calculateDelta(::MoveActorAbsoluteData const&) const;

    MCNAPI ::Vec2 getRot() const;

    MCNAPI float getYBodyRot() const;

    MCNAPI float getYHeadRot() const;

    MCNAPI bool isDifferenceSignificant(::MoveActorAbsoluteData const&, ::Vec3 const&) const;

    MCNAPI void setRot(::Vec2 const&);

    MCNAPI void setYBodyRot(float);

    MCNAPI void setYHeadRot(float);
#else // @header-generator platform
    MCAPI bool isDifferenceSignificant(::MoveActorAbsoluteData const& old, ::Vec3 const& velocity) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor const& entity);
#endif // @header-generator platform
    // NOLINTEND
};
