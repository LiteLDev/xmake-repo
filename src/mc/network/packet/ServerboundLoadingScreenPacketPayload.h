#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerboundLoadingScreenPacketType.h"
#include "mc/util/LoadingScreenId.h"

struct ServerboundLoadingScreenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ServerboundLoadingScreenPacketType> mServerboundLoadingScreenPacketType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                                     mLoadingScreenId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::LoadingScreenId>                    mLoadingScreenId;
#endif // @header-generator platform
    // NOLINTEND
};
