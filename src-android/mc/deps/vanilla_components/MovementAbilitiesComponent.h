#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"

struct MovementAbilitiesComponent {
public:
    // MovementAbilitiesComponent inner types define
    using Bitset = std::bitset<8>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<8>>       mOverrides;
    ::ll::TypedStorage<8, 8, std::bitset<8>>       mFlagValues;
    ::ll::TypedStorage<4, 8, std::array<float, 2>> mFloatValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getBool(::MovementAbilities) const;

    MCNAPI float getFloat(::MovementAbilities) const;

    MCNAPI void setBool(::MovementAbilities, bool);

    MCNAPI void setFloat(::MovementAbilities, float);
    // NOLINTEND
};
