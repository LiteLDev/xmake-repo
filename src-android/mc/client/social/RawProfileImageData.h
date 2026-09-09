#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

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

} // namespace Social
