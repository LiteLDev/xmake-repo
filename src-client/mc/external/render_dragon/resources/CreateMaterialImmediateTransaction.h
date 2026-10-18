#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/CreateMaterialBaseTransaction.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct MaterialDescription; }
// clang-format on

namespace dragon {

struct CreateMaterialImmediateTransaction : public ::dragon::details::CreateMaterialBaseTransaction {
public:
    // prevent constructor by default
    CreateMaterialImmediateTransaction& operator=(CreateMaterialImmediateTransaction const&);
    CreateMaterialImmediateTransaction(CreateMaterialImmediateTransaction const&);
    CreateMaterialImmediateTransaction();
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
