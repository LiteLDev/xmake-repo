#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct RegistryStatistics {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mSize;
    ::ll::TypedStorage<4, 4, uint> mCapacity;
    ::ll::TypedStorage<4, 4, uint> mThreadLocalCount;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk695905;
    ::ll::UntypedStorage<4, 4> mUnkea6fc5;
    ::ll::UntypedStorage<4, 4> mUnk635cd8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RegistryStatistics& operator=(RegistryStatistics const&);
    RegistryStatistics(RegistryStatistics const&);
    RegistryStatistics();
#endif // @header-generator platform
};

} // namespace dragon::platform
