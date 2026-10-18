#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/input/MoveInputState.h"

struct RawMoveInputComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::MoveInputState> mRawInput;
    ::ll::TypedStorage<4, 8, ::Vec2>            mRawMove;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RawMoveInputComponent& operator=(RawMoveInputComponent const&);
    RawMoveInputComponent(RawMoveInputComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
