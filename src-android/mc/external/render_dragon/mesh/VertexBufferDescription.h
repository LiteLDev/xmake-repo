#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/mesh/VertexFormat.h"

namespace dragon::mesh {

struct VertexBufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat> mFormat;
    ::ll::TypedStorage<8, 8, ulong>                          mStride;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>          mFormatHandle;
    ::ll::TypedStorage<8, 8, ulong>                          mDataSize;
    ::ll::TypedStorage<8, 8, ulong>                          mVertexCount;
    ::ll::TypedStorage<2, 2, ushort>                         mFlags;
    // NOLINTEND
};

} // namespace dragon::mesh
