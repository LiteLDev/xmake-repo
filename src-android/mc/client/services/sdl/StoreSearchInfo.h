#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/store_filter/FilterCollectionInfo.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace SDL {

struct StoreSearchInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StoreFilter::FilterCollectionInfo>> mFilterCollections;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mMashupPackSearchTerms;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mSkinPackSearchTerms;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mTexturePackSearchTerms;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mWorldTemplateSearchTerms;
    ::ll::TypedStorage<8, 8, ulong>                                           mTotalSearchTermCount;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreSearchInfo& operator=(StoreSearchInfo const&);
    StoreSearchInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StoreSearchInfo(::SDL::StoreSearchInfo const&);

    MCNAPI void _constructFilterCollection(::Json::Value const&);

    MCNAPI void fromJsonShared(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SDL::StoreSearchInfo const&);
    // NOLINTEND
};

} // namespace SDL
