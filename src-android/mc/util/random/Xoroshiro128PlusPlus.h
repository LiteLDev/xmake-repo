#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Xoroshiro128PlusPlus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mSeedLo;
    ::ll::TypedStorage<8, 8, ulong> mSeedHi;
    // NOLINTEND

public:
    // prevent constructor by default
    Xoroshiro128PlusPlus();
};
