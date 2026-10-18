#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/CreateMaterialBaseTransaction.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct MaterialDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateMaterialTransaction : public ::dragon::details::CreateMaterialBaseTransaction {
public:
    // prevent constructor by default
    CreateMaterialTransaction& operator=(CreateMaterialTransaction const&);
    CreateMaterialTransaction(CreateMaterialTransaction const&);
    CreateMaterialTransaction();
};
#else // @header-generator platform
struct CreateMaterialTransaction {};
#endif // @header-generator platform

} // namespace dragon
