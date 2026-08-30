#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SearchQuery;
struct RealmsPlusSection;
// clang-format on

namespace SDL {

struct RealmsPlusComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                             mContentTabSections;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SearchQuery>> mViewPacksQuery;
    ::ll::TypedStorage<4, 4, int>                           mExpirationTimerDays;
    // NOLINTEND
};

} // namespace SDL
