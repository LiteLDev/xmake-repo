#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::materials { class CompiledMaterialDefinition; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct CompiledMaterialResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::materials::CompiledMaterialDefinition>> mMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                            mUsed;
    // NOLINTEND
};
#else // @header-generator platform
struct CompiledMaterialResource {};
#endif // @header-generator platform

} // namespace dragon::materials
