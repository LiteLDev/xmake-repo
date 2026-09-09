#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/MaterialDescription.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { struct DragonMaterialResourceServiceContext; }
namespace dragon::materials { class CompiledMaterialDefinition; }
// clang-format on

namespace dragon {

struct CreateMaterialCompiledTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::dragon::MaterialDescription>                                  mMaterialDescription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::materials::CompiledMaterialDefinition>> mCompiledMaterial;
    // NOLINTEND
};

} // namespace dragon
