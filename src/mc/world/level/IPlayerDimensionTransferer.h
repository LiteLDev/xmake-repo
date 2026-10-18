#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IPlayerDimensionTransferConnector.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
class Dimension;
class EntityRegistry;
class GameplayUserManager;
class PacketSender;
class Player;
class PlayerLimboActorManager;
struct AddLimboActorHelper;
struct DimensionType;
// clang-format on

class IPlayerDimensionTransferer : public ::IPlayerDimensionTransferConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IPlayerDimensionTransferer() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerSaveLimboActors(::Player&, ::ChangeDimensionRequest&, ::Dimension&, ::PlayerLimboActorManager*) = 0;
#else // @header-generator platform
    virtual void playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDestroyRemotePlayers(::GameplayUserManager&) = 0;
#else // @header-generator platform
    virtual void playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerStartChangeDimensionSuspendRegion(::Player&, ::DimensionType) = 0;
#else // @header-generator platform
    virtual void playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTransitionLocation(::Player&, ::ChangeDimensionRequest&, ::Dimension&) = 0;
#else // @header-generator platform
    virtual void
    setTransitionLocation(::Player& player, ::ChangeDimensionRequest& changeRequest, ::Dimension& toDimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void syncTransitionComponentTargetPosition(::Player&, ::ChangeDimensionRequest const&) = 0;
#else // @header-generator platform
    virtual void
    syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDestroyRegion(::Player&, ::ChangeDimensionRequest const&) = 0;
#else // @header-generator platform
    virtual void playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerPrepareRegion(::Player&, ::ChangeDimensionRequest const&, ::Dimension const&) = 0;
#else // @header-generator platform
    virtual void playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool playerWaitForServer(::Player&, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>) = 0;
#else // @header-generator platform
    virtual bool playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&) = 0;
#else // @header-generator platform
    virtual bool playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&) = 0;
#else // @header-generator platform
    virtual void
    sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool waitForSubChunks(::Player&, ::Dimension const&) = 0;
#else // @header-generator platform
    virtual bool waitForSubChunks(::Player& player, ::Dimension const& toDimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startWaitForRespawn(::Player const&) = 0;
#else // @header-generator platform
    virtual void startWaitForRespawn(::Player const& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*) = 0;
#else // @header-generator platform
    virtual void playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*) = 0;
#else // @header-generator platform
    virtual bool doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPacketSender(::PacketSender&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void setPacketSender(::PacketSender& packetSender) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
