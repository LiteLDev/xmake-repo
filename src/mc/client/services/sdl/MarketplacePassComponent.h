#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SearchQuery;
struct MarketplacePassSection;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct MarketplacePassComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                             mContentTabSections;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SearchQuery>> mViewPacksQuery;
    ::ll::TypedStorage<4, 4, int>                           mExpirationTimerDays;
    // NOLINTEND
};
#else // @header-generator platform
struct MarketplacePassComponent {};
#endif // @header-generator platform

} // namespace SDL
