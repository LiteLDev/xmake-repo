#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/FacetReportData.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/DeletionStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/DeletionStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace OreUI::RealmsStories { struct FacetReportData; }
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsStoriesReportsQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesReportsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RealmsStories::FacetReportData>>     mReports;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::RealmsFeedModeration>> mFeedModeration;
    ::ll::UntypedStorage<8, 24>                                                       mDateManager;
    ::ll::UntypedStorage<8, 24>                                                       mProfanityContext;
    ::ll::UntypedStorage<8, 24>                                                       mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mRealmModerationStateSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                                    mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesReportsQueriesFacet(
        std::shared_ptr<Realms::Stories::RealmsFeedModeration>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI ::Realms::Stories::DeletionStatus _getHasDeleted() const;

    MCNAPI int _getPageLength() const;

    MCNAPI ::Realms::Stories::FetchStatus _getStoryFeedStatus() const;

    MCNAPI int _getStoryFeedTotalStories() const;
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
        std::shared_ptr<Realms::Stories::RealmsFeedModeration>,
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
class RealmsStoriesReportsQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesReportsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetReportData>>     mReports;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModeration;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>          mProfanityContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmModerationStateSubscriber;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesReportsQueriesFacet(
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::Realms::Stories::DeletionStatus _getHasDeleted() const;

    MCAPI int _getPageLength() const;

    MCAPI ::Realms::Stories::FetchStatus _getStoryFeedStatus() const;

    MCAPI int _getStoryFeedTotalStories() const;
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
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration,
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
class RealmsStoriesReportsQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
