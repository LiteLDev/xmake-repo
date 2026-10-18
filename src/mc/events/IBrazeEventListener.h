#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class IBrazeEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBrazeEventListener() = default;

    virtual void updateId(std::string const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IBrazeEventListener {};
#endif // @header-generator platform
