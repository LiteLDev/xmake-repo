#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__SlotInfoData.h"

namespace ItemStackRequestCereal {

struct ConsumeActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                   mAmount;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mSource;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
