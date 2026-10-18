#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginIdentity {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<8, 24, std::string> mPlatformOnlineId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mXuid;
    ::ll::TypedStorage<8, 32, ::std::string> mPlatformOnlineId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOriginIdentity& operator=(CommandOriginIdentity const&);
    CommandOriginIdentity();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CommandOriginIdentity();
#else // @header-generator platform
    MCAPI CommandOriginIdentity(::CommandOriginIdentity const&);

    MCAPI ~CommandOriginIdentity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::CommandOriginIdentity const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
