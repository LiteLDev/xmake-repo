#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
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
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::framerenderer { class BgfxPrimitiveIndexBuffer; }
// clang-format on

namespace dragon {

struct CreateAccelerationStructureWithQuadIndexBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                    mVertexBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                 mVertexCount;
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::BgfxPrimitiveIndexBuffer&>   mIndexBuffer;
    ::ll::TypedStorage<2, 2, ::dragon::rendering::AccelerationStructureBuildFlags> mBuildFlags;
    ::ll::TypedStorage<8, 24, std::string>                                         mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateAccelerationStructureWithQuadIndexBufferTransaction&
    operator=(CreateAccelerationStructureWithQuadIndexBufferTransaction const&);
    CreateAccelerationStructureWithQuadIndexBufferTransaction(
        CreateAccelerationStructureWithQuadIndexBufferTransaction const&
    );
    CreateAccelerationStructureWithQuadIndexBufferTransaction();
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
