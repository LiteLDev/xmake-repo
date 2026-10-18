#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextCommandVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk74b79d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextCommandVersion& operator=(ContextCommandVersion const&);
    ContextCommandVersion(ContextCommandVersion const&);
#endif // @header-generator platform
    ContextCommandVersion();
};

} // namespace Scripting
