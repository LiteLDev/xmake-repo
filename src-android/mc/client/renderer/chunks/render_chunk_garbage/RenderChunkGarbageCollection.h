#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/IRenderChunkGarbageCollection.h"

// auto generated forward declare list
// clang-format off
class IRenderChunkGarbage;
// clang-format on

namespace RenderChunkGarbage {

class RenderChunkGarbageCollection : public ::IRenderChunkGarbageCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IRenderChunkGarbage>>> mGarbage;
    // NOLINTEND
};

} // namespace RenderChunkGarbage
