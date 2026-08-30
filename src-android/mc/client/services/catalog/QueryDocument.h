#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

struct QueryDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mContentTypes;
    ::ll::TypedStorage<8, 24, std::string>              mSearchString;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mOrTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAndTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mNotTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mRarityFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPieceTypeFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPieceTypeFilterExclusions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mProductIdOrder;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCreatorIds;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mProductIdExclusions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCreatorIdExclusions;
    ::ll::TypedStorage<4, 4, int>                       mItemLimit;
    ::ll::TypedStorage<4, 4, int>                       mTopCount;
    ::ll::TypedStorage<8, 24, std::string>              mClientSort;
    ::ll::TypedStorage<8, 24, std::string>              mSortBy;
    ::ll::TypedStorage<8, 24, std::string>              mSortDirection;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mUpsellQueryTags;
    ::ll::TypedStorage<4, 4, int>                       mCarouselRotationTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI QueryDocument();

    MCNAPI QueryDocument(::Json::Value const&, ::CustomDocumentModifier*, std::string const&);

    MCNAPI void fromJson(::Json::Value const&, ::CustomDocumentModifier*, std::string const&);

    MCNAPI bool isValid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Json::Value const&, ::CustomDocumentModifier*, std::string const&);
    // NOLINTEND
};
