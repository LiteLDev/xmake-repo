#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SearchQuery;
struct RealmsPlusSection;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmsPlusComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                             mContentTabSections;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SearchQuery>> mViewPacksQuery;
    ::ll::TypedStorage<4, 4, int>                           mExpirationTimerDays;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsPlusComponent {};
#endif // @header-generator platform

} // namespace SDL
