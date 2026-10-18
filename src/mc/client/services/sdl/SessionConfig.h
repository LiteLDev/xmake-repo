#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/sdl/PlatformSkus.h"
#include "mc/client/services/sdl/StoreSearchInfo.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace ContentCard { class StyleCollection; }
namespace Json { class Value; }
namespace SDL { struct ScreenLayoutQuery; }
namespace StoreFilter { struct FilterCollectionInfo; }
namespace sidebar { class NavigationDocument; }
namespace sidebar { struct NavigationOptionRootDocument; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
class SessionConfig : public ::Bedrock::EnableNonOwnerReferences,
                      public ::std::enable_shared_from_this<SDL::SessionConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                          mContinuationToken;
    ::ll::TypedStorage<8, 24, std::string>                                          mDocumentId;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>         mBinaryUrlCollection;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                             mGlobalNotTags;
    ::ll::TypedStorage<8, 24, std::string>                                          mLatestTextureVersion;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>         mKnownPages;
    ::ll::UntypedStorage<8, 24>                                                     mNavigationDocument;
    ::ll::TypedStorage<8, 128, ::SDL::StoreSearchInfo>                              mSearchInfo;
    ::ll::TypedStorage<4, 4, int>                                                   mStoreVersion;
    ::ll::TypedStorage<4, 4, int>                                                   mFeedbackTextLimit;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SDL::ScreenLayoutQuery>>> mUpsellLayoutList;
    ::ll::TypedStorage<8, 24, std::string>                                          mUserListVersion;
    ::ll::TypedStorage<8, 24, ::SDL::PlatformSkus>                                  mServiceDrivenSkus;
    ::ll::TypedStorage<8, 8, long>                                                  mBadgePromoCountdownWindow;
    ::ll::UntypedStorage<8, 16>                                                     mContentCardStyleCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionConfig& operator=(SessionConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SessionConfig(::SDL::SessionConfig const&);

    MCNAPI void _initFromJson(::Json::Value const&);

    MCNAPI long getBadgePromoCountdownWindow() const;

    MCNAPI std::string const& getBinaryUrlByName(std::string const&) const;

    MCNAPI std::shared_ptr<const ContentCard::StyleCollection> getContentCardStyleCollection() const;

    MCNAPI std::string const& getDocumentId() const;

    MCNAPI int getExpectedStoreVersion() const;

    MCNAPI int getFeedbackTextLimit() const;

    MCNAPI std::vector<StoreFilter::FilterCollectionInfo> const& getFilterCollections() const;

    MCNAPI std::string const& getKnownPageByName(std::string const&) const;

    MCNAPI std::string const& getKnownPageKeyValue(std::string const&) const;

    MCNAPI std::string const& getLatestTextureVersion() const;

    MCNAPI ::sidebar::NavigationOptionRootDocument const&
    getNavigationDocumentRootByNavigationLayoutType(::sidebar::navigationLayout::Type const&) const;

    MCNAPI std::string getRandomSearchTermUsingCategory(::StoreCatalogCategory const&) const;

    MCNAPI ::SDL::PlatformSkus const& getServiceDrivenSkus() const;

    MCNAPI std::vector<std::shared_ptr<SDL::ScreenLayoutQuery>> const& getUpsellLayoutList() const;

    MCNAPI std::string const& getUserListVersion() const;

    MCNAPI void initialize(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SDL::SessionConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SessionConfig {};
#endif // @header-generator platform

} // namespace SDL
