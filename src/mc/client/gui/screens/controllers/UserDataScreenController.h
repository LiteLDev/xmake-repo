#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct ActorUniqueID;
struct PlayerListInfo;
namespace mce { class UUID; }
// clang-format on

class UserDataScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                    mTaskGroup;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mDirty;
    ::ll::TypedStorage<1, 1, bool>                             mCanInvite;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerListInfo>> mPlayerList;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>      mPlayerLobbyList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>    mXuidList;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDataScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserDataScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UserDataScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _updatePlayerList();

    MCAPI ::PlayerListInfo getLocalPlayer() const;

    MCAPI ::PlayerListInfo getPlayerByAUID(::ActorUniqueID auid) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND
};
#else // @header-generator platform
class UserDataScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
