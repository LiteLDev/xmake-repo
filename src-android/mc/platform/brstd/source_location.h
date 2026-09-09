#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct source_location {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const* const> mFileName;
    ::ll::TypedStorage<8, 8, char const* const> mFunctionName;
    ::ll::TypedStorage<4, 4, uint const>        mLine;
    ::ll::TypedStorage<4, 4, uint const>        mColumn;
    ::ll::TypedStorage<4, 4, uint const>        mFileNameSize;
    ::ll::TypedStorage<4, 4, uint const>        mFunctionNameSize;
    // NOLINTEND

public:
    // prevent constructor by default
    source_location();
};

} // namespace brstd
