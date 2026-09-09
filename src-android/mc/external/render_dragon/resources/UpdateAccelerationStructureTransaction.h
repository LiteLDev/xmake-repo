#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/AccelerationStructureBuildFlags.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
// clang-format on

namespace dragon {

struct UpdateAccelerationStructureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                    mVertexBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                 mVertexCount;
    ::ll::UntypedStorage<8, 24>                                                    mIndexBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                 mIndexCount;
    ::ll::TypedStorage<2, 2, ::dragon::rendering::AccelerationStructureBuildFlags> mBuildFlags;
    // NOLINTEND
};

} // namespace dragon
