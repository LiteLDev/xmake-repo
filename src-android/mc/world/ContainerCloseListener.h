#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ContainerCloseListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerClosed(::Actor&) = 0;

    virtual ~ContainerCloseListener() = default;
    // NOLINTEND
};
