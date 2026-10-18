#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RuleDebugOverride {

#if defined(LL_PLAT_A) // @header-generator platform
class EnumOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsOverriden;
    ::ll::TypedStorage<4, 4, int>  mValue;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EnumOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsOverriden;
    ::ll::TypedStorage<4, 4, int>  mValue;
    // NOLINTEND
};
#else // @header-generator platform
class EnumOverride {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace RuleDebugOverride
