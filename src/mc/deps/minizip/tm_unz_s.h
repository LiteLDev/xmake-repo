#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct tm_unz_s {
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
    ::ll::UntypedStorage<4, 4> mUnk52b9a2;
    ::ll::UntypedStorage<4, 4> mUnkab0964;
    ::ll::UntypedStorage<4, 4> mUnk793638;
    ::ll::UntypedStorage<4, 4> mUnk836b4e;
    ::ll::UntypedStorage<4, 4> mUnka6618a;
    ::ll::UntypedStorage<4, 4> mUnk2b25ef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    tm_unz_s& operator=(tm_unz_s const&);
    tm_unz_s(tm_unz_s const&);
    tm_unz_s();
#endif // @header-generator platform
};
