#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct RenderChunkDirectVertexData;
// clang-format on

struct VertexDataGarbage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkDirectVertexData>> mDirectVertexDataPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexDataGarbage& operator=(VertexDataGarbage const&);
    VertexDataGarbage();
};
#else // @header-generator platform
struct VertexDataGarbage {};
#endif // @header-generator platform
