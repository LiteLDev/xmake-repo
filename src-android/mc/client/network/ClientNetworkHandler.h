#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // ClientNetworkHandler inner types declare
    // clang-format off
    struct SubscribedHostPacks;
    // clang-format on

    // ClientNetworkHandler inner types define
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
};
