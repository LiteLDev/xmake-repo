#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MissingBlobData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>        mBlobId;
    ::ll::TypedStorage<8, 24, std::string> mBlobData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>         mBlobId;
    ::ll::TypedStorage<8, 32, ::std::string> mBlobData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MissingBlobData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
