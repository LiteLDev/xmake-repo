#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct JSValue;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct ArrayProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> array;
    ::ll::UntypedStorage<8, 16> handler;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkfdfb0c;
    ::ll::UntypedStorage<8, 16> mUnkf51b23;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ArrayProxy& operator=(ArrayProxy const&);
    ArrayProxy(ArrayProxy const&);
    ArrayProxy();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
