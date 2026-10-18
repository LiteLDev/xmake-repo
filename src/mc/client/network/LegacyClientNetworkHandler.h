#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup>                             mDimensionDefinitionGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                   mClientLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mPendingTime;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mServerIdentifier;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetworkChunkInserter>>               mChunkInsertQueue;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                   mServerGuid;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>                              mPlayerAuthenticationType;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>                                   mGameServerToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mPackSettingChangeSubscriber;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mNextChunkRequestDrainTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                mExistanceTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPersonaNetworkHandlerDelegate>>     mPersonaNetworkHandlerDelegate;
    ::ll::TypedStorage<8, 24, ::SkinMemThresholds>                                    mSkinMemThresholds;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsConnectedToApplicationLayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCtx;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EntityOverrides>>                    mEntityOverrides;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::unique_ptr<::ClientLevel>(::ClientCreateLevelArguments&&) const>>
                                                                                  mCreateLevel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>       mAppPlatform;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>> mPartySystem;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyClientNetworkHandler() /*override*/ = default;

    virtual void onPlayerReady(::Player& player) /*override*/;

    virtual void onConnect(::NetworkIdentifier const& hostId) /*override*/;

    virtual void onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    ) /*override*/;

    virtual bool getIsConnectedToApplicationLayer() const /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packetPtr) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet) /*override*/;

    virtual void onTick() /*override*/;

    virtual void onEntityRemoved(::Actor& entity) /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyClientNetworkHandler(::LegacyClientNetworkHandlerArguments&& args);

    MCAPI ::std::string _getServerIdentifier() const;

    MCAPI bool _shouldKeepSkinBasedOnMemory(::mce::UUID const& playerId, ::SerializedSkinRef const& skin) const;

    MCAPI void onSubClientConnect();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void handleUpdateBlock(
        ::IBlockSource&                region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            layer,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyClientNetworkHandlerArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPlayerReady(::Player& player);

    MCAPI void $onConnect(::NetworkIdentifier const& hostId);

    MCAPI void $onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );

    MCAPI bool $getIsConnectedToApplicationLayer() const;

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::MobEffectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packetPtr);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);

    MCAPI void $onTick();

    MCAPI void $onEntityRemoved(::Actor& entity);

    MCAPI void $onLevelDestruction(::std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
class LegacyClientNetworkHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
