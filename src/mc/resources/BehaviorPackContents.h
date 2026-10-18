#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BehaviorPackContents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mEntities;
    ::ll::TypedStorage<4, 4, uint> mLoots;
    ::ll::TypedStorage<4, 4, uint> mTrades;
    ::ll::TypedStorage<4, 4, uint> mPlugins;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk83542e;
    ::ll::UntypedStorage<4, 4> mUnk1df6d1;
    ::ll::UntypedStorage<4, 4> mUnkcdb654;
    ::ll::UntypedStorage<4, 4> mUnk16cede;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BehaviorPackContents& operator=(BehaviorPackContents const&);
    BehaviorPackContents(BehaviorPackContents const&);
    BehaviorPackContents();
#endif // @header-generator platform
};
