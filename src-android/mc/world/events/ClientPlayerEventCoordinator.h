#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/PlayerEventCoordinator.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class EntityContext;
class IClientInstance;
class LocalPlayer;
class Player;
class Vec2;
struct ActorUniqueID;
// clang-format on

class ClientPlayerEventCoordinator : public ::PlayerEventCoordinator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientPlayerEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendCameraSetPlayerRot(::Player&, ::Vec2 const&);

    MCNAPI void sendCloseAllScreensRequestEvent(::LocalPlayer&);

    MCNAPI void sendCloseDataDrivenScreenRequestEvent(::LocalPlayer&, uint);

    MCNAPI void sendLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    MCNAPI void sendLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    MCNAPI void sendLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    MCNAPI void sendLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);

    MCNAPI void
    sendPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);

    MCNAPI void sendPlayerDestroyedBlock(::Player&, ::Block const&);

    MCNAPI void sendPlayerInput(::EntityContext&);

    MCNAPI void sendPlayerStartRiding(::Player&, ::Actor&);

    MCNAPI void sendPlayerStopRiding(::Player&, bool, bool, bool);

    MCNAPI void sendPlayerTurn(::Player&, ::Vec2&);

    MCNAPI void sendShowScreenRequestEvent(::LocalPlayer&, std::string const&, uint, std::optional<uint>);

    MCNAPI void sendStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
