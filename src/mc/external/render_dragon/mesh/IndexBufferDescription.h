#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/mesh/IndexSize.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct IndexBufferDescription {};
#endif // @header-generator platform

} // namespace dragon::mesh
