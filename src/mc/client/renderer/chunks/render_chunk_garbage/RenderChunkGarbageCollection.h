#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/IRenderChunkGarbageCollection.h"

// auto generated forward declare list
// clang-format off
class IRenderChunkGarbage;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace RenderChunkGarbage {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderChunkGarbageCollection : public ::IRenderChunkGarbageCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IRenderChunkGarbage>>> mGarbage;
    // NOLINTEND
};
#else // @header-generator platform
class RenderChunkGarbageCollection {};
#endif // @header-generator platform

} // namespace RenderChunkGarbage
