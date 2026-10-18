#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/actor/MemoryGoalDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_10::Brain {

#if defined(LL_PLAT_A) // @header-generator platform
struct BaseGenericGoalDefinition : public ::SharedTypes::v1_26_10::Brain::MemoryGoalDefinition {};
#else // @header-generator platform
struct BaseGenericGoalDefinition : public ::SharedTypes::v1_26_10::Brain::MemoryGoalDefinition {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_10::Brain
