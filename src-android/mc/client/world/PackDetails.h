#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackActionError.h"
#include "mc/deps/core/file/PathBuffer.h"

namespace World {

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

} // namespace World
