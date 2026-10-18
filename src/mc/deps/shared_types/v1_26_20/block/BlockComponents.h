#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ComponentStorage.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_20::BlockDefinition {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockComponents : public ::cereal::ComponentStorage {};
#else // @header-generator platform
struct BlockComponents : public ::cereal::ComponentStorage {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_20::BlockDefinition
