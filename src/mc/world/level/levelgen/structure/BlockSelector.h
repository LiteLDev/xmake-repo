#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class BlockSelector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockSelector();
#else // @header-generator platform
    virtual ~BlockSelector() = default;
#endif // @header-generator platform

    virtual ::Block const& next(::Random&, int, int, int, bool) const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
