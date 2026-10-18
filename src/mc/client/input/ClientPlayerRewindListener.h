#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/enums/RewindType.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CorrectPlayerMovePredictionPacket;
class EntityContext;
class MovePlayerPacket;
class Player;
class ReplayStateComponent;
class UpdateAttributesPacket;
class UpdatePlayerGameTypePacket;
class Vec2;
struct IMovementCorrection;
// clang-format on

class ClientPlayerRewindListener : public ::PlayerEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientPlayerRewindListener();

    virtual ::EventResult onCameraSetPlayerRot(::Player&, ::Vec2 const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientPlayerRewindListener();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EventResult
    _applyCorrectionToTick(ulong, std::unique_ptr<IMovementCorrection>, ::Actor&, ::ReplayStateComponent&);

    MCNAPI static ::Actor* _getRewindableActor(::Player&, ::RewindType);

    MCNAPI static ::EventResult
    _onCorrectPlayerMovePredictionPacket(::Player&, ::CorrectPlayerMovePredictionPacket const&);

    MCNAPI static ::EventResult _onPlayerMovePacketReceived(::Player&, ::MovePlayerPacket const&);

    MCNAPI static ::EventResult _onUpdateAttributesPacketReceived(::Actor&, std::shared_ptr<UpdateAttributesPacket>);

    MCNAPI static ::EventResult _onUpdatePlayerGameTypePacketReceived(::Actor&, ::UpdatePlayerGameTypePacket const&);

    MCNAPI static ::ReplayStateComponent* tryGetReplayStateComponentForCorrection(::EntityContext&, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);
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
#include "mc/entity/enums/RewindType.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CorrectPlayerMovePredictionPacket;
class EntityContext;
class MovePlayerPacket;
class Player;
class ReplayStateComponent;
class UpdateAttributesPacket;
class UpdatePlayerGameTypePacket;
class Vec2;
struct IMovementCorrection;
// clang-format on

class ClientPlayerRewindListener : public ::PlayerEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::EventResult _applyCorrectionToTick(
        uint64                                   tick,
        ::std::unique_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actorToRewind,
        ::ReplayStateComponent&                  replay
    );

    MCAPI static ::Actor* _getRewindableActor(::Player& player, ::RewindType rewindType);

    MCAPI static ::EventResult
    _onCorrectPlayerMovePredictionPacket(::Player& player, ::CorrectPlayerMovePredictionPacket const& packet);

    MCAPI static ::EventResult _onPlayerMovePacketReceived(::Player& player, ::MovePlayerPacket const& packet);

    MCAPI static ::EventResult
    _onUpdateAttributesPacketReceived(::Actor& actor, ::std::shared_ptr<::UpdateAttributesPacket> packet);

    MCAPI static ::EventResult
    _onUpdatePlayerGameTypePacketReceived(::Actor& actor, ::UpdatePlayerGameTypePacket const& packet);

    MCAPI static ::ReplayStateComponent* tryGetReplayStateComponentForCorrection(::EntityContext& entity, uint64 tick);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientPlayerRewindListener {};
#endif // @header-generator platform
#endif // @header-generator platform
