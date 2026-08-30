#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/MaterialLoadResult.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class Material; }
// clang-format on

namespace dragon {

class ResolvedMaterialResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::materials::Material>> materialPtr;
    ::ll::TypedStorage<8, 16, ::dragon::materials::MaterialLoadResult>     loadResult;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedMaterialResource& operator=(ResolvedMaterialResource const&);
};

} // namespace dragon
