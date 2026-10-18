#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct FlyingItemCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mFromContainer;
    ::ll::TypedStorage<4, 4, int>          mFromIndex;
    ::ll::TypedStorage<8, 24, std::string> mToContainer;
    ::ll::TypedStorage<4, 4, int>          mToIndex;
    ::ll::TypedStorage<4, 4, int>          mFlyingItemIdAux;
    ::ll::TypedStorage<8, 24, std::string> mUserData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FlyingItemCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FlyingItemCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mFromContainer;
    ::ll::TypedStorage<4, 4, int>            mFromIndex;
    ::ll::TypedStorage<8, 32, ::std::string> mToContainer;
    ::ll::TypedStorage<4, 4, int>            mToIndex;
    ::ll::TypedStorage<4, 4, int>            mFlyingItemIdAux;
    ::ll::TypedStorage<8, 32, ::std::string> mUserData;
    // NOLINTEND
};
#else // @header-generator platform
struct FlyingItemCommand {};
#endif // @header-generator platform
#endif // @header-generator platform
