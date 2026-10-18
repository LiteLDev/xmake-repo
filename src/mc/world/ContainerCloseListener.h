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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerClosed(::Actor&) = 0;
#else // @header-generator platform
    virtual void containerClosed(::Actor& actor) = 0;
#endif // @header-generator platform

    virtual ~ContainerCloseListener() = default;
    // NOLINTEND
};
