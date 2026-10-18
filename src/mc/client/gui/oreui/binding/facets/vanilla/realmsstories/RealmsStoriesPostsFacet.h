#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/FacetStoryData.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace OreUI::RealmsStories { struct FacetStoryData; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsStoriesPostsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesPostsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RealmsStories::FacetStoryData>>   mStories;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                       mStoryFeedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                       mEventsPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                        mPostStoryPrevStatus;
    ::ll::TypedStorage<4, 4, int const>                                            STORIES_PER_PAGE;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::UntypedStorage<8, 24>                                                    mDateManager;
    ::ll::UntypedStorage<8, 24>                                                    mProfanityContext;
    ::ll::UntypedStorage<8, 24>                                                    mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                 mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPostsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPostsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesPostsFacet(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI bool _getMostRecentStoriesViewed() const;

    MCNAPI int _getPageLength() const;

    MCNAPI ::Realms::Stories::PostStatus _getPostStoryStatus() const;

    MCNAPI bool _getStoryFeedFirstPageReady() const;

    MCNAPI ::Realms::Stories::FetchStatus _getStoryFeedStatus() const;

    MCNAPI int _getStoryFeedTotalStories() const;

    MCNAPI int _getUnreadStoryCount() const;

    MCNAPI void _regenerateView();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsStoriesPostsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesPostsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetStoryData>>      mStories;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                              mStoryFeedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                              mEventsPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                               mPostStoryPrevStatus;
    ::ll::TypedStorage<4, 4, int const>                                                   STORIES_PER_PAGE;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>>    mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>          mProfanityContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPostsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPostsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesPostsFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager>    provider,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI bool _getMostRecentStoriesViewed() const;

    MCFOLD int _getPageLength() const;

    MCAPI ::Realms::Stories::PostStatus _getPostStoryStatus() const;

    MCAPI bool _getStoryFeedFirstPageReady() const;

    MCAPI ::Realms::Stories::FetchStatus _getStoryFeedStatus() const;

    MCAPI int _getStoryFeedTotalStories() const;

    MCAPI int _getUnreadStoryCount() const;

    MCAPI void _regenerateView();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager>    provider,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsStoriesPostsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
