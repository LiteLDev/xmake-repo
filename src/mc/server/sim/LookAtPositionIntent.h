#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace sim {

struct LookAtPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<4, 4, int>                                      mCountdown;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPosition;
    ::ll::TypedStorage<4, 4, int>          mCountdown;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LookAtPositionIntent& operator=(LookAtPositionIntent const&);
    LookAtPositionIntent();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace sim
