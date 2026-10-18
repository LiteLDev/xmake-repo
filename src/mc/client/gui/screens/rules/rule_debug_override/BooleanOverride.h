#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RuleDebugOverride {

#if defined(LL_PLAT_A) // @header-generator platform
class BooleanOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsOverriden;
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BooleanOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsOverriden;
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND
};
#else // @header-generator platform
class BooleanOverride {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace RuleDebugOverride
