#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class IMultiPlayerServices;
// clang-format on

class IMultiPlayerRequest {
public:
    // IMultiPlayerRequest inner types define
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
};
