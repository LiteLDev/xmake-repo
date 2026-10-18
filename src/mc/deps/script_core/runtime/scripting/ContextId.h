#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar> value;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk7fd96a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ContextId& operator=(ContextId const&);
    ContextId(ContextId const&);
    ContextId();
#endif // @header-generator platform
};

} // namespace Scripting
