#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateVertexOnlyAccelerationStructureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                    mVertexBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                 mVertexCount;
    ::ll::TypedStorage<4, 4, uint>                                                 mVertexOffset;
    ::ll::TypedStorage<2, 2, ::dragon::rendering::AccelerationStructureBuildFlags> mBuildFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateVertexOnlyAccelerationStructureTransaction&
    operator=(CreateVertexOnlyAccelerationStructureTransaction const&);
    CreateVertexOnlyAccelerationStructureTransaction(CreateVertexOnlyAccelerationStructureTransaction const&);
    CreateVertexOnlyAccelerationStructureTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedAccelerationStructureResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );

    MCNAPI ~CreateVertexOnlyAccelerationStructureTransaction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct CreateVertexOnlyAccelerationStructureTransaction {};
#endif // @header-generator platform

} // namespace dragon
