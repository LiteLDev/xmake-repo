#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MarsagliaPolarGaussian {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, double> mNextNextGaussian;
    ::ll::TypedStorage<1, 1, bool>   mHaveNextNextGaussian;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc48506;
    ::ll::UntypedStorage<1, 1> mUnk7bf66f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MarsagliaPolarGaussian& operator=(MarsagliaPolarGaussian const&);
    MarsagliaPolarGaussian(MarsagliaPolarGaussian const&);
    MarsagliaPolarGaussian();
#endif // @header-generator platform
};
