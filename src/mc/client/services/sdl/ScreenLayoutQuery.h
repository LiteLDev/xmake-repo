#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class StoreSearchQuery;
namespace SDL { struct HeaderComponent; }
namespace SDL { struct MarketplacePassComponent; }
namespace SDL { struct RealmsPlusComponent; }
namespace SDL { struct WorldListComponent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenLayoutQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                    mComponentID;
    ::ll::UntypedStorage<8, 24>                                               mQueries;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mExtraUpsellQueryTags;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SDL::WorldListComponent>>       mWorldListComp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SDL::HeaderComponent>>          mHeaderComp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SDL::RealmsPlusComponent>>      mRealmsPlusComp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SDL::MarketplacePassComponent>> mMarketplacePassComp;
    ::ll::TypedStorage<8, 24, std::string>                                    mTelemetryId;
    ::ll::TypedStorage<8, 24, std::string>                                    mSeeMoreLinksTo;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenLayoutQuery {};
#endif // @header-generator platform

} // namespace SDL
