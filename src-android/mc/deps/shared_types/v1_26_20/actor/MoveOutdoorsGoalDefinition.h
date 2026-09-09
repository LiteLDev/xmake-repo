#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MoveOutdoorsGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_COOLDOWN_TIMEOUT();

    MCNAPI static float const& DEFAULT_GOAL_RADIUS();

    MCNAPI static int const& DEFAULT_SEARCH_COUNT();

    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();

    MCNAPI static int const& DEFAULT_SEARCH_RANGE();

    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
