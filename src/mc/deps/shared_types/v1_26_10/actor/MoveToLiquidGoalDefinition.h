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

struct MoveToLiquidGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // MoveToLiquidGoalDefinition inner types define
    enum class LiquidMaterialType : uint {
        Water = 0,
        Lava  = 1,
        Any   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_10::MoveToLiquidGoalDefinition::LiquidMaterialType> mMaterialType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

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
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_10
