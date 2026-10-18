#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

class TintMapColor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 64, std::array<mce::Color, 4>> colors;
#else // @header-generator platform
    ::ll::TypedStorage<4, 64, ::std::array<::mce::Color, 4>> colors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::TintMapColor const&) const;

    MCNAPI bool operator==(::TintMapColor const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::TintMapColor const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND
};
