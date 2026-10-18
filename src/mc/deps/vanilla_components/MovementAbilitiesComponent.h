#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"

#else // @header-generator platform
#endif // @header-generator platform
struct MovementAbilitiesComponent {
public:
    // MovementAbilitiesComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Bitset = std::bitset<8>;
#else // @header-generator platform
    using Bitset = ::std::bitset<8>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::bitset<8>>       mOverrides;
    ::ll::TypedStorage<4, 4, ::std::bitset<8>>       mFlagValues;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>> mFloatValues;
#endif // @header-generator platform
    // NOLINTEND
};
