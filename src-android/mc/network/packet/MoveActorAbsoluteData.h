#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MoveActorDeltaData;
class Vec2;
// clang-format on

class MoveActorAbsoluteData {
public:
    // MoveActorAbsoluteData inner types define
    union Header {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mRaw;
        ::ll::UntypedStorage<1, 1> mField_b181a669;
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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MoveActorAbsoluteData(::Actor const&);

    MCNAPI ::MoveActorDeltaData calculateDelta(::MoveActorAbsoluteData const&) const;

    MCNAPI ::Vec2 getRot() const;

    MCNAPI float getYBodyRot() const;

    MCNAPI float getYHeadRot() const;

    MCNAPI bool isDifferenceSignificant(::MoveActorAbsoluteData const&, ::Vec3 const&) const;

    MCNAPI void setRot(::Vec2 const&);

    MCNAPI void setYBodyRot(float);

    MCNAPI void setYHeadRot(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&);
    // NOLINTEND
};
