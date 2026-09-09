#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonContent.h"
#include "mc/client/services/catalog/CommonImage.h"
#include "mc/client/services/catalog/CommonLocTextPair.h"
#include "mc/client/services/catalog/ImageMetaListDocument.h"
#include "mc/client/services/requests/catalog/reviews/RatingData.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
namespace Json { class Value; }
// clang-format on

struct CommonDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                  mProductId;
    ::ll::TypedStorage<8, 24, std::string>                                  mContentType;
    ::ll::TypedStorage<8, 24, std::string>                                  mCreatorId;
    ::ll::TypedStorage<8, 24, std::string>                                  mFriendlyId;
    ::ll::TypedStorage<8, 24, std::string>                                  mOneStoreId;
    ::ll::TypedStorage<8, 24, std::string>                                  mStartDate;
    ::ll::TypedStorage<8, 24, std::string>                                  mCreationDate;
    ::ll::TypedStorage<8, 24, std::string>                                  mLastModifiedDate;
    ::ll::TypedStorage<8, 48, ::CommonLocTextPair>                          mTitle;
    ::ll::TypedStorage<8, 48, ::CommonLocTextPair>                          mDescription;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mTitleDictionary;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mDescriptionDictionary;
    ::ll::TypedStorage<8, 32, ::RatingData>                                 mRatingData;
    ::ll::TypedStorage<1, 1, bool>                                          mIsSemVersionValid;
    ::ll::TypedStorage<1, 1, bool>                                          mIsTitleLocked;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                     mTags;
    ::ll::TypedStorage<8, 24, std::vector<CommonContent>>                   mContents;
    ::ll::TypedStorage<8, 24, ::ImageMetaListDocument>                      mImages;
    ::ll::TypedStorage<8, 144, ::CommonImage>                               mThumbnail;
    ::ll::TypedStorage<8, 144, ::CommonImage>                               mBanner;
    ::ll::TypedStorage<8, 144, ::CommonImage>                               mIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonDocument& operator=(CommonDocument const&);
    CommonDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonDocument(::CommonDocument const&);

    MCNAPI void _fromJsonShared(std::string const&, ::Json::Value const&, bool);

    MCNAPI bool containsTag(std::string const&) const;

    MCNAPI void fromJson(std::string const&, ::Json::Value const&, ::CatalogBackend const&);

    MCNAPI void fromPersonaJson(std::string const&, ::Json::Value const&, ::CatalogBackend const&);

    MCNAPI ~CommonDocument();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
