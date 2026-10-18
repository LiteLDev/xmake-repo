#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BodyControl;
// clang-format on

class BodyControlComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BodyControl>> mBodyControl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BodyControl>> mBodyControl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BodyControlComponent& operator=(BodyControlComponent const&);
    BodyControlComponent(BodyControlComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
