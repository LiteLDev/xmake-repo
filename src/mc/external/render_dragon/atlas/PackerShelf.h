#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas::detail {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackerShelf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mX;
    ::ll::TypedStorage<2, 2, ushort> mY;
    ::ll::TypedStorage<2, 2, ushort> mHeight;
    ::ll::TypedStorage<2, 2, ushort> mPrevShelf;
    ::ll::TypedStorage<2, 2, ushort> mNextShelf;
    ::ll::TypedStorage<2, 2, ushort> mPrevBucket;
    ::ll::TypedStorage<2, 2, ushort> mNextBucket;
    ::ll::TypedStorage<2, 2, ushort> mFirstItem;
    ::ll::TypedStorage<2, 2, ushort> mFirstUnallocated;
    ::ll::TypedStorage<1, 1, bool>   mIsEmpty;
    // NOLINTEND
};
#else // @header-generator platform
struct PackerShelf {};
#endif // @header-generator platform

} // namespace dragon::atlas::detail
