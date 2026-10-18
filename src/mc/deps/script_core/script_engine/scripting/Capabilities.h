#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Capabilities {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> allowEval;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk52ef4d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Capabilities& operator=(Capabilities const&);
    Capabilities(Capabilities const&);
    Capabilities();
#endif // @header-generator platform
};

} // namespace Scripting
