#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/realms/PostStatus.h"

// auto generated forward declare list
// clang-format off
namespace Clubs { struct FeedItem; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Clubs { struct FeedItem; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::RealmsStories {

#if defined(LL_PLAT_A) // @header-generator platform
struct FacetStoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                       mTimePosted;
    ::ll::TypedStorage<8, 24, std::string>                                       mTimePostedNarration;
    ::ll::UntypedStorage<8, 72>                                                  mImagePath;
    ::ll::TypedStorage<8, 24, std::string>                                       mBody;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mSetViewedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mToggleLikePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mReportToClubOwnerPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mReportToXboxPrevStatus;
    ::ll::TypedStorage<1, 1, bool>                                               mDirty;
    ::ll::TypedStorage<8, 8, ::Clubs::FeedItem&>                                 mFeedItem;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const>                    NO_PLAYERS;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetStoryData& operator=(FacetStoryData const&);
    FacetStoryData(FacetStoryData const&);
    FacetStoryData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetStoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePosted;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePostedNarration;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                mImagePath;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mBody;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mSetViewedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mToggleLikePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToClubOwnerPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToXboxPrevStatus;
    ::ll::TypedStorage<1, 1, bool>                                                   mDirty;
    ::ll::TypedStorage<8, 8, ::Clubs::FeedItem&>                                     mFeedItem;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>                    NO_PLAYERS;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetStoryData& operator=(FacetStoryData const&);
    FacetStoryData(FacetStoryData const&);
    FacetStoryData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getAuthorXuid() const;

    MCAPI ::Realms::Stories::FetchStatus getCommentsStatus() const;

    MCAPI ::Realms::Stories::PostStatus getDeleteStatus() const;

    MCAPI bool getEventHasCoordinates() const;

    MCAPI ::std::string const& getEventMetadata() const;

    MCAPI ::std::vector<::std::string> const& getEventPlayerXuids() const;

    MCAPI int getEventXCoordinate() const;

    MCAPI int getEventYCoordinate() const;

    MCAPI int getEventZCoordinate() const;

    MCAPI bool getHasLiked() const;

    MCAPI bool getHasViewed() const;

    MCAPI ::std::string const& getId() const;

    MCAPI ::Realms::Stories::FetchStatus getImageStatus() const;

    MCAPI bool getIsEvent() const;

    MCAPI bool getIsEventLoaded() const;

    MCAPI int getNumComments() const;

    MCAPI ::Realms::Stories::PostStatus getReportToClubOwnerStatus() const;

    MCAPI ::Realms::Stories::PostStatus getReportToXboxStatus() const;

    MCAPI ::Realms::Stories::PostStatus getSetViewedStatus() const;

    MCAPI ::Realms::Stories::PostStatus getToggleLikeStatus() const;

    MCAPI int getTotalLikes() const;

    MCAPI void setHasViewed(bool value);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[28]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
struct FacetStoryData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::RealmsStories
