#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/client/network/ClientNetworkHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/actor/player/SkinMemThresholds.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AddActorPacket;
class AddItemActorPacket;
class AddPaintingPacket;
class AddPlayerPacket;
class AnimatePacket;
class AppPlatform;
class Block;
class BlockActorDataPacket;
class BlockEventPacket;
class BlockPos;
class ChangeDimensionPacket;
class ClientCacheMissResponsePacket;
class ClientLevel;
class ContainerClosePacket;
class ContainerOpenPacket;
class ContainerRegistryCleanupPacket;
class ContainerSetDataPacket;
class CreativeContentPacket;
class DimensionDataPacket;
class DisconnectPacket;
class EntityOverrides;
class GameRulesChangedPacket;
class HurtArmorPacket;
class IBlockSource;
class ILevel;
class IPersonaNetworkHandlerDelegate;
class InventoryContentPacket;
class InventorySlotPacket;
class InventoryTransactionPacket;
class ItemRegistryPacket;
class LevelChunkPacket;
class MobArmorEquipmentPacket;
class MobEffectPacket;
class MobEquipmentPacket;
class MotionPredictionHintsPacket;
class MoveActorAbsolutePacket;
class MoveActorDeltaPacket;
class MovePlayerPacket;
class MovementEffectPacket;
class NetworkChunkInserter;
class NetworkSettingsPacket;
class NetworkStackLatencyPacket;
class Player;
class PlayerHotbarPacket;
class PlayerListPacket;
class PlayerSkinPacket;
class PlayerUpdateEntityOverridesPacket;
class RemoveActorPacket;
class SerializedSkinRef;
class ServerStatsPacket;
class SetActorDataPacket;
class SetActorLinkPacket;
class SetActorMotionPacket;
class SetCommandsEnabledPacket;
class SetDefaultGameTypePacket;
class SetDifficultyPacket;
class SetHealthPacket;
class SetHudPacket;
class SetSpawnPositionPacket;
class SetTimePacket;
class SpawnParticleEffectPacket;
class StartGamePacket;
class UpdateAbilitiesPacket;
class UpdateAdventureSettingsPacket;
class UpdateBlockPacket;
class UpdateBlockSyncedPacket;
struct ActorBlockSyncMessage;
struct ActorLink;
struct ClientCreateLevelArguments;
struct LegacyClientNetworkHandlerArguments;
namespace Parties { class PartySystem; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class LegacyClientNetworkHandler : public ::ClientNetworkHandler, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::DimensionDefinitionGroup> mDimensionDefinitionGroup;
    ::ll::UntypedStorage<8, 24> mClientLevel;
    ::ll::TypedStorage<4, 4, int> mPendingTime;
    ::ll::TypedStorage<8, 24, std::string> mServerIdentifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkChunkInserter>> mChunkInsertQueue;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mServerGuid;
    ::ll::UntypedStorage<4, 4> mPlayerAuthenticationType;
    ::ll::UntypedStorage<8, 24> mGameServerToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPackSettingChangeSubscriber;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextChunkRequestDrainTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistanceTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPersonaNetworkHandlerDelegate>> mPersonaNetworkHandlerDelegate;
    ::ll::TypedStorage<8, 24, ::SkinMemThresholds> mSkinMemThresholds;
    ::ll::TypedStorage<1, 1, bool> mIsConnectedToApplicationLayer;
    ::ll::UntypedStorage<8, 24> mCtx;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EntityOverrides>> mEntityOverrides;
    ::ll::UntypedStorage<8, 64> mCreateLevel;
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::UntypedStorage<8, 24> mPartySystem;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyClientNetworkHandler();

    virtual void onPlayerReady(::Player&);

    virtual void onConnect(::NetworkIdentifier const&);

    virtual void onUnableToConnect(::Connection::DisconnectFailReason, std::string const&, std::string const&);

    virtual void onTick();

    virtual bool getIsConnectedToApplicationLayer() const;

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);

    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<MobEquipmentPacket>);

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);

    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    virtual void onEntityRemoved(::Actor&);

    virtual void onLevelDestruction(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyClientNetworkHandler(::LegacyClientNetworkHandlerArguments&&);

    MCNAPI std::string _getServerIdentifier() const;

    MCNAPI bool _shouldKeepSkinBasedOnMemory(::mce::UUID const&, ::SerializedSkinRef const&) const;

    MCNAPI void onSubClientConnect();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    handleUpdateBlock(::IBlockSource&, ::BlockPos const&, ::Block const&, int, int, ::ActorBlockSyncMessage const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyClientNetworkHandlerArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPlayerReady(::Player&);

    MCNAPI void $onConnect(::NetworkIdentifier const&);

    MCNAPI void $onUnableToConnect(::Connection::DisconnectFailReason, std::string const&, std::string const&);

    MCNAPI void $onTick();

    MCNAPI bool $getIsConnectedToApplicationLayer() const;

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<MobEquipmentPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    MCNAPI void $onEntityRemoved(::Actor&);

    MCNAPI void $onLevelDestruction(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
