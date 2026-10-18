#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"

// auto generated forward declare list
// clang-format off
class ActorEventPacket;
class ActorFallPacket;
class ActorPickRequestPacket;
class AddActorPacket;
class AddBehaviorTreePacket;
class AddItemActorPacket;
class AddMobPacket;
class AddPaintingPacket;
class AddPlayerPacket;
class AddVolumeEntityPacket;
class AgentActionEventPacket;
class AgentAnimationPacket;
class AnimateEntityPacket;
class AnimatePacket;
class AnvilDamagePacket;
class AutomationClientConnectPacket;
class AvailableActorIdentifiersPacket;
class AvailableCommandsPacket;
class AwardAchievementPacket;
class BiomeDefinitionListPacket;
class BlockActorDataPacket;
class BlockEventPacket;
class BlockPickRequestPacket;
class BookAddPagePacket;
class BookDeletePagePacket;
class BookEditPacket;
class BookSignPacket;
class BookSwapPagesPacket;
class BossEventPacket;
class CameraAimAssistActorPriorityPacket;
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class CameraSplinePacket;
class ChangeDimensionPacket;
class ChangeMobPropertyPacket;
class ChunkRadiusUpdatedPacket;
class ClientCacheBlobStatusPacket;
class ClientCacheMissResponsePacket;
class ClientCacheStatusPacket;
class ClientCameraAimAssistPacket;
class ClientMovementPredictionSyncPacket;
class ClientToServerHandshakePacket;
class ClientboundAttributeLayerSyncPacket;
class ClientboundCloseFormPacket;
class ClientboundControlSchemeSetPacket;
class ClientboundDataDrivenUICloseScreenPacket;
class ClientboundDataDrivenUIReloadPacket;
class ClientboundDataDrivenUIShowScreenPacket;
class ClientboundDataStorePacket;
class ClientboundDebugRendererPacket;
class ClientboundMapItemDataPacket;
class ClientboundTextureShiftPacket;
class ClientboundUpdateSoundDataPacket;
class CodeBuilderPacket;
class CodeBuilderSourcePacket;
class CommandBlockUpdatePacket;
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class ContainerClosePacket;
class ContainerOpenPacket;
class ContainerRegistryCleanupPacket;
class ContainerSetDataPacket;
class CorrectPlayerMovePredictionPacket;
class CraftingDataPacket;
class CreatePhotoPacket;
class CreativeContentPacket;
class CurrentStructureFeaturePacket;
class DeathInfoPacket;
class DebugInfoPacket;
class DimensionDataPacket;
class DisconnectPacket;
class EditorNetworkPacket;
class EduUriResourcePacket;
class EducationSettingsPacket;
class EmoteListPacket;
class EmotePacket;
class FeatureRegistryPacket;
class GameRulesChangedPacket;
class GameSpecificNetEventCallback;
class GameTestRequestPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
class HurtArmorPacket;
class IPacketSecurityController;
class InteractPacket;
class InventoryActionPacket;
class InventoryContentPacket;
class InventorySlotPacket;
class InventoryTransactionPacket;
class ItemRegistryPacket;
class ItemStackRequestPacket;
class ItemStackResponsePacket;
class JigsawStructureDataPacket;
class LabTablePacket;
class LecternUpdatePacket;
class LegacyTelemetryEventPacket;
class LessonProgressPacket;
class LevelChunkPacket;
class LevelEventGenericPacket;
class LevelEventPacket;
class LevelSoundEventPacket;
class LocatorBarPacket;
class LoginPacket;
class MapCreateLockedCopyPacket;
class MapInfoRequestPacket;
class MobArmorEquipmentPacket;
class MobEffectPacket;
class MobEquipmentPacket;
class ModalFormRequestPacket;
class ModalFormResponsePacket;
class MotionPredictionHintsPacket;
class MoveActorAbsolutePacket;
class MoveActorDeltaPacket;
class MovePlayerPacket;
class MovementEffectPacket;
class MultiplayerSettingsPacket;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
class NetworkSettingsPacket;
class NetworkStackLatencyPacket;
class NpcDialoguePacket;
class NpcRequestPacket;
class OnScreenTextureAnimationPacket;
class OpenSignPacket;
class Packet;
class PacketViolationWarningPacket;
class PartyChangedPacket;
class PartyDestinationCookieResponsePacket;
class PhotoTransferPacket;
class PlaySoundPacket;
class PlayStatusPacket;
class Player;
class PlayerActionPacket;
class PlayerArmorDamagePacket;
class PlayerAuthInputPacket;
class PlayerEnchantOptionsPacket;
class PlayerFogPacket;
class PlayerHotbarPacket;
class PlayerListPacket;
class PlayerLocationPacket;
class PlayerSkinPacket;
class PlayerStartItemCooldownPacket;
class PlayerToggleCrafterSlotRequestPacket;
class PlayerUpdateEntityOverridesPacket;
class PlayerVideoCapturePacket;
class PositionTrackingDBClientRequestPacket;
class PositionTrackingDBServerBroadcastPacket;
class PrimitiveShapesPacket;
class PurchaseReceiptPacket;
class RefreshEntitlementsPacket;
class RemoveActorPacket;
class RemoveObjectivePacket;
class RemoveVolumeEntityPacket;
class RequestAbilityPacket;
class RequestChunkRadiusPacket;
class RequestNetworkSettingsPacket;
class RequestPermissionsPacket;
class ResourcePackChunkDataPacket;
class ResourcePackChunkRequestPacket;
class ResourcePackClientResponsePacket;
class ResourcePackDataInfoPacket;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class ResourcePacksReadyForValidationPacket;
class RespawnPacket;
class ScriptMessagePacket;
class SendPartyDestinationCookiePacket;
class ServerPlayerPostMovePositionPacket;
class ServerPresenceInfoPacket;
class ServerSettingsRequestPacket;
class ServerSettingsResponsePacket;
class ServerStatsPacket;
class ServerStoreInfoPacket;
class ServerToClientHandshakePacket;
class ServerboundDataDrivenScreenClosedPacket;
class ServerboundDataStorePacket;
class ServerboundDiagnosticsPacket;
class ServerboundLoadingScreenPacket;
class ServerboundPackSettingChangePacket;
class SetActorDataPacket;
class SetActorLinkPacket;
class SetActorMotionPacket;
class SetCommandsEnabledPacket;
class SetDefaultGameTypePacket;
class SetDifficultyPacket;
class SetDisplayObjectivePacket;
class SetHealthPacket;
class SetHudPacket;
class SetLastHurtByPacket;
class SetLocalPlayerAsInitializedPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SetScorePacket;
class SetScoreboardIdentityPacket;
class SetSpawnPositionPacket;
class SetTimePacket;
class SetTitlePacket;
class SettingsCommandPacket;
class ShowCreditsPacket;
class ShowProfilePacket;
class ShowStoreOfferPacket;
class SimpleEventPacket;
class SimulationTypePacket;
class SpawnExperienceOrbPacket;
class SpawnParticleEffectPacket;
class StartGamePacket;
class StopSoundPacket;
class StructureBlockUpdatePacket;
class StructureTemplateDataRequestPacket;
class StructureTemplateDataResponsePacket;
class SubChunkPacket;
class SubChunkRequestPacket;
class SubClientLoginPacket;
class SyncActorPropertyPacket;
class SyncWorldClocksPacket;
class TakeItemActorPacket;
class TextPacket;
class TickingAreasLoadStatusPacket;
class ToastRequestPacket;
class TransferPacket;
class TrimDataPacket;
class UnlockedRecipesPacket;
class UpdateAbilitiesPacket;
class UpdateAdventureSettingsPacket;
class UpdateAttributesPacket;
class UpdateBlockPacket;
class UpdateBlockSyncedPacket;
class UpdateClientInputLocksPacket;
class UpdateClientOptionsPacket;
class UpdateEquipPacket;
class UpdatePlayerGameTypePacket;
class UpdateSoftEnumPacket;
class UpdateSubChunkBlocksPacket;
class UpdateTradePacket;
class VoxelShapesPacket;
struct NetworkIdentifierWithSubId;
namespace Social { class GameConnectionInfo; }
// clang-format on

