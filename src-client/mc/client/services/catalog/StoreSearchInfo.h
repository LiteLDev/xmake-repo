#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/store_filter/FilterCollectionInfo.h"

// auto generated forward declare list
// clang-format off
class StoreVisualStyle;
// clang-format on

struct StoreSearchInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StoreFilter::FilterCollectionInfo>> mFilterCollections;
    ::ll::UntypedStorage<8, 24>                                               mTrendingRowQueries;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mSkinPackSearchTerms;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mTexturePackSearchTerms;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mWorldTemplateSearchTerms;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mMashupPackSearchTerms;
    ::ll::TypedStorage<4, 4, int>                                             mTrendingQueryOfferCount;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
