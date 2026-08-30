#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetPlayerAchievementData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/manual_achievement_tracking/TrackedSetting.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct FacetAchievementData; }
namespace Social { class User; }
namespace persona { class AchievementOfferCollectionManager; }
// clang-format on

namespace OreUI {

class AchievementsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::AchievementsFacet> {
public:
    // AchievementsFacet inner types define
    enum class AchievementFacetStatus : uchar {
        LOADING = 0,
        LOADED  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                  mUserProvider;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Option*>>                           mManualTrackingOption;
    ::ll::UntypedStorage<8, 24>                                                  mResourceAllowList;
    ::ll::TypedStorage<1, 1, ::OreUI::AchievementsFacet::AchievementFacetStatus> mStatus;
    ::ll::TypedStorage<8, 40, ::OreUI::FacetPlayerAchievementData>               mFacetPlayerAchievementData;
    ::ll::UntypedStorage<8, 48>                                                  mTrackedSettings;
    ::ll::TypedStorage<1, 1, bool>                                               mNeedToUpdateAchievementData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mTrackingOptionSubscription;
    ::ll::TypedStorage<4, 4, int>                                                mAchievementUpdateListenerToken;
    ::ll::TypedStorage<8, 16, ::persona::AchievementOfferCollectionManager&>     mAchievementOfferCollectionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementsFacet& operator=(AchievementsFacet const&);
    AchievementsFacet(AchievementsFacet const&);
    AchievementsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementsFacet(
        std::function<std::shared_ptr<Social::User>()>,
        ::persona::AchievementOfferCollectionManager&,
        ::gsl::not_null<Option*>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
    );

    MCNAPI void _refreshPersona(::OreUI::FacetAchievementData&) const;

    MCNAPI ::OreUI::FacetPlayerAchievementData const& getFacetPlayerAchievementData() const;

    MCNAPI ::OreUI::AchievementsFacet::AchievementFacetStatus getStatus() const;

    MCNAPI void setTrackedStatus(std::string const&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[21]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<std::shared_ptr<Social::User>()>,
        ::persona::AchievementOfferCollectionManager&,
        ::gsl::not_null<Option*>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
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
