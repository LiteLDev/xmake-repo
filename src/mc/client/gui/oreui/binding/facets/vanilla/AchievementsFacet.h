#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetPlayerAchievementData.h"
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AchievementsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::AchievementsFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AchievementsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::AchievementsFacet> {
#else // @header-generator platform
class AchievementsFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // AchievementsFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class AchievementFacetStatus : uchar {
        Loading = 0,
        Loaded  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Social::User>()>>       mUserProvider;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Option*>>                                  mManualTrackingOption;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, ::OreUI::AchievementsFacet::AchievementFacetStatus>          mStatus;
    ::ll::TypedStorage<8, 40, ::OreUI::FacetPlayerAchievementData>                        mFacetPlayerAchievementData;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::string,
            ::ManualAchievementTracking::TrackedSetting,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::ManualAchievementTracking::TrackedSetting>>>
                                                                            mTrackedSettings;
    ::ll::TypedStorage<1, 1, bool>                                          mNeedToUpdateAchievementData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mTrackingOptionSubscription;
    ::ll::TypedStorage<4, 4, int>                                           mAchievementUpdateListenerToken;
    ::ll::TypedStorage<8, 8, ::persona::AchievementOfferCollectionManager&> mAchievementOfferCollectionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementsFacet& operator=(AchievementsFacet const&);
    AchievementsFacet(AchievementsFacet const&);
    AchievementsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AchievementsFacet(
        ::std::function<::std::shared_ptr<::Social::User>()>              userProvider,
        ::persona::AchievementOfferCollectionManager&                     achievementOfferCollectionManager,
        ::gsl::not_null<::Option*>                                        manualTrackingOption,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );

    MCAPI void _refreshPersona(::OreUI::FacetAchievementData& facetAchievement) const;

    MCFOLD ::OreUI::FacetPlayerAchievementData const& getFacetPlayerAchievementData() const;

    MCFOLD ::OreUI::AchievementsFacet::AchievementFacetStatus getStatus() const;

    MCAPI void setTrackedStatus(::std::string const& achievementId, bool tracked);
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
        ::std::function<::std::shared_ptr<::Social::User>()>              userProvider,
        ::persona::AchievementOfferCollectionManager&                     achievementOfferCollectionManager,
        ::gsl::not_null<::Option*>                                        manualTrackingOption,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
#else // @header-generator platform
    enum class AchievementFacetStatus : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
