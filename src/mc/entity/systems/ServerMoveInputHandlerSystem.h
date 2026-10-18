#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class PlayerAuthInputPacket;
struct MoveInputComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct ServerMoveInputHandlerSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo create();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo create();
#endif // @header-generator platform
    // NOLINTEND
};
