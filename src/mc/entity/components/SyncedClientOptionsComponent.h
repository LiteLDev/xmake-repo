#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/UIProfile.h"

struct SyncedClientOptionsComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DeviceMemoryTier> mMemoryTier;
    ::ll::TypedStorage<4, 4, int>                mMaxViewDistance;
    ::ll::TypedStorage<1, 1, ::GraphicsMode>     mGraphicsMode;
    ::ll::TypedStorage<4, 4, ::UIProfile>        mUIProfile;
    ::ll::TypedStorage<4, 8, std::optional<int>> mTextFilteringDebugTimeoutMilliSeconds;
    ::ll::TypedStorage<1, 1, bool>               mFilterProfanity;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DeviceMemoryTier>   mMemoryTier;
    ::ll::TypedStorage<4, 4, int>                  mMaxViewDistance;
    ::ll::TypedStorage<1, 1, ::GraphicsMode>       mGraphicsMode;
    ::ll::TypedStorage<4, 4, ::UIProfile>          mUIProfile;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mTextFilteringDebugTimeoutMilliSeconds;
    ::ll::TypedStorage<1, 1, bool>                 mFilterProfanity;
#endif // @header-generator platform
    // NOLINTEND
};
