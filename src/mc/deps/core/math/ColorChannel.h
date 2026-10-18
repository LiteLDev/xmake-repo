#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkc791a4;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ColorChannel();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ColorChannel& operator=(ColorChannel const&);
    ColorChannel(ColorChannel const&);
    ColorChannel();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ColorChannel const& INVALID();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
