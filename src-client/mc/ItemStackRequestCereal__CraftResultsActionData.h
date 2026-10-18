#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__NetworkItemInstanceDescriptorData.h"

namespace ItemStackRequestCereal {

struct CraftResultsActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemStackRequestCereal::NetworkItemInstanceDescriptorData>> mCraftResults;
    ::ll::TypedStorage<1, 1, uchar>                                                                   mNumCrafts;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
