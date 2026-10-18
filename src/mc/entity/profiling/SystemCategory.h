#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct SystemCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCategoryName;
    ::ll::TypedStorage<8, 8, ulong>        mSystemIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3a854c;
    ::ll::UntypedStorage<8, 8>  mUnk3cec83;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SystemCategory& operator=(SystemCategory const&);
    SystemCategory(SystemCategory const&);
    SystemCategory();
#endif // @header-generator platform
};

} // namespace ECS::Profiling::Diagnostics
