#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/NetworkItemInstanceDescriptorData.h"

// auto generated forward declare list
// clang-format off
namespace ItemStackRequestCereal { struct NetworkItemInstanceDescriptorData; }
// clang-format on

namespace ItemStackRequestCereal {

struct CraftResultsActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackRequestCereal::NetworkItemInstanceDescriptorData>> mCraftResults;
    ::ll::TypedStorage<1, 1, uchar>                                                                       mNumCrafts;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#endif // @header-generator platform
