#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/network/realms/InviteLink.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class RealmsInviteLinkSettingsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/network/realms/InviteLink.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class RealmsInviteLinkSettingsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
class RealmsInviteLinkSettingsScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RealmsInviteLinkSettingsScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ExpirationDuration : int {
        Unset      = 0,
        Never      = 1,
        HalfHour   = 2,
        Hour       = 3,
        QuarterDay = 4,
        HalfDay    = 5,
        Day        = 6,
        Week       = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 608, ::Realms::World>                                              mWorld;
    ::ll::TypedStorage<8, 120, ::Realms::InviteLink>                                         mInviteLink;
    ::ll::TypedStorage<4, 4, ::RealmsInviteLinkSettingsScreenController::ExpirationDuration> mPendingExpirationDuration;
    ::ll::TypedStorage<4, 4, ::RealmsInviteLinkSettingsScreenController::ExpirationDuration> mExpirationDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mReadyForCopy;
    ::ll::TypedStorage<1, 1, bool>                                                           mRefreshScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsInviteLinkSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsInviteLinkSettingsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual bool _doesScreenHaveExitBehavior() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsInviteLinkSettingsScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::Realms::World const&,
        ::Realms::InviteLink const&
    );

    MCNAPI void _displayLinkErrorModal(std::string const&, std::string const&);

    MCNAPI void _updateInviteLink(::Realms::InviteLink);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::Realms::World const&, ::Realms::InviteLink const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI bool $_doesScreenHaveExitBehavior() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ExpirationDuration : int {
        Unset      = 0,
        Never      = 1,
        HalfHour   = 2,
        Hour       = 3,
        QuarterDay = 4,
        HalfDay    = 5,
        Day        = 6,
        Week       = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 720, ::Realms::World>                                              mWorld;
    ::ll::TypedStorage<8, 152, ::Realms::InviteLink>                                         mInviteLink;
    ::ll::TypedStorage<4, 4, ::RealmsInviteLinkSettingsScreenController::ExpirationDuration> mPendingExpirationDuration;
    ::ll::TypedStorage<4, 4, ::RealmsInviteLinkSettingsScreenController::ExpirationDuration> mExpirationDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mReadyForCopy;
    ::ll::TypedStorage<1, 1, bool>                                                           mRefreshScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsInviteLinkSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsInviteLinkSettingsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual bool _doesScreenHaveExitBehavior() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsInviteLinkSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::Realms::InviteLink const&              link
    );

    MCAPI void _displayLinkErrorModal(::std::string const& title, ::std::string const& body);

    MCAPI void _updateInviteLink(::Realms::InviteLink tempLink);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::Realms::InviteLink const&              link
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD bool $_doesScreenHaveExitBehavior() const;
    // NOLINTEND
#else // @header-generator platform
    enum class ExpirationDuration : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
