#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class GeneratorStatus {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsDone;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkecc882;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GeneratorStatus& operator=(GeneratorStatus const&);
    GeneratorStatus(GeneratorStatus const&);
    GeneratorStatus();
#endif // @header-generator platform
};

} // namespace Scripting
