#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_10 {

#if defined(LL_PLAT_A) // @header-generator platform
struct OcelotSitOnBlockGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {};
#else // @header-generator platform
struct OcelotSitOnBlockGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_10