class NetEventCallback : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NetEventCallback();
#else // @header-generator platform
    virtual void onPlayerReady(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerReady(::Player&);
#else // @header-generator platform
    virtual ~NetEventCallback() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onConnect(::NetworkIdentifier const&);
#else // @header-generator platform
    virtual void onConnect(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, std::string const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&, ::std::string const&);
#else // LL_PLAT_C
    virtual void onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );
#endif
#endif // @header-generator platform

    virtual void onTick();

    virtual void onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);
#else // LL_PLAT_C
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDisconnect(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, ::Connection::DisconnectionStage const, std::string const&, std::string const&, bool, std::string const&);
#else // @header-generator platform
    virtual void onDisconnect(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) = 0;
#else // LL_PLAT_C
    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;
#else // @header-generator platform
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);
#else // @header-generator platform
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handlePacketViolation(std::shared_ptr<IPacketSecurityController> const&, std::error_code const&, ::PacketViolationResponse const, ::MinecraftPacketIds const, std::string&&, ::NetworkIdentifier const&, ::SubClientId const, ::SubClientId const, uint const);
#else // @header-generator platform
    virtual void handlePacketViolation(
        ::std::shared_ptr<::IPacketSecurityController> const& packetSecurityController,
        ::std::error_code const&                              errorCode,
        ::PacketViolationResponse const                       response,
        ::MinecraftPacketIds const                            packetId,
        ::std::string&&                                       context,
        ::NetworkIdentifier const&                            netId,
        ::SubClientId const                                   clientSubId,
        ::SubClientId const                                   senderSubId,
        uint const                                            packetSize
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacketViolationWarningPacket(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&, ::NetworkIdentifier const&, ::SubClientId);
#else // @header-generator platform
    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);
