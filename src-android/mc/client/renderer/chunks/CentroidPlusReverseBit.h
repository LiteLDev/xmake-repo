#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
