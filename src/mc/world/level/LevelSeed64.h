#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    // LevelSeed64 inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ValueType = ulong;
#else // @header-generator platform
    using ValueType = uint64;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint to32BitRandomSeed() const;

    MCNAPI std::string toUiString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LevelSeed64 fromUnsigned32(uint);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mValue;
#endif // @header-generator platform
    // NOLINTEND
};
