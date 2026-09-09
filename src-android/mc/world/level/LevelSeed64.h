#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    // LevelSeed64 inner types define
    using ValueType = ulong;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
