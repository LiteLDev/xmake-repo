#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_global_info_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> number_entry;
    ::ll::TypedStorage<8, 8, ulong> size_comment;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk3e4333;
    ::ll::UntypedStorage<4, 4> mUnk7dd069;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    unz_global_info_s& operator=(unz_global_info_s const&);
    unz_global_info_s(unz_global_info_s const&);
    unz_global_info_s();
#endif // @header-generator platform
};
