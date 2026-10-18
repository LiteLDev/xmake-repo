#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/options/GraphicsMode.h"
#else // @header-generator platform
#endif // @header-generator platform

struct SyncedClientOptionsUpdate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<GraphicsMode>> mGraphicsMode;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mFilterProfanity;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 2> mUnk3cf381;
    ::ll::UntypedStorage<1, 2> mUnk5f8f43;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SyncedClientOptionsUpdate& operator=(SyncedClientOptionsUpdate const&);
    SyncedClientOptionsUpdate(SyncedClientOptionsUpdate const&);
    SyncedClientOptionsUpdate();
#endif // @header-generator platform
};
