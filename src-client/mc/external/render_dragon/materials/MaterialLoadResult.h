#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class CompiledMaterialDefinition; }
// clang-format on

namespace dragon::materials {

struct MaterialLoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::materials::CompiledMaterialDefinition>> mCompiledMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialLoadResult& operator=(MaterialLoadResult const&);
    MaterialLoadResult(MaterialLoadResult const&);
};

} // namespace dragon::materials
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
