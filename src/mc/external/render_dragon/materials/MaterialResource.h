#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct MaterialResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientResourcePointer<dragon::ResolvedMaterialResource>>> mMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                                           mUsed;
    // NOLINTEND
};
#else // @header-generator platform
struct MaterialResource {};
#endif // @header-generator platform

} // namespace dragon::materials
