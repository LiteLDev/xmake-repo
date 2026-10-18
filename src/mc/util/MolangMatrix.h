#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Matrix;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct MolangMatrix {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 64> mMatrix;
#else // @header-generator platform
    ::ll::TypedStorage<4, 64, float[4][4]> mMatrix;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangMatrix const& getDefaultErrorValue();
#else // @header-generator platform
    MCAPI static ::MolangMatrix const& getDefaultErrorValue();
#endif // @header-generator platform
    // NOLINTEND
};
