#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct RawProfileImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    ::ll::TypedStorage<8, 24, std::string>        mETag;
    // NOLINTEND

public:
    // prevent constructor by default
    RawProfileImageData& operator=(RawProfileImageData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RawProfileImageData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RawProfileImageData {};
#endif // @header-generator platform

} // namespace Social
