#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CatalogueBehavior {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk222bad;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogueBehavior& operator=(CatalogueBehavior const&);
    CatalogueBehavior(CatalogueBehavior const&);
    CatalogueBehavior();
};
#endif // @header-generator platform
