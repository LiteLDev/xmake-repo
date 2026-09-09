#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/mesh/IndexSize.h"

namespace dragon::mesh {

struct IndexBufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::mesh::IndexSize> mIndexSize;
    ::ll::TypedStorage<8, 8, ulong>                     mDataSize;
    ::ll::TypedStorage<8, 8, ulong>                     mElementCount;
    ::ll::TypedStorage<2, 2, ushort>                    mFlags;
    // NOLINTEND
};

} // namespace dragon::mesh
