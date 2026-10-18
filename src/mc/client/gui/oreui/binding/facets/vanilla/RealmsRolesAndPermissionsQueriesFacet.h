#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/realms/PlayerRoleWithActionsList.h"
#include "mc/client/realms/RolesAndPermissionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRolesAndPermissions; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/realms/RolesAndPermissionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRolesAndPermissions; }
namespace Realms { struct PlayerRoleWithActionsList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsRolesAndPermissionsQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsRolesAndPermissionsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>                            mSelectedUserRole;
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerRoleActions>>         mSelectedUserActions;
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerRoleWithActionsList>> mCurrentUserRolesAndActionsForAllRealms;
    ::ll::TypedStorage<4, 4, ::Realms::RolesAndPermissionsState>              mState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsRolesAndPermissionsQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsRolesAndPermissionsQueriesFacet(std::shared_ptr<Realms::RealmsRolesAndPermissions>);

    MCNAPI void _updateState();

    MCNAPI std::vector<Realms::PlayerRoleWithActionsList> const& getCurrentUserRolesAndActionsForAllRealms() const;

    MCNAPI std::vector<Realms::PlayerRoleActions> const& getSelectedUserActions() const;

    MCNAPI ::Realms::PlayerRole getSelectedUserRole() const;

    MCNAPI ::Realms::RolesAndPermissionsState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[41]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsRolesAndPermissions>);
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
class RealmsRolesAndPermissionsQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsRolesAndPermissionsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>                        mSelectedUserRole;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::PlayerRoleActions>> mSelectedUserActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::PlayerRoleWithActionsList>>
                                                                 mCurrentUserRolesAndActionsForAllRealms;
    ::ll::TypedStorage<4, 4, ::Realms::RolesAndPermissionsState> mState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsRolesAndPermissionsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsRolesAndPermissionsQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsRolesAndPermissions> rolesAndPermissions
    );

    MCAPI void _updateState();

    MCFOLD ::std::vector<::Realms::PlayerRoleWithActionsList> const& getCurrentUserRolesAndActionsForAllRealms() const;

    MCFOLD ::std::vector<::Realms::PlayerRoleActions> const& getSelectedUserActions() const;

    MCFOLD ::Realms::PlayerRole getSelectedUserRole() const;

    MCFOLD ::Realms::RolesAndPermissionsState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsRolesAndPermissions> rolesAndPermissions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsRolesAndPermissionsQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
