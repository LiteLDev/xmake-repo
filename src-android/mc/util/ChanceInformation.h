#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class ChanceInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, std::variant<float, std::pair<uint, uint>>> mChance;
    // NOLINTEND

public:
    // prevent constructor by default
    ChanceInformation(ChanceInformation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI bool roll(::Random&) const;

    MCNAPI void set(float);

    MCNAPI void set(uint, uint);
    // NOLINTEND
};
