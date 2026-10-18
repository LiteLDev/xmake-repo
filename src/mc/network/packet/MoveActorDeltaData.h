#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/MoveActorAbsoluteData.h"

class MoveActorDeltaData {
public:
    // MoveActorDeltaData inner types define
    union Header {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<2, 2> mRaw;
        ::ll::UntypedStorage<1, 2> mField_913852a2;
#else // @header-generator platform
        bool                             mContainsPositionX     : 1;
        bool                             mContainsPositionY     : 1;
        bool                             mContainsPositionZ     : 1;
        bool                             mContainsRotationX     : 1;
        bool                             mContainsRotationY     : 1;
        bool                             mContainsRotationYHead : 1;
        bool                             mForceCompletion       : 1;
        bool                             mForceMove             : 1;
        bool                             mForceMoveLocalEntity  : 1;
        bool                             mIsOnGround            : 1;
        ::ll::TypedStorage<2, 2, ushort> mRaw;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>             mRuntimeId;
    ::ll::TypedStorage<2, 2, ::MoveActorDeltaData::Header> mHeader;
    ::ll::TypedStorage<4, 4, float>                        mNewPositionX;
    ::ll::TypedStorage<4, 4, float>                        mNewPositionY;
    ::ll::TypedStorage<4, 4, float>                        mNewPositionZ;
    ::ll::TypedStorage<1, 1, schar>                        mRotX;
    ::ll::TypedStorage<1, 1, schar>                        mRotY;
    ::ll::TypedStorage<1, 1, schar>                        mRotYHead;
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData>     mPreviousData;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::MoveActorAbsoluteData parseDeltas(::MoveActorAbsoluteData const&) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
