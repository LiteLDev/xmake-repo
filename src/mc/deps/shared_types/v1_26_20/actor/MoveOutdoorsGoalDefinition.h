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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_COOLDOWN_TIMEOUT();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_COOLDOWN_TIMEOUT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_GOAL_RADIUS();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_GOAL_RADIUS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_COUNT();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_COUNT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_HEIGHT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_RANGE();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_RANGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_SPEED_MULTIPLIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
