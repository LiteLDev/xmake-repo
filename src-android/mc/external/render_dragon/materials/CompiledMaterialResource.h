#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class CompiledMaterialDefinition; }
// clang-format on

namespace dragon::materials {

struct CompiledMaterialResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::materials::CompiledMaterialDefinition>> mMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                            mUsed;
    // NOLINTEND
};

} // namespace dragon::materials
