#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/Paddle.h"
#include "mc/world/level/Tick.h"

struct BoatPaddleComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::array<Paddle, 2>> mPaddles;
    ::ll::TypedStorage<8, 8, ::Tick>                 mLocalTick;
#else // @header-generator platform
    ::ll::TypedStorage<4, 40, ::std::array<::Paddle, 2>> mPaddles;
    ::ll::TypedStorage<8, 8, ::Tick>                     mLocalTick;
#endif // @header-generator platform
    // NOLINTEND
};
