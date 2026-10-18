#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/sim/ExecutionResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/sim/MoveInDirectionIntent.h"
#include "mc/server/sim/MoveToPositionIntent.h"
#include "mc/server/sim/NavigateToEntityIntent.h"
#include "mc/server/sim/NavigateToPositionsIntent.h"
#include "mc/server/sim/VoidMoveIntent.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace sim {

struct MovementIntent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 48, std::variant<sim::VoidMoveIntent, sim::MoveInDirectionIntent, sim::MoveToPositionIntent, sim::NavigateToPositionsIntent, sim::NavigateToEntityIntent>> mType;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::sim::VoidMoveIntent,
            ::sim::MoveInDirectionIntent,
            ::sim::MoveToPositionIntent,
            ::sim::NavigateToPositionsIntent,
            ::sim::NavigateToEntityIntent>>
        mType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    MovementIntent& operator=(MovementIntent const&);
    MovementIntent(MovementIntent const&);
#else // @header-generator platform
    MovementIntent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MovementIntent();
#else // @header-generator platform
    MCAPI explicit MovementIntent(
        ::std::variant<
            ::sim::VoidMoveIntent,
            ::sim::MoveInDirectionIntent,
            ::sim::MoveToPositionIntent,
            ::sim::NavigateToPositionsIntent,
            ::sim::NavigateToEntityIntent> type
    );

    MCAPI ~MovementIntent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::variant<
            ::sim::VoidMoveIntent,
            ::sim::MoveInDirectionIntent,
            ::sim::MoveToPositionIntent,
            ::sim::NavigateToPositionsIntent,
            ::sim::NavigateToEntityIntent> type
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace sim
