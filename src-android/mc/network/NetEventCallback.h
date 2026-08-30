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
    // clang-format off
    virtual ~NetEventCallback();

    virtual void onPlayerReady(::Player&);

    virtual void onConnect(::NetworkIdentifier const&);

    virtual void onUnableToConnect(::Connection::DisconnectFailReason, std::string const&, std::string const&);

    virtual void onTick();

    virtual void onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, std::string const&);

    virtual void onDisconnect(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, ::Connection::DisconnectionStage const, std::string const&, std::string const&, bool, std::string const&);

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong) = 0;

    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;

    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);

    virtual void handlePacketViolation(std::shared_ptr<IPacketSecurityController> const&, std::error_code const&, ::PacketViolationResponse const, ::MinecraftPacketIds const, std::string&&, ::NetworkIdentifier const&, ::SubClientId const, ::SubClientId const, uint const);

    virtual void sendPacketViolationWarningPacket(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&, ::NetworkIdentifier const&, ::SubClientId);

    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

    virtual bool getIsConnectedToApplicationLayer() const;

    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);

    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);
    // clang-format on
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

    MCNAPI void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCNAPI void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCNAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, std::string const&);

    MCNAPI void $onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        std::string const&,
        std::string const&,
        bool,
        std::string const&
    );

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
    );

    MCNAPI void $sendPacketViolationWarningPacket(
        std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        std::string const&,
        ::NetworkIdentifier const&,
        ::SubClientId
    );

    MCNAPI void $onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

    MCNAPI bool $getIsConnectedToApplicationLayer() const;

    MCNAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateAttributesPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InteractPacket const&);

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

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TextPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<SubClientLoginPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EmotePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
