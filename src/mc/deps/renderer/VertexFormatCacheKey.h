#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/VertexFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct VertexFormatCacheKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 36, ::mce::VertexFormat> vertexFormat;
    ::ll::TypedStorage<4, 4, uint>                 attributeListIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct VertexFormatCacheKey {};
#endif // @header-generator platform

} // namespace mce
