#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PostStatus.h"

// auto generated forward declare list
// clang-format off
namespace Clubs { struct FeedItem; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PostStatus.h"

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
struct FacetCommentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                       mTimePosted;
    ::ll::TypedStorage<8, 24, std::string>                                       mTimePostedNarration;
    ::ll::TypedStorage<8, 24, std::string>                                       mBody;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mSetViewedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mToggleLikePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mReportToClubOwnerPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                      mReportToXboxPrevStatus;
    ::ll::TypedStorage<8, 8, ::Clubs::FeedItem&>                                 mFeedItem;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetCommentData& operator=(FacetCommentData const&);
    FacetCommentData(FacetCommentData const&);
    FacetCommentData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetCommentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePosted;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePostedNarration;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mBody;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mSetViewedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mToggleLikePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToClubOwnerPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToXboxPrevStatus;
    ::ll::TypedStorage<8, 8, ::Clubs::FeedItem&>                                     mFeedItem;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetCommentData& operator=(FacetCommentData const&);
    FacetCommentData(FacetCommentData const&);
    FacetCommentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getAuthorXuid() const;

    MCAPI ::Realms::Stories::PostStatus getDeleteStatus() const;

    MCAPI bool const getHasLiked() const;

    MCAPI bool const getHasViewed() const;

    MCAPI ::std::string const& getId() const;

    MCAPI ::std::string const& getParentId() const;

    MCAPI ::Realms::Stories::PostStatus getReportToClubOwnerStatus() const;

    MCAPI ::Realms::Stories::PostStatus getReportToXboxStatus() const;

    MCAPI ::Realms::Stories::PostStatus getSetViewedStatus() const;

    MCAPI ::Realms::Stories::PostStatus getToggleLikeStatus() const;

    MCAPI int const getTotalLikes() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
struct FacetCommentData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::RealmsStories
