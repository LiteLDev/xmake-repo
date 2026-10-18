#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

struct ClampedNormalFloat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mean;
    ::ll::TypedStorage<4, 4, float> deviation;
    ::ll::TypedStorage<4, 4, float> min;
    ::ll::TypedStorage<4, 4, float> max;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk2faf21;
    ::ll::UntypedStorage<4, 4> mUnk1f8356;
    ::ll::UntypedStorage<4, 4> mUnk25b93c;
    ::ll::UntypedStorage<4, 4> mUnkd8f4e6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClampedNormalFloat& operator=(ClampedNormalFloat const&);
    ClampedNormalFloat(ClampedNormalFloat const&);
    ClampedNormalFloat();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float generateNext(::Random&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float generateNext(::Random&, float, float, float, float);
#else // @header-generator platform
    MCNAPI float generateNext(::Random& random) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ValueProviders
