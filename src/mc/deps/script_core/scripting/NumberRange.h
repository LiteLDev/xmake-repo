#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct NumberRange {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> rangeMin;
    ::ll::TypedStorage<4, 4, float> rangeMax;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk679927;
    ::ll::UntypedStorage<4, 4> mUnk4db122;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NumberRange& operator=(NumberRange const&);
    NumberRange(NumberRange const&);
    NumberRange();
#endif // @header-generator platform
};

} // namespace Scripting