#else // @header-generator platform
    virtual void onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination);
#endif // @header-generator platform

    virtual bool getIsConnectedToApplicationLayer() const;

    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<UpdateAttributesPacket>);

    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);

    virtual void handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);

    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<SubClientLoginPacket>);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PartyDestinationCookieResponsePacket const& packet);
#endif // @header-generator platform

    virtual void handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ClientboundMapItemDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetScorePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetScoreboardIdentityPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerLocationPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerReady(::Player&);
#else // @header-generator platform
    MCFOLD void $onPlayerReady(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onConnect(::NetworkIdentifier const&);
#else // @header-generator platform
    MCFOLD void $onConnect(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onUnableToConnect(::Connection::DisconnectFailReason, std::string const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&, ::std::string const&);
#else // LL_PLAT_C
    MCFOLD void $onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTick();
#else // @header-generator platform
    MCFOLD void $onTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);
#else // @header-generator platform
    MCFOLD void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);
#else // @header-generator platform
    MCFOLD void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);
#else // LL_PLAT_C
    MCFOLD void $onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        std::string const&,
        std::string const&,
        bool,
        std::string const&
#else // @header-generator platform
    MCFOLD void $onDisconnect(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);

    MCNAPI void $handlePacketViolation(
        std::shared_ptr<IPacketSecurityController> const&,
        std::error_code const&,
        ::PacketViolationResponse const,
        ::MinecraftPacketIds const,
        std::string&&,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        ::SubClientId const,
        uint const
#else // @header-generator platform
    MCFOLD void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacketViolationWarningPacket(
        std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        std::string const&,
        ::NetworkIdentifier const&,
        ::SubClientId
#else // @header-generator platform
    MCFOLD void $handlePacketViolation(
        ::std::shared_ptr<::IPacketSecurityController> const& packetSecurityController,
        ::std::error_code const&                              errorCode,
        ::PacketViolationResponse const                       response,
        ::MinecraftPacketIds const                            packetId,
        ::std::string&&                                       context,
        ::NetworkIdentifier const&                            netId,
        ::SubClientId const                                   clientSubId,
        ::SubClientId const                                   senderSubId,
        uint const                                            packetSize
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);
#else // @header-generator platform
    MCFOLD void $sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getIsConnectedToApplicationLayer() const;
#else // @header-generator platform
    MCFOLD void $onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();
#else // @header-generator platform
    MCFOLD bool $getIsConnectedToApplicationLayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);
#else // @header-generator platform
    MCFOLD ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PartyDestinationCookieResponsePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LabTablePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BookEditPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RespawnPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientboundMapItemDataPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::TransferPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetScorePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetScoreboardIdentityPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateAttributesPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::InteractPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<MobEquipmentPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorEventPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::TextPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);
#else // LL_PLAT_C
    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerLocationPacket const& packet);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<SubClientLoginPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::EmotePacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::EmoteListPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::DisconnectPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);
#else // @header-generator platform
    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
