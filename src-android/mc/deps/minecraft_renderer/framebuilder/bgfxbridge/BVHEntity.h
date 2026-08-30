#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedAccelerationStructureResource; }
namespace dragon::framerenderer { class BgfxPrimitiveIndexBuffer; }
namespace mce { class Mesh; }
namespace mce::framebuilder::bgfxbridge { struct EntityCreationContext; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct BVHEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mAccelerationStructureHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    BVHEntity& operator=(BVHEntity const&);
    BVHEntity(BVHEntity const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateAccelerationStructure(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::Mesh const&,
        uint const,
        ::dragon::framerenderer::BgfxPrimitiveIndexBuffer&
    );

    MCNAPI ~BVHEntity();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
