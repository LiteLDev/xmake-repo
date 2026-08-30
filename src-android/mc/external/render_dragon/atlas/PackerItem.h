#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas::detail {

struct PackerItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mX;
    ::ll::TypedStorage<2, 2, ushort> mWidth;
    ::ll::TypedStorage<2, 2, ushort> mPrevItem;
    ::ll::TypedStorage<2, 2, ushort> mNextItem;
    ::ll::TypedStorage<2, 2, ushort> mPrevUnallocated;
    ::ll::TypedStorage<2, 2, ushort> mNextUnallocated;
    ::ll::TypedStorage<2, 2, ushort> mShelfIdx;
    ::ll::TypedStorage<1, 1, bool>   mAllocated;
    ::ll::TypedStorage<2, 2, ushort> mGeneration;
    // NOLINTEND
};

} // namespace dragon::atlas::detail
