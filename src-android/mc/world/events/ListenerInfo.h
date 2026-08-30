#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
// clang-format on

class ListenerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>       mCallback;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<4, 4, float>   mRadiusSqr;
    // NOLINTEND

public:
    // prevent constructor by default
    ListenerInfo();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& SQRT_FLT_MAX();
    // NOLINTEND
};
