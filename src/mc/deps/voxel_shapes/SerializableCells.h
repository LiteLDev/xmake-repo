#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

struct SerializableCells {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>               mXSize;
    ::ll::TypedStorage<1, 1, uchar>               mYSize;
    ::ll::TypedStorage<1, 1, uchar>               mZSize;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk20f6d8;
    ::ll::UntypedStorage<1, 1>  mUnka53906;
    ::ll::UntypedStorage<1, 1>  mUnkf63ad1;
    ::ll::UntypedStorage<8, 24> mUnk3df10b;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableCells& operator=(SerializableCells const&);
    SerializableCells(SerializableCells const&);
    SerializableCells();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SerializableCells();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VoxelShapes
