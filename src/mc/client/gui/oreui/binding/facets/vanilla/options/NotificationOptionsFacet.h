#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class NotificationOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::NotificationOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&> mOptions;
    ::ll::TypedStorage<1, 1, bool>               mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    NotificationOptionsFacet& operator=(NotificationOptionsFacet const&);
    NotificationOptionsFacet(NotificationOptionsFacet const&);
    NotificationOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NotificationOptionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NotificationOptionsFacet(::IOptionRegistry&);

    MCNAPI bool getDoNotAddonStackingWarning() const;

    MCNAPI bool getDoNotShowAlternativeStorageHasWorlds() const;

    MCNAPI bool getDoNotShowEntitlementWarning() const;

    MCNAPI bool getDoNotShowExperimentalWorldWarning(std::string const&) const;

    MCNAPI bool getDoNotShowFriendsListFTUE() const;

    MCNAPI bool getDoNotShowHardcoreModeWarning() const;

    MCNAPI bool getDoNotShowHiddenAlternativeStorageWorldsWarning() const;

    MCNAPI bool getDoNotShowHiddenLocalWorldsWarning() const;

    MCNAPI bool getDoNotShowManageShowcaseClearWarning() const;

    MCNAPI bool getDoNotShowManageShowcaseReplaceWarning() const;

    MCNAPI bool getDoNotShowMultiplayerIpSafetyWarning() const;

    MCNAPI bool getDoNotShowMultiplayerOnlineSafetyWarning() const;

    MCNAPI bool getDoNotShowNonPublicServerWarning() const;

    MCNAPI bool getDoNotShowNotFollowingPartyWarning() const;

    MCNAPI bool getDoNotShowOldWorldsWarning() const;

    MCNAPI bool getDoNotShowPartiesNotSupportedWarning() const;

    MCNAPI bool getDoNotShowPartyAddMembersToRealmModal() const;

    MCNAPI bool getDoNotShowPartyPermissionRequiredRealmsWarning() const;

    MCNAPI bool getDoNotShowPartyTabFTUE() const;

    MCNAPI bool getDoNotShowPartyWorldCapacityRealmsWarning() const;

    MCNAPI bool getDoNotShowStorageLowWarning() const;

    MCNAPI bool getDoNotShowUnavailableDependenciesBeta() const;

    MCNAPI bool getDoNotShowUsingExternalStorageWarning() const;

    MCNAPI bool getdoNotShowManageFeedDeleteWarning() const;

    MCNAPI void resetPartyJoinRealmsWarnings();

    MCNAPI void setDisableHardcoreModeWarningOnce(bool);

    MCNAPI void setDoNotAddonStackingWarning(bool);

    MCNAPI void setDoNotShowAlternativeStorageHasWorlds(bool);

    MCNAPI void setDoNotShowEntitlementWarning(bool);

    MCNAPI void setDoNotShowExperimentalWorldWarning(std::string const&, bool const);

    MCNAPI void setDoNotShowFriendsListFTUE(bool);

    MCNAPI void setDoNotShowHardcoreModeWarning(bool);

    MCNAPI void setDoNotShowHiddenAlternativeStorageWorldsWarning(bool);

    MCNAPI void setDoNotShowHiddenLocalWorldsWarning(bool);

    MCNAPI void setDoNotShowManageShowcaseClearWarning(bool);

    MCNAPI void setDoNotShowManageShowcaseReplaceWarning(bool);

    MCNAPI void setDoNotShowMultiplayerIpSafetyWarning(bool);

    MCNAPI void setDoNotShowMultiplayerOnlineSafetyWarning(bool);

    MCNAPI void setDoNotShowNonPublicServerWarning(bool);

    MCNAPI void setDoNotShowNotFollowingPartyWarning(bool);

    MCNAPI void setDoNotShowOldWorldsWarning(bool);

    MCNAPI void setDoNotShowPartiesNotSupportedWarning(bool);

    MCNAPI void setDoNotShowPartyAddMembersToRealmModal(bool);

    MCNAPI void setDoNotShowPartyPermissionRequiredRealmsWarning(bool);

    MCNAPI void setDoNotShowPartyTabFTUE(bool);

    MCNAPI void setDoNotShowPartyWorldCapacityRealmsWarning(bool);

    MCNAPI void setDoNotShowStorageLowWarning(bool);

    MCNAPI void setDoNotShowUnavailableDependenciesBeta(bool);

    MCNAPI void setDoNotShowUsingExternalStorageWarning(bool);

    MCNAPI void setdoNotShowManageFeedDeleteWarning(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[28]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry&);
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
class NotificationOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NotificationOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&> mOptions;
    ::ll::TypedStorage<1, 1, bool>               mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    NotificationOptionsFacet& operator=(NotificationOptionsFacet const&);
    NotificationOptionsFacet(NotificationOptionsFacet const&);
    NotificationOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getDoNotAddonStackingWarning() const;

    MCAPI bool getDoNotShowAlternativeStorageHasWorlds() const;

    MCAPI bool getDoNotShowEntitlementWarning() const;

    MCAPI bool getDoNotShowExperimentalWorldWarning(::std::string const& worldID) const;

    MCAPI bool getDoNotShowFriendsListFTUE() const;

    MCAPI bool getDoNotShowHardcoreModeWarning() const;

    MCAPI bool getDoNotShowHiddenAlternativeStorageWorldsWarning() const;

    MCAPI bool getDoNotShowHiddenLocalWorldsWarning() const;

    MCAPI bool getDoNotShowManageShowcaseClearWarning() const;

    MCAPI bool getDoNotShowManageShowcaseReplaceWarning() const;

    MCAPI bool getDoNotShowMultiplayerIpSafetyWarning() const;

    MCAPI bool getDoNotShowMultiplayerOnlineSafetyWarning() const;

    MCAPI bool getDoNotShowNonPublicServerWarning() const;

    MCAPI bool getDoNotShowNotFollowingPartyWarning() const;

    MCAPI bool getDoNotShowOldWorldsWarning() const;

    MCAPI bool getDoNotShowPartiesNotSupportedWarning() const;

    MCAPI bool getDoNotShowPartyAddMembersToRealmModal() const;

    MCAPI bool getDoNotShowPartyPermissionRequiredRealmsWarning() const;

    MCAPI bool getDoNotShowPartyTabFTUE() const;

    MCAPI bool getDoNotShowPartyWorldCapacityRealmsWarning() const;

    MCAPI bool getDoNotShowStorageLowWarning() const;

    MCFOLD bool getDoNotShowUnavailableDependenciesBeta() const;

    MCAPI bool getDoNotShowUsingExternalStorageWarning() const;

    MCAPI bool getdoNotShowManageFeedDeleteWarning() const;

    MCAPI void resetPartyJoinRealmsWarnings();

    MCAPI void setDisableHardcoreModeWarningOnce(bool newValue);

    MCAPI void setDoNotAddonStackingWarning(bool newValue);

    MCAPI void setDoNotShowAlternativeStorageHasWorlds(bool newValue);

    MCAPI void setDoNotShowEntitlementWarning(bool newValue);

    MCAPI void setDoNotShowExperimentalWorldWarning(::std::string const& worldID, bool const shouldNotShow);

    MCAPI void setDoNotShowFriendsListFTUE(bool newValue);

    MCAPI void setDoNotShowHardcoreModeWarning(bool newValue);

    MCAPI void setDoNotShowHiddenAlternativeStorageWorldsWarning(bool newValue);

    MCAPI void setDoNotShowHiddenLocalWorldsWarning(bool newValue);

    MCAPI void setDoNotShowManageShowcaseClearWarning(bool newValue);

    MCAPI void setDoNotShowManageShowcaseReplaceWarning(bool newValue);

    MCAPI void setDoNotShowMultiplayerIpSafetyWarning(bool newValue);

    MCAPI void setDoNotShowMultiplayerOnlineSafetyWarning(bool newValue);

    MCAPI void setDoNotShowNonPublicServerWarning(bool newValue);

    MCAPI void setDoNotShowNotFollowingPartyWarning(bool newValue);

    MCAPI void setDoNotShowOldWorldsWarning(bool newValue);

    MCAPI void setDoNotShowPartiesNotSupportedWarning(bool newValue);

    MCAPI void setDoNotShowPartyAddMembersToRealmModal(bool newValue);

    MCAPI void setDoNotShowPartyPermissionRequiredRealmsWarning(bool newValue);

    MCAPI void setDoNotShowPartyTabFTUE(bool newValue);

    MCAPI void setDoNotShowPartyWorldCapacityRealmsWarning(bool newValue);

    MCAPI void setDoNotShowStorageLowWarning(bool newValue);

    MCAPI void setDoNotShowUnavailableDependenciesBeta(bool newValue);

    MCAPI void setDoNotShowUsingExternalStorageWarning(bool newValue);

    MCAPI void setdoNotShowManageFeedDeleteWarning(bool newValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class NotificationOptionsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
