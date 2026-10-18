#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct ChangeMobPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mPropName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mPropName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>            mBoolComponentVal;
    ::ll::TypedStorage<4, 4, float>           mFloatComponentVal;
    ::ll::TypedStorage<4, 4, int>             mIntComponentVal;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mStringComponentVal;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mStringComponentVal;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChangeMobPropertyPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
