#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct RandomOwnerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRandom>> mRandom;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRandom>> mRandom;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RandomOwnerComponent& operator=(RandomOwnerComponent const&);
    RandomOwnerComponent(RandomOwnerComponent const&);
    RandomOwnerComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
