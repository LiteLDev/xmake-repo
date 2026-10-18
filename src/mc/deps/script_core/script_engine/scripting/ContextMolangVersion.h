#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextMolangVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkc5e315;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextMolangVersion& operator=(ContextMolangVersion const&);
    ContextMolangVersion(ContextMolangVersion const&);
#endif // @header-generator platform
    ContextMolangVersion();
};

} // namespace Scripting
