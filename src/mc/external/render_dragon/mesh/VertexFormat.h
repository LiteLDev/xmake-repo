#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/external/render_dragon/mesh/VertexField.h"
#include "mc/external/render_dragon/mesh/VertexFieldType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::mesh {

struct VertexFormat {
public:
    // VertexFormat inner types declare
    // clang-format off
    struct FieldEntry;
    // clang-format on

    // VertexFormat inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct FieldEntry {};
#endif // @header-generator platform
};

} // namespace dragon::mesh
