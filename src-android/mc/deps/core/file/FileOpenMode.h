#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileOpenMode {
public:
    // member variables
    // NOLINTBEGIN
    bool mRead           : 1;
    bool mWrite          : 1;
    bool mCreate         : 1;
    bool mTruncate       : 1;
    bool mAppend         : 1;
    bool mBinary         : 1;
    bool mWriteExclusive : 1;
    bool mSpeculative    : 1;
    bool mCommit         : 1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FileOpenMode(uint);

    MCNAPI char const* cMode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint);
    // NOLINTEND
};

} // namespace Core
