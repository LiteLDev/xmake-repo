#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__SlotInfoData.h"

namespace ItemStackRequestCereal {

struct SwapActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mSource;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mDestination;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
