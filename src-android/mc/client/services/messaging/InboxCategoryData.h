#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

struct InboxCategoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mNameLoc;
    ::ll::TypedStorage<8, 8, ulong>        mTotalCount;
    ::ll::TypedStorage<8, 8, ulong>        mUnreadCount;
    ::ll::TypedStorage<8, 24, std::string> mImageUrl;
    ::ll::UntypedStorage<1, 24>            mImagePath;
    ::ll::TypedStorage<8, 24, std::string> mContinuationToken;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxCategoryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InboxCategoryData(::InboxCategoryData const&);

    MCNAPI ~InboxCategoryData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InboxCategoryData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
