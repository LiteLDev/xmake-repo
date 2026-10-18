#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

class DirectoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> mCreatedTime;
    ::ll::TypedStorage<8, 8, long> mModifiedTime;
    ::ll::UntypedStorage<8, 48>    mOnCloseCallback;
    // NOLINTEND
};

} // namespace Core::Internal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
