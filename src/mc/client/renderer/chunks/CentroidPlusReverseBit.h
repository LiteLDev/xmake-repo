#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class CentroidPlusReverseBit {
public:
    // member variables
    // NOLINTBEGIN
    uint mX          : 10;
    uint mY          : 10;
    uint mZ          : 10;
    uint mReverseBit : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    CentroidPlusReverseBit();
};
#else // @header-generator platform
class CentroidPlusReverseBit {};
#endif // @header-generator platform
