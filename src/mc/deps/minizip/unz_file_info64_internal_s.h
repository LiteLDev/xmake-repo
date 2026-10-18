#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_file_info64_internal_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, unsigned long long> offset_curfile;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk33aefe;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    unz_file_info64_internal_s& operator=(unz_file_info64_internal_s const&);
    unz_file_info64_internal_s(unz_file_info64_internal_s const&);
    unz_file_info64_internal_s();
#endif // @header-generator platform
};
