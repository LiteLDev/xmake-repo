#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_fileinfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnke1bfbb;
    ::ll::UntypedStorage<4, 4>  mUnk75efae;
    ::ll::UntypedStorage<4, 4>  mUnk174208;
    ::ll::UntypedStorage<4, 4>  mUnk471872;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_fileinfo& operator=(zip_fileinfo const&);
    zip_fileinfo(zip_fileinfo const&);
    zip_fileinfo();
};
#endif // @header-generator platform
