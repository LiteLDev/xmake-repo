#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/ClientNetworkPackDependencies.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/PairHash.h"
#include "mc/deps/core/math/TupleHash.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class ActorEventPacket;
class AddBehaviorTreePacket;
class AddVolumeEntityPacket;
class AgentActionEventPacket;
class AgentAnimationPacket;
class AnimateEntityPacket;
class AutomationClientConnectPacket;
class AvailableActorIdentifiersPacket;
class AvailableCommandsPacket;
class AwardAchievementPacket;
class BiomeDefinitionListPacket;
class BlockPos;
class BlockSource;
class BossEventPacket;
class CachedHostPackIdProvider;
class CameraAimAssistActorPriorityPacket;
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class CameraSplinePacket;
class ChunkRadiusUpdatedPacket;
class ClientLevel;
class ClientNetworkSystem;
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
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class CorrectPlayerMovePredictionPacket;
class CraftingDataPacket;
class CurrentStructureFeaturePacket;
class DeathInfoPacket;
class DebugInfoPacket;
class Dimension;
class EditorNetworkPacket;
class EduUriResourcePacket;
class EducationSettingsPacket;
class EmoteListPacket;
class EmotePacket;
class FeatureRegistryPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
class HashedString;
class IClientInstance;
class IClientInstances;
class IContentManager;
class IGameConnectionListener;
class IGameServerStartup;
class ILevel;
class IMinecraftGame;
class IPacketSecurityController;
class ItemStackResponsePacket;
class JigsawStructureDataPacket;
class LabTablePacket;
class LegacyTelemetryEventPacket;
class LessonProgressPacket;
class LevelEventGenericPacket;
class LevelEventPacket;
class LevelSoundEventPacket;
class LocalPlayer;
class LocatorBarPacket;
class MinecraftCommands;
class ModalFormRequestPacket;
class MultiplayerSettingsPacket;
class NetworkChunkPublisherUpdatePacket;
class NpcDialoguePacket;
class OnScreenTextureAnimationPacket;
class OpenSignPacket;
class PackDownloadManager;
class Packet;
class PacketSender;
class PhotoTransferPacket;
class PlaySoundPacket;
class PlayStatusPacket;
class PlayerActionPacket;
class PlayerArmorDamagePacket;
class PlayerEnchantOptionsPacket;
class PlayerFogPacket;
class PlayerLocationPacket;
class PlayerStartItemCooldownPacket;
class PlayerVideoCapturePacket;
class PositionTrackingDBServerBroadcastPacket;
class PrimitiveShapesPacket;
class PrivateKeyManager;
class Recipe;
class RefreshEntitlementsPacket;
class RemoveObjectivePacket;
class RemoveVolumeEntityPacket;
class ResourcePackChunkDataPacket;
class ResourcePackDataInfoPacket;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class RespawnPacket;
class ScriptMessagePacket;
class SendPartyDestinationCookiePacket;
class ServerPlayerPostMovePositionPacket;
class ServerPresenceInfoPacket;
class ServerSettingsResponsePacket;
class ServerStoreInfoPacket;
class ServerToClientHandshakePacket;
class SetDisplayObjectivePacket;
class SetLastHurtByPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SetScorePacket;
class SetScoreboardIdentityPacket;
class SetTitlePacket;
class ShowCreditsPacket;
class ShowProfilePacket;
class ShowStoreOfferPacket;
class SimpleEventPacket;
class SimulationTypePacket;
class StopSoundPacket;
class StructureTemplateDataResponsePacket;
class SubChunkPacket;
class SyncActorPropertyPacket;
class SyncWorldClocksPacket;
class TakeItemActorPacket;
class TaskGroup;
class TextPacket;
class TextureShiftManager;
class TickingAreasLoadStatusPacket;
class ToastRequestPacket;
class TransferPacket;
class TrimDataPacket;
class UnlockedRecipesClientComponent;
class UnlockedRecipesPacket;
class UpdateAttributesPacket;
class UpdateClientInputLocksPacket;
class UpdateEquipPacket;
class UpdatePlayerGameTypePacket;
class UpdateSoftEnumPacket;
class UpdateSubChunkBlocksPacket;
class UpdateTradePacket;
class VideoCaptureSessionManager;
class VoxelShapesPacket;
struct ClientNetworkHandlerArguments;
struct NetworkIdentifierWithSubId;
struct ToastIconData;
namespace ClientBlobCache { class Cache; }
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class ClientNetworkHandler : public ::NetEventCallback {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/ClientNetworkPackDependencies.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/PairHash.h"
#include "mc/deps/core/math/TupleHash.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"

// auto generated forward declare list
// clang-format off
class ActorEventPacket;
class AddBehaviorTreePacket;
class AddVolumeEntityPacket;
class AgentActionEventPacket;
class AgentAnimationPacket;
class AnimateEntityPacket;
class AutomationClientConnectPacket;
class AvailableActorIdentifiersPacket;
class AvailableCommandsPacket;
class AwardAchievementPacket;
class BiomeDefinitionListPacket;
class BlockPos;
class BlockSource;
class BossEventPacket;
class CachedHostPackIdProvider;
class CameraAimAssistActorPriorityPacket;
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class CameraSplinePacket;
class ChunkPos;
class ChunkRadiusUpdatedPacket;
class ClientNetworkSystem;
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
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class CorrectPlayerMovePredictionPacket;
class CraftingDataPacket;
class CurrentStructureFeaturePacket;
class DeathInfoPacket;
class DebugInfoPacket;
class Dimension;
class EditorNetworkPacket;
class EduUriResourcePacket;
class EducationSettingsPacket;
class EmoteListPacket;
class EmotePacket;
class FeatureRegistryPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
class HashedString;
class IClientInstance;
class IContentManager;
class IGameConnectionListener;
class IGameServerStartup;
class ILevel;
class IPacketSecurityController;
class ItemStackResponsePacket;
class JigsawStructureDataPacket;
class LabTablePacket;
class LegacyTelemetryEventPacket;
class LessonProgressPacket;
class LevelEventGenericPacket;
class LevelEventPacket;
class LevelSoundEventPacket;
class LocatorBarPacket;
class MinecraftCommands;
class ModalFormRequestPacket;
class MultiplayerSettingsPacket;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
class NpcDialoguePacket;
class OnScreenTextureAnimationPacket;
class OpenSignPacket;
class PackDownloadManager;
class Packet;
class PacketSender;
class PhotoTransferPacket;
class PlaySoundPacket;
class PlayStatusPacket;
class PlayerActionPacket;
class PlayerArmorDamagePacket;
class PlayerEnchantOptionsPacket;
class PlayerFogPacket;
class PlayerLocationPacket;
class PlayerStartItemCooldownPacket;
class PlayerVideoCapturePacket;
class PositionTrackingDBServerBroadcastPacket;
class PrimitiveShapesPacket;
class PrivateKeyManager;
class Recipe;
class RefreshEntitlementsPacket;
class RemoveObjectivePacket;
class RemoveVolumeEntityPacket;
class ResourcePackChunkDataPacket;
class ResourcePackDataInfoPacket;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class RespawnPacket;
class ScriptMessagePacket;
class SendPartyDestinationCookiePacket;
class ServerPlayerPostMovePositionPacket;
class ServerPresenceInfoPacket;
class ServerSettingsResponsePacket;
class ServerStoreInfoPacket;
class ServerToClientHandshakePacket;
class SetDisplayObjectivePacket;
class SetLastHurtByPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SetScorePacket;
class SetScoreboardIdentityPacket;
class SetTitlePacket;
class ShowCreditsPacket;
class ShowProfilePacket;
class ShowStoreOfferPacket;
class SimpleEventPacket;
class SimulationTypePacket;
class StopSoundPacket;
class StructureTemplateDataResponsePacket;
class SubChunkPacket;
class SyncActorPropertyPacket;
class SyncWorldClocksPacket;
class TakeItemActorPacket;
class TaskGroup;
class TextPacket;
class TextureShiftManager;
class TickingAreasLoadStatusPacket;
class ToastRequestPacket;
class TransferPacket;
class TrimDataPacket;
class UnlockedRecipesClientComponent;
class UnlockedRecipesPacket;
class UpdateAttributesPacket;
class UpdateClientInputLocksPacket;
class UpdateEquipPacket;
class UpdatePlayerGameTypePacket;
class UpdateSoftEnumPacket;
class UpdateSubChunkBlocksPacket;
class UpdateTradePacket;
class VideoCaptureSessionManager;
class VoxelShapesPacket;
struct NetworkIdentifierWithSubId;
struct ToastIconData;
namespace ClientBlobCache { class Cache; }
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class ClientNetworkHandler : public ::NetEventCallback {
#else // @header-generator platform
class ClientNetworkHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ClientNetworkHandler inner types declare
    // clang-format off
    struct SubscribedHostPacks;
    // clang-format on

    // ClientNetworkHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SubscribedHostPacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<CachedHostPackIdProvider>> mPacks;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mChangeListener;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SubscribedHostPacks();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ChunkKey = std::pair<const Dimension*, ChunkPos>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlobCache::Cache>> mBlobCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<ulong>>> mCacheMisses;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<ulong>>> mCacheHits;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VoxelShapes::VoxelShapeRegistry>> mVoxelShapeRegistry;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<8, 8, ::PacketSender&> mPacketSender;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IGameConnectionListener>> mGameConnectionListener;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&> mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem&> mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager const&> mClientKeys;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&> mMinecraftCommands;
    ::ll::UntypedStorage<8, 24> mLevel;
    ::ll::TypedStorage<1, 1, bool> mHasMessage;
    ::ll::TypedStorage<1, 1, bool> mIsLoggedIn;
    ::ll::TypedStorage<1, 1, bool> mHasHandshaked;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<1, 1, bool> mPacketTelemetryEnabled;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::pair<const Dimension*, ChunkPos>, ulong, mce::Math::PairHash, std::equal_to<std::pair<const Dimension*, ChunkPos>>, std::allocator<std::pair<const std::pair<const Dimension*, ChunkPos>, ulong>>>> mPendingChunks;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::tuple<NetworkIdentifier, const Dimension*, ChunkPos>, std::function<void (BlockSource&)>, mce::Math::TupleHash, std::equal_to<std::tuple<NetworkIdentifier, const Dimension*, ChunkPos>>, std::allocator<std::pair<const std::tuple<NetworkIdentifier, const Dimension*, ChunkPos>, std::function<void (BlockSource&)>>>>> mConnectionPausedCallbacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::UntypedStorage<8, 24> mVideoCaptureSessionManager;
    ::ll::UntypedStorage<8, 32> mTextureShiftManager;
    ::ll::TypedStorage<8, 128, ::ClientNetworkPackDependencies> mPackDependencies;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CachedHostPackIdProvider>> mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mHostPacksReceivedSub;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkHandler& operator=(ClientNetworkHandler const&);
    ClientNetworkHandler(ClientNetworkHandler const&);
    ClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientNetworkHandler();

    virtual void onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, std::string const&);

    virtual void onDisconnect(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, ::Connection::DisconnectionStage const, std::string const&, std::string const&, bool, std::string const&);

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);

    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    virtual void handlePacketViolation(std::shared_ptr<IPacketSecurityController> const&, std::error_code const&, ::PacketViolationResponse const, ::MinecraftPacketIds const, std::string&&, ::NetworkIdentifier const&, ::SubClientId const, ::SubClientId const, uint const);

    virtual void sendPacketViolationWarningPacket(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&, ::NetworkIdentifier const&, ::SubClientId);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<UpdateAttributesPacket>);

    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    virtual void onSuccessfulLogin(::NetworkIdentifier const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientNetworkHandler(::ClientNetworkHandlerArguments&&);

    MCNAPI void _ensureVoxelShapeRegistryExists();

    MCNAPI ::IMinecraftGame& _getMinecraft() const;

    MCNAPI void _handleUnlockedRecipesByTag(
        ::UnlockedRecipesClientComponent const&,
        std::map<HashedString, std::map<std::string, std::shared_ptr<Recipe>>> const&,
        std::string const&,
        ::HashedString const&,
        std::vector<ToastIconData>&
    );

    MCNAPI void _setLevel(::Bedrock::NonOwnerPointer<ILevel> const&);

    MCNAPI void onChunkHandleCompleted(::NetworkIdentifier const&, ::ChunkPos const&, ::Dimension const&);

    MCNAPI void onChunkHandleStarted(::ChunkPos const&, ::Dimension const&);

    MCNAPI void
    queueHandleWorldChangePacket(::NetworkIdentifier const&, ::BlockPos const&, std::function<void(BlockSource&)>&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ClientNetworkHandler::SubscribedHostPacks
    createHostPacks(::PackDownloadManager&, ::IContentManager&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientNetworkHandlerArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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

    MCNAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);

    MCNAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

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

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

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

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<UpdateAttributesPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TextPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EmotePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    MCNAPI void $onSuccessfulLogin(::NetworkIdentifier const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct SubscribedHostPacks {};
#if defined(LL_PLAT_C) // @header-generator platform

    using ChunkKey = ::std::pair<::Dimension const*, ::ChunkPos>;

    using ChunkCallbackKey = ::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlobCache::Cache>>                    mBlobCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MPMCQueue<uint64>>>                         mCacheMisses;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MPMCQueue<uint64>>>                         mCacheHits;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VoxelShapes::VoxelShapeRegistry>>            mVoxelShapeRegistry;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                              mClient;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                                 mPacketSender;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IGameConnectionListener>>                     mGameConnectionListener;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                                           mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem&>                                          mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager const&>                                      mClientKeys;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                            mMinecraftCommands;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                           mLevel;
    ::ll::TypedStorage<1, 1, bool>                                                            mHasMessage;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsLoggedIn;
    ::ll::TypedStorage<1, 1, bool>                                                            mHasHandshaked;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                        mExistenceTracker;
    ::ll::TypedStorage<1, 1, bool>                                                            mPacketTelemetryEnabled;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::pair<::Dimension const*, ::ChunkPos>,
            uint64,
            ::mce::Math::PairHash,
            ::std::equal_to<::std::pair<::Dimension const*, ::ChunkPos>>>>
        mPendingChunks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>,
            ::std::function<void(::BlockSource&)>,
            ::mce::Math::TupleHash,
            ::std::equal_to<::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>>>>
                                                                                        mConnectionPausedCallbacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                            mIOTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::VideoCaptureSessionManager>> mVideoCaptureSessionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TextureShiftManager>>     mTextureShiftManager;
    ::ll::TypedStorage<8, 128, ::ClientNetworkPackDependencies>                         mPackDependencies;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CachedHostPackIdProvider>>            mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mHostPacksReceivedSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkHandler& operator=(ClientNetworkHandler const&);
    ClientNetworkHandler(ClientNetworkHandler const&);
    ClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkHandler() /*override*/ = default;

    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraSplinePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ClientboundMapItemDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::EmotePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetScoreboardIdentityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SetScorePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ClientboundCloseFormPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerLocationPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&) /*override*/;

    virtual void
    handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LocatorBarPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const& packet) /*override*/;

    virtual void onOutgoingPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId,
        ::SubClientId recipientSubId
    ) /*override*/;

    virtual void onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId,
        ::SubClientId recipientSubId
    ) /*override*/;

    virtual void
    onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID) /*override*/;

    virtual void onDisconnect(
        ::NetworkIdentifier const&               source,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    ) /*override*/;

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& id,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

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
    ) /*override*/;

    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    ) /*override*/;

    virtual void onSuccessfulLogin(::NetworkIdentifier const& id);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void queueHandleWorldChangePacket(
        ::NetworkIdentifier const&              source,
        ::BlockPos const&                       requiredPos,
        ::std::function<void(::BlockSource&)>&& handler
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _handleUnlockedRecipesByTag(
        ::UnlockedRecipesClientComponent const&                                                   component,
        ::std::map<::HashedString, ::std::map<::std::string, ::std::shared_ptr<::Recipe>>> const& allRecipes,
        ::std::string const&                                                                      recipeId,
        ::HashedString const&                                                                     tag,
        ::std::vector<::ToastIconData>&                                                           newRecipeToastDataRef
    );

    MCAPI static ::ClientNetworkHandler::SubscribedHostPacks
    createHostPacks(::PackDownloadManager& downloadMaager, ::IContentManager& contentManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraShakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraSplinePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientboundMapItemDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetScoreboardIdentityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetScorePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientboundCloseFormPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerLocationPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const& packet);

    MCAPI void $onOutgoingPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId,
        ::SubClientId recipientSubId
    );

    MCAPI void $onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId,
        ::SubClientId recipientSubId
    );

    MCAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);

    MCAPI void $onDisconnect(
        ::NetworkIdentifier const&               source,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

    MCAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize);

    MCFOLD ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $handlePacketViolation(
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

    MCAPI void $sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );

    MCAPI void $onSuccessfulLogin(::NetworkIdentifier const& id);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
