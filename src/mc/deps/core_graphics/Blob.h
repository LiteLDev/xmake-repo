#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

class Blob {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>> mBlobData;
    ::ll::TypedStorage<8, 8, ulong>                    mBlobSize;
    // NOLINTEND

public:
    // prevent constructor by default
    Blob();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Blob(std::unique_ptr<uchar[]>, ulong);

    MCNAPI void* getBufferPointer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<uchar[]>, ulong);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<uchar[0]>> mBlobData;
    ::ll::TypedStorage<8, 8, uint64>                      mBlobSize;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg
