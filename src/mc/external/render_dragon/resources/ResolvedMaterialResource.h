#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/MaterialLoadResult.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class Material; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ResolvedMaterialResource {};
#endif // @header-generator platform

} // namespace dragon
