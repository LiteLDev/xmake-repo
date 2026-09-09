#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/BufferDescription.h"

namespace dragon::mesh {

struct MeshDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::BufferDescription>>   mVertexBufferDescriptions;
    ::ll::TypedStorage<4, 12, std::optional<cg::BufferDescription>> mIndexBufferDescription;
    // NOLINTEND
};

} // namespace dragon::mesh
