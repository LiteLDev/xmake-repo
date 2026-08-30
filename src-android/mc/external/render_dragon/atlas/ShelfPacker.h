#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/PackerAllocId.h"
#include "mc/external/render_dragon/atlas/PackerAllocation.h"
#include "mc/external/render_dragon/atlas/PackerItem.h"
#include "mc/external/render_dragon/atlas/PackerShelf.h"

namespace dragon::atlas {

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

} // namespace dragon::atlas
