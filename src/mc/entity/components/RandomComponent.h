#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct RandomComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<IRandom*>> mRandom;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::IRandom*>> mRandom;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RandomComponent& operator=(RandomComponent const&);
    RandomComponent(RandomComponent const&);
    RandomComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
