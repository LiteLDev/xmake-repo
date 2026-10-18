#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientboundDataDrivenUICloseScreenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<uint>> mFormId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mFormId;
#endif // @header-generator platform
    // NOLINTEND
};
