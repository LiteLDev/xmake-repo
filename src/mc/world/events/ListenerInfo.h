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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>       mCallback;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<4, 4, float>   mRadiusSqr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void(::BlockPos const&, uint, ::Block const&, ::Actor*)>> mCallback;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                                   mPosition;
    ::ll::TypedStorage<4, 4, float>                                                                     mRadiusSqr;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ListenerInfo();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& SQRT_FLT_MAX();
#else // @header-generator platform
    MCAPI static float const& SQRT_FLT_MAX();
#endif // @header-generator platform
    // NOLINTEND
};
