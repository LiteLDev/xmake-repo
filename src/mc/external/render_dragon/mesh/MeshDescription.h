#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/BufferDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
struct MeshDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::BufferDescription>>   mVertexBufferDescriptions;
    ::ll::TypedStorage<4, 12, std::optional<cg::BufferDescription>> mIndexBufferDescription;
    // NOLINTEND
};
#else // @header-generator platform
struct MeshDescription {};
#endif // @header-generator platform

} // namespace dragon::mesh
