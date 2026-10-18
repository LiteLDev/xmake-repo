#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"
#else // @header-generator platform
#endif // @header-generator platform

struct RealmsUnknownPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 1>                    mPackType;
    ::ll::UntypedStorage<1, 1>                    mPackOrigin;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd77a80;
    ::ll::UntypedStorage<1, 1> mUnke94baa;
    ::ll::UntypedStorage<1, 1> mUnka19a6f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RealmsUnknownPackSourceOptions& operator=(RealmsUnknownPackSourceOptions const&);
    RealmsUnknownPackSourceOptions(RealmsUnknownPackSourceOptions const&);
    RealmsUnknownPackSourceOptions();
#endif // @header-generator platform
};
