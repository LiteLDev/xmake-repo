#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackActionError.h"
#include "mc/deps/core/file/PathBuffer.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackActionError.h"
#include "mc/deps/core/file/PathBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mName;
    ::ll::TypedStorage<8, 24, std::string>                            mType;
    ::ll::TypedStorage<8, 24, std::string>                            mDescription;
    ::ll::TypedStorage<8, 24, std::string>                            mSize;
    ::ll::TypedStorage<8, 24, std::string>                            mId;
    ::ll::TypedStorage<8, 24, std::string>                            mContentId;
    ::ll::TypedStorage<8, 24, std::string>                            mIconPathStr;
    ::ll::UntypedStorage<8, 24>                                       mIconPath;
    ::ll::TypedStorage<1, 2, std::optional<::World::PackActionError>> mError;
    ::ll::TypedStorage<1, 1, bool>                                    mIsMarketplaceItem;
    ::ll::TypedStorage<1, 1, bool>                                    mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                    mHasSettings;
    ::ll::TypedStorage<1, 1, bool>                                    mIsAddon;
    // NOLINTEND

public:
    // prevent constructor by default
    PackDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackDetails(::World::PackDetails const&);

    MCNAPI ~PackDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::PackDetails const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mType;
    ::ll::TypedStorage<8, 32, ::std::string>                            mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                            mSize;
    ::ll::TypedStorage<8, 32, ::std::string>                            mId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mContentId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mIconPathStr;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>        mIconPath;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::PackActionError>> mError;
    ::ll::TypedStorage<1, 1, bool>                                      mIsMarketplaceItem;
    ::ll::TypedStorage<1, 1, bool>                                      mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                      mHasSettings;
    ::ll::TypedStorage<1, 1, bool>                                      mIsAddon;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PackDetails {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
