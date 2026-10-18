#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace persona {

struct PackEvictionTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>           mId;
    ::ll::UntypedStorage<8, 32>                      mPath;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>> mPack;
    ::ll::TypedStorage<8, 8, long>                   mLastUsedSecAtSelection;
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
