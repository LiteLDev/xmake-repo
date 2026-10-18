#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class IMultiPlayerServices;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class IMultiPlayerRequest {
public:
    // IMultiPlayerRequest inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Result : int {
        Completed  = 0,
        Failed     = 1,
        InProgress = 2,
        Idle       = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMultiPlayerRequest() = default;

    virtual ::IMultiPlayerRequest::Result update(::IMinecraftGame&, ::IMultiPlayerServices&) = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class Result : int {};
#endif // @header-generator platform
};
