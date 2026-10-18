#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MarketplaceSkinValidator {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool checkIfValid(std::string const&);
#else // @header-generator platform
    MCAPI static bool checkIfValid(::std::string const& geometry);
#endif // @header-generator platform
    // NOLINTEND
};
