#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct AtlasIndex {
public:
    // AtlasIndex inner types declare
    // clang-format off
    struct ItemEntry;
    // clang-format on

    // AtlasIndex inner types define
    struct ItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mU;
        ::ll::TypedStorage<2, 2, ushort> mV;
        ::ll::TypedStorage<8, 8, ulong>  mImageId;
        // NOLINTEND
    };
};

} // namespace OreUI
