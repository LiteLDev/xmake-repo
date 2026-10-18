#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/LoadingScreenId.h"

struct PlayerLoadingScreenComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8> mLoadingScreenId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::LoadingScreenId> mLoadingScreenId;
#endif // @header-generator platform
    // NOLINTEND
};
