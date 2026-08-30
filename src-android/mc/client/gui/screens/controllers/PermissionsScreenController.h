#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/LayeredAbilities.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class UserDataScreenController;
namespace Json { class Value; }
// clang-format on

class PermissionsScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mEDUPermissionsPopupActive;
    ::ll::TypedStorage<1, 1, bool>                        mPermissionDropdownActive;
    ::ll::TypedStorage<8, 1464, ::LayeredAbilities>       mStartAbilityCache;
    ::ll::TypedStorage<8, 1464, ::LayeredAbilities>       mAbilities;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>             mDefaultPlayerId;
    ::ll::TypedStorage<8, 8, ulong>                       mSelectedPlayerIndex;
    ::ll::TypedStorage<1, 1, bool>                        mCanEdit;
    ::ll::TypedStorage<1, 1, bool>                        mPlayerListInitialized;
    ::ll::TypedStorage<1, 1, bool>                        mContentAreaActive;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>   mPermissionNames;
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mClientIds;
    ::ll::UntypedStorage<8, 24>                           mUserDataScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PermissionsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onLeave();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PermissionsScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::ActorUniqueID,
        std::weak_ptr<UserDataScreenController>,
        ::ScreenExitBehavior
    );

    MCNAPI void _closeEduPermissionsPopup();

    MCNAPI void _confirmationDeoppingOtherDialog(std::function<void(ModalScreenButtonId)>);

    MCNAPI void _confirmationDeoppingSelfDialog(std::function<void(ModalScreenButtonId)>);

    MCNAPI void _confirmationNoCheatsDialog(std::function<void(ModalScreenButtonId)>);

    MCNAPI void _decidePermissions();

    MCNAPI void _evaluateCanEdit();

    MCNAPI bool _isLocalPlayerSelected() const;

    MCNAPI bool _isNonXboxLivePlayerSelected() const;

    MCNAPI void _populateClientIds();

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();

    MCNAPI void _registerSubControllers();

    MCNAPI void _setCurrentPermissionLevel(::PlayerPermissionLevel, bool);

    MCNAPI void _syncAbilities();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::ActorUniqueID,
        std::weak_ptr<UserDataScreenController>,
        ::ScreenExitBehavior
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onLeave();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
