#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/PackerAllocId.h"
#include "mc/external/render_dragon/atlas/PackerAllocation.h"
#include "mc/external/render_dragon/atlas/PackerItem.h"
#include "mc/external/render_dragon/atlas/PackerShelf.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
class ShelfPacker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mWidth;
    ::ll::TypedStorage<4, 4, int> mHeight;
    ::ll::TypedStorage<2, 2, ushort> mShelfWidth;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::detail::PackerShelf>> mShelves;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::detail::PackerItem>> mItems;
    ::ll::TypedStorage<8, 40, std::unordered_map<dragon::atlas::PackerAllocId, dragon::atlas::PackerAllocation>> mAllocations;
    ::ll::TypedStorage<2, 2, ushort> mFirstShelf;
    ::ll::TypedStorage<2, 2, ushort> mFreeShelves;
    ::ll::TypedStorage<2, 2, ushort> mFreeItems;
    ::ll::TypedStorage<2, 24, std::array<ushort, 12>> mBucketHeads;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class ShelfPacker {};
#endif // @header-generator platform

} // namespace dragon::atlas
