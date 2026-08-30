#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/PlayerListInfo.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class PlayerListEntry;
struct ActorUniqueID;
// clang-format on

class UserDataScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                mTaskGroup;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>            mDirty;
    ::ll::TypedStorage<1, 1, bool>                         mCanInvite;
    ::ll::TypedStorage<8, 24, std::vector<PlayerListInfo>> mPlayerList;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>>      mPlayerLobbyList;
    ::ll::UntypedStorage<8, 32>                            mXuidList;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDataScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserDataScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UserDataScreenController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI void _updatePlayerList();

    MCNAPI ::PlayerListInfo getLocalPlayer() const;

    MCNAPI ::PlayerListInfo getPlayerByAUID(::ActorUniqueID) const;

    MCNAPI std::vector<PlayerListInfo> const& getPlayerList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
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

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
