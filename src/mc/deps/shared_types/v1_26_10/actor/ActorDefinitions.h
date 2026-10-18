#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/ActorDefinitions.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_10 {

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDefinitions : public ::SharedTypes::v1_26_0::ActorDefinitions {};
#else // @header-generator platform
struct ActorDefinitions : public ::SharedTypes::v1_26_0::ActorDefinitions {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_10
