#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProviderType {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IntProviderType();
#else // @header-generator platform
    virtual ~IntProviderType() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sample(::IRandom&) const = 0;
#else // @header-generator platform
    virtual int sample(::IRandom& random) const = 0;
#endif // @header-generator platform

    virtual int maxValue() const = 0;

    virtual int minValue() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
