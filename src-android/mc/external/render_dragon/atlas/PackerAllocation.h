#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/PackerAllocId.h"
#include "mc/external/render_dragon/atlas/PackerRect.h"

namespace dragon::atlas {

struct PackerAllocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::atlas::PackerAllocId> mId;
    ::ll::TypedStorage<4, 16, ::dragon::atlas::PackerRect>   mRect;
    ::ll::TypedStorage<4, 4, uint>                           mData;
    // NOLINTEND
};

} // namespace dragon::atlas
