#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_global_info64_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, unsigned long long> number_entry;
    ::ll::TypedStorage<8, 8, ulong>              size_comment;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk27af63;
    ::ll::UntypedStorage<4, 4> mUnkf0c681;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    unz_global_info64_s& operator=(unz_global_info64_s const&);
    unz_global_info64_s(unz_global_info64_s const&);
    unz_global_info64_s();
#endif // @header-generator platform
};
