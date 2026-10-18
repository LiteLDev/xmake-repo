#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/actor/MoveToLiquidGoalDefinition.h"

namespace SharedTypes::v1_26_10 {

struct MoveToLavaGoalDefinition : public ::SharedTypes::v1_26_10::MoveToLiquidGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mMaterialType;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_10::MoveToLiquidGoalDefinition::LiquidMaterialType> mMaterialType;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
