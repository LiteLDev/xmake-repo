#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/server/commands/CommandOriginType.h"

struct CommandOriginData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandOriginType> mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>        mUUID;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mRequestId;
    ::ll::TypedStorage<8, 8, long>                mPlayerId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>      mRequestId;
    ::ll::TypedStorage<8, 8, int64>               mPlayerId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOriginData(::CommandOriginData const&);

    MCNAPI ::CommandOriginData& operator=(::CommandOriginData const&);

    MCNAPI bool operator==(::CommandOriginData const&) const;
#else // @header-generator platform
    MCAPI ~CommandOriginData();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandOriginData const&);
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
