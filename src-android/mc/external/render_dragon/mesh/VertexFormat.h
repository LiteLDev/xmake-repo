#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/external/render_dragon/mesh/VertexField.h"
#include "mc/external/render_dragon/mesh/VertexFieldType.h"

namespace dragon::mesh {

struct VertexFormat {
public:
    // VertexFormat inner types declare
    // clang-format off
    struct FieldEntry;
    // clang-format on

    // VertexFormat inner types define
    struct FieldEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::dragon::mesh::VertexField>     mField;
        ::ll::TypedStorage<1, 1, ::dragon::mesh::VertexFieldType> mType;
        ::ll::TypedStorage<2, 2, ushort>                          mOffset;
        ::ll::TypedStorage<1, 1, uchar>                           mCount;
        bool                                                      mNormalized : 1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128>     mFields;
    ::ll::TypedStorage<2, 2, ushort> mStride;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexFormat& operator=(VertexFormat const&);
};

} // namespace dragon::mesh
