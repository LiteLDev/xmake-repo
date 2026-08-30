#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
