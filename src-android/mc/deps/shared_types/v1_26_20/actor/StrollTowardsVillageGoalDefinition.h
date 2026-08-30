#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/MoveToVillageGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct StrollTowardsVillageGoalDefinition : public ::SharedTypes::v1_26_20::MoveToVillageGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStartChance;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& START_CHANCE_DESCRIPTION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
