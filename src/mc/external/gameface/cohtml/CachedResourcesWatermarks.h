#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct CachedResourcesWatermarks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> HighWatermarkOrphanedResourcesCount;
    ::ll::TypedStorage<4, 4, uint> HighWatermarkOrphanedResourcesBytes;
    ::ll::TypedStorage<4, 4, uint> LowWatermarkOrphanedResourcesCount;
    ::ll::TypedStorage<4, 4, uint> LowWatermarkOrphanedResourcesBytes;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CachedResourcesWatermarks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk856b74;
    ::ll::UntypedStorage<4, 4> mUnkab739c;
    ::ll::UntypedStorage<4, 4> mUnk79bb9d;
    ::ll::UntypedStorage<4, 4> mUnk4125bf;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedResourcesWatermarks& operator=(CachedResourcesWatermarks const&);
    CachedResourcesWatermarks(CachedResourcesWatermarks const&);
    CachedResourcesWatermarks();
};
#else // @header-generator platform
struct CachedResourcesWatermarks {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
