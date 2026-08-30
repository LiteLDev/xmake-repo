#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
// clang-format on

namespace dragon {

struct CreateTopLevelAccelerationStructureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateTopLevelAccelerationStructureTransaction& operator=(CreateTopLevelAccelerationStructureTransaction const&);
    CreateTopLevelAccelerationStructureTransaction(CreateTopLevelAccelerationStructureTransaction const&);
    CreateTopLevelAccelerationStructureTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedAccelerationStructureResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );
    // NOLINTEND
};

} // namespace dragon
