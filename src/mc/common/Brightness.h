#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct Brightness : public ::NewType<uchar> {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Brightness const& INVALID();
#else // @header-generator platform
    MCAPI static ::Brightness const& MAX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Brightness const& MAX();

    MCNAPI static uchar const& MAX_VALUE();

    MCNAPI static ::Brightness const& MIN();

    MCNAPI static uchar const& MIN_VALUE();
#else // @header-generator platform
    MCAPI static ::Brightness const& MIN();
#endif // @header-generator platform
    // NOLINTEND
};
