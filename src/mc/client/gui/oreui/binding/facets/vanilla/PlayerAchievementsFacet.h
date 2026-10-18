#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/AchievementsFacet.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetPlayerAchievementData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct FacetAchievementData; }
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserAchievements; }
namespace persona { class AchievementOfferCollectionManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/AchievementsFacet.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetPlayerAchievementData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/XUID.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserAchievements; }
namespace persona { class AchievementOfferCollectionManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayerAchievementsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerAchievementsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mDirty;
    ::ll::TypedStorage<8, 16, std::optional<Social::XUID>>                       mXuid;
    ::ll::UntypedStorage<1, 1>                                                   mStatus;
    ::ll::TypedStorage<8, 40, ::OreUI::FacetPlayerAchievementData>               mData;
    ::ll::UntypedStorage<8, 24>                                                  mResourceAllowList;
    ::ll::TypedStorage<4, 4, int>                                                mAchievementUpdateListenerToken;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::XboxLiveUserAchievements>> mAchievements;
    ::ll::UntypedStorage<8, 24>                                                  mUserManager;
    ::ll::TypedStorage<8, 8, ::persona::AchievementOfferCollectionManager&>      mAchievementOfferCollectionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAchievementsFacet& operator=(PlayerAchievementsFacet const&);
    PlayerAchievementsFacet(PlayerAchievementsFacet const&);
    PlayerAchievementsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerAchievementsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerAchievementsFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const,
        ::persona::AchievementOfferCollectionManager&
    );

    MCNAPI ::OreUI::FacetPlayerAchievementData const& getData();

    MCNAPI ::OreUI::AchievementsFacet::AchievementFacetStatus const& getStatus();

    MCNAPI void load(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[27]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const,
        ::persona::AchievementOfferCollectionManager&
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
class PlayerAchievementsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerAchievementsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    ::ll::TypedStorage<8, 16, ::std::optional<::Social::XUID>>                            mXuid;
    ::ll::TypedStorage<1, 1, ::OreUI::AchievementsFacet::AchievementFacetStatus>          mStatus;
    ::ll::TypedStorage<8, 40, ::OreUI::FacetPlayerAchievementData>                        mData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<4, 4, int>                                                    mAchievementUpdateListenerToken;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::XboxLiveUserAchievements>> mAchievements;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const> mUserManager;
    ::ll::TypedStorage<8, 8, ::persona::AchievementOfferCollectionManager&> mAchievementOfferCollectionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAchievementsFacet& operator=(PlayerAchievementsFacet const&);
    PlayerAchievementsFacet(PlayerAchievementsFacet const&);
    PlayerAchievementsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerAchievementsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerAchievementsFacet(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::persona::AchievementOfferCollectionManager&              achievementOfferCollectionManager
    );

    MCFOLD ::OreUI::FacetPlayerAchievementData const& getData();

    MCFOLD ::OreUI::AchievementsFacet::AchievementFacetStatus const& getStatus();

    MCAPI void load(::std::string const& id);
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
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::persona::AchievementOfferCollectionManager&              achievementOfferCollectionManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class PlayerAchievementsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
