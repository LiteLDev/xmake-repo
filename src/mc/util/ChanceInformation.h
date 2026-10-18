#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ChanceInformation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, std::variant<float, std::pair<uint, uint>>> mChance;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkb70161;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ChanceInformation& operator=(ChanceInformation const&);
#endif // @header-generator platform
    ChanceInformation(ChanceInformation const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI bool roll(::Random&) const;

    MCNAPI void set(float);

    MCNAPI void set(uint, uint);
    // NOLINTEND
#else // @header-generator platform
    ChanceInformation();
#endif // @header-generator platform
};
