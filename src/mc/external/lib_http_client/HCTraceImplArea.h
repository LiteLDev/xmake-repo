#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"
#else // @header-generator platform
#endif // @header-generator platform

struct HCTraceImplArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, char const* const> Name;
    ::ll::TypedStorage<4, 4, ::HCTraceLevel>    Verbosity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk7af279;
    ::ll::UntypedStorage<4, 4> mUnk50c68b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HCTraceImplArea& operator=(HCTraceImplArea const&);
    HCTraceImplArea(HCTraceImplArea const&);
    HCTraceImplArea();
#endif // @header-generator platform
};
