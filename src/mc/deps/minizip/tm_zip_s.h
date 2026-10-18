#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct tm_zip_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> tm_sec;
    ::ll::TypedStorage<4, 4, uint> tm_min;
    ::ll::TypedStorage<4, 4, uint> tm_hour;
    ::ll::TypedStorage<4, 4, uint> tm_mday;
    ::ll::TypedStorage<4, 4, uint> tm_mon;
    ::ll::TypedStorage<4, 4, uint> tm_year;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkf1fbb8;
    ::ll::UntypedStorage<4, 4> mUnkef0b8d;
    ::ll::UntypedStorage<4, 4> mUnkc162d2;
    ::ll::UntypedStorage<4, 4> mUnk82235f;
    ::ll::UntypedStorage<4, 4> mUnk2d20af;
    ::ll::UntypedStorage<4, 4> mUnkdb26b1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    tm_zip_s& operator=(tm_zip_s const&);
    tm_zip_s(tm_zip_s const&);
    tm_zip_s();
#endif // @header-generator platform
};
