#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace sim {

struct LookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
    ::ll::UntypedStorage<4, 8>                 mCountdown;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<4, 4, int>              mCountdown;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LookAtEntityIntent& operator=(LookAtEntityIntent const&);
    LookAtEntityIntent();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace sim
