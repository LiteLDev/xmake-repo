#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationInfo.h"
#include "mc/client/network/blob_cache/client_blob_cache/TransferBuilder.h"
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/NetworkServerConfig.h"
#include "mc/network/Nonce.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/ServerNetworkHandlerDependencies.h"
#include "mc/network/XboxLiveUserObserver.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/platform/MultiplayerServiceObserver.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/DenyList.h"
#include "mc/server/ServerPlayerLoader.h"
#include "mc/server/ServerTextEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class ActorEventPacket;
class ActorPickRequestPacket;
class ActorRuntimeID;
class AllowList;
class AnimatePacket;
class AnvilDamagePacket;
class AppConfigs;
class AsyncJoinTaskManager;
class AsyncVerdictPromise;
class BiomeDefinitionListPacket;
class BlockActorDataPacket;
class BlockPickRequestPacket;
class BlockSource;
class BookEditPacket;
class BossEventPacket;
class ChangeMobPropertyPacket;
class ClassroomModeNetworkHandler;
class ClientCacheBlobStatusPacket;
class ClientCacheStatusPacket;
class ClientCameraAimAssistPacket;
class ClientMovementPredictionSyncPacket;
class ClientToServerHandshakePacket;
class CodeBuilderSourcePacket;
class CommandBlockUpdatePacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class ConnectionRequest;
class ContainerClosePacket;
class CreatePhotoPacket;
class DebugInfoPacket;
class DisconnectPacket;
class EditorAllowList;
class EditorNetworkPacket;
class EmoteListPacket;
class EmotePacket;
class EntityContext;
class GameCallbacks;
class GameSpecificNetEventCallback;
class GameTestNetworkAdapter;
class GameTestRequestPacket;
class IEDUSystems;
class ILevel;
class IMinecraftApp;
class IPacketSecurityController;
class InteractPacket;
class InventoryTransactionPacket;
class ItemStackRequestPacket;
class KeyManager;
class LabTablePacket;
class LecternUpdatePacket;
class LevelSoundEventPacket;
class LoginPacket;
class MapCreateLockedCopyPacket;
class MapInfoRequestPacket;
class MinecraftCommands;
class MinecraftGameTest;
class MinecraftServiceKeyManager;
class MobEquipmentPacket;
class ModalFormResponsePacket;
class MultiplayerSettingsPacket;
class NetworkStackLatencyPacket;
class NpcRequestPacket;
class Packet;
class PacketSender;
class PartyChangedPacket;
class PartyDestinationCookieResponsePacket;
class PermissionsFile;
class PermissionsHandler;
class PhotoTransferPacket;
class Player;
class PlayerActionPacket;
class PlayerAuthInputPacket;
class PlayerHotbarPacket;
class PlayerSkinPacket;
class PlayerToggleCrafterSlotRequestPacket;
class PositionTrackingDBClientRequestPacket;
class PrivateKeyManager;
class PurchaseReceiptPacket;
class RequestAbilityPacket;
class RequestChunkRadiusPacket;
class RequestNetworkSettingsPacket;
class RequestPermissionsPacket;
class ResourcePackChunkRequestPacket;
class ResourcePackClientResponsePacket;
class ResourcePackFileUploadManager;
class ResourcePacksReadyForValidationPacket;
class RespawnPacket;
class Scheduler;
class ScriptMessagePacket;
class ScriptPackSettingsCache;
class SerializedSkinRef;
class ServerConnectionAuthValidator;
class ServerLocator;
class ServerNetworkSystem;
class ServerPlayer;
class ServerboundDataDrivenScreenClosedPacket;
class ServerboundDataStorePacket;
class ServerboundDiagnosticsPacket;
class ServerboundLoadingScreenPacket;
class ServerboundPackSettingChangePacket;
class SetDefaultGameTypePacket;
class SetDifficultyPacket;
class SetLocalPlayerAsInitializedPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SettingsCommandPacket;
class ShowCreditsPacket;
class SimpleEventPacket;
class SpawnExperienceOrbPacket;
class StructureBlockUpdatePacket;
class StructureTemplateDataRequestPacket;
class SubChunkPacket;
class SubChunkRequestPacket;
class SubClientConnectionRequest;
class SubClientLoginPacket;
class TaskGroup;
class TextFilteringProcessor;
class TextPacket;
class UpdateClientOptionsPacket;
class UpdatePlayerGameTypePacket;
class UserEntityIdentifierComponent;
class Vec3;
struct ActorUniqueID;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct ChatEvent;
struct IServerNetworkController;
struct MessToken;
struct PackInfoData;
namespace Automation { class AutomationClient; }
namespace Bedrock::Safety { class RedactableString; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Json { class Value; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct OnlineId; }
// clang-format on

class ServerNetworkHandler : public ::Bedrock::Threading::EnableQueueForMainThread,
                             public ::NetEventCallback,
                             public ::LevelListener,
                             public ::Social::MultiplayerServiceObserver,
                             public ::Social::XboxLiveUserObserver {
public:
    // ServerNetworkHandler inner types declare
    // clang-format off
    class Client;
    class TransferBuilderBatcher;
    // clang-format on

    // ServerNetworkHandler inner types define
    class Client {
    public:
        // Client inner types define
        enum class LoginState : uchar {
            AwaitingHandshake   = 0,
            AwaitingPlayerSpawn = 1,
            PlayerSpawned       = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<ConnectionRequest>>                         mPrimaryRequest;
        ::ll::TypedStorage<8, 296, ::PlayerAuthenticationInfo>                               mPrimaryPlayerInfo;
        ::ll::TypedStorage<8, 24, std::string>                                               mClientInfoPartyId;
        ::ll::TypedStorage<8, 40, std::unordered_map<SubClientId, PlayerAuthenticationInfo>> mSubClientPlayerInfo;
        ::ll::TypedStorage<1, 1, ::ServerNetworkHandler::Client::LoginState>                 mLoginState;
        // NOLINTEND

    public:
        // prevent constructor by default
        Client();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void addSubClientPlayerInfo(::SubClientId, ::PlayerAuthenticationInfo);
        // NOLINTEND
    };

    class TransferBuilderBatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 224, ::ClientBlobCache::Server::TransferBuilder> mTransferBuilder;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransferBuilderBatcher();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::unique_ptr<ServerNetworkHandler::Client>>> mClients;
    ::ll::TypedStorage<8, 8, ::GameCallbacks&> mGameCallbacks;
    ::ll::UntypedStorage<8, 24> mLevel;
    ::ll::TypedStorage<8, 24, ::ServerPlayerLoader> mPlayerLoader;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&> mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager&> mServerKeys;
    ::ll::TypedStorage<8, 8, ::ServerLocator&> mServerLocator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<PacketSender*>> mPacketSender;
    ::ll::TypedStorage<8, 8, ::AllowList&> mAllowList;
    ::ll::TypedStorage<8, 8, ::EditorAllowList&> mEditorAllowList;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*> mPermissionsFile;
    ::ll::TypedStorage<8, 64, ::DenyList> mServerDenyList;
    ::ll::TypedStorage<8, 64, ::NetworkServerConfig> mNetworkServerConfig;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptPackSettingsCache>> mPackSettingsCache;
    ::ll::TypedStorage<1, 1, bool> mHasDisplayedPackErrors;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mMyId;
    ::ll::TypedStorage<4, 4, int const> mMaxChunkRadius;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&> mMinecraftCommands;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&> mApp;
    ::ll::UntypedStorage<8, 24> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientBlobCache::Server::ActiveTransfersManager>> mClientCacheManager;
    ::ll::UntypedStorage<8, 40> mServerStorageForClientsConnectingAttempt;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Nonce>> mPlayerNonces;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClassroomModeNetworkHandler>> mCompanionHandler;
    ::ll::TypedStorage<4, 40, std::mutex> mValidatePlayerMutex;
    ::ll::TypedStorage<1, 1, bool> mAllowIncoming;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IServerNetworkController>> mServerNetworkController;
    ::ll::TypedStorage<8, 24, std::string> mServerName;
    ::ll::TypedStorage<4, 4, int> mMaxNumPlayers;
    ::ll::TypedStorage<8, 40, std::unordered_set<mce::UUID>> mKnownEmotePieceIdLookup;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>> mKnownEmotePieceIds;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unordered_map<std::string, std::shared_ptr<ResourcePackFileUploadManager>>>> mResourceUploadManagers;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Threading::SharedAsync<void>>>> mPreviousUpload;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ResourcePackPathLifetimeHelpers::ResourcePackPathCache>>> mResourcePackPathCache;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ServerConnectionAuthValidator>>> mConnectionAuthValidator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mNetworkTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<AsyncJoinTaskManager>>> mAsyncJoinTaskManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool> mIsTrial;
    ::ll::TypedStorage<8, 40, std::unordered_map<PackIdVersion, std::string>> mPackIdToContentKey;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameSpecificNetEventCallback>> mGameSpecificNetEventCallback;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::unique_ptr<ServerNetworkHandler::TransferBuilderBatcher>>> mTransferBuilderBatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameTestNetworkAdapter>> mGameTestAdapter;
    ::ll::UntypedStorage<8, 40> mAppConfigs;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const BiomeDefinitionListPacket>> mBiomeDefinitionListWithoutCSCG;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const BiomeDefinitionListPacket>> mBiomeDefinitionListWithCSCG;
    ::ll::UntypedStorage<8, 24> mEduSystems;
    ::ll::TypedStorage<8, 320, std::optional<ServerConfiguration::ServerConfigurationJoinInfo>> mServerConfigurationJoinInfo;
    ::ll::TypedStorage<8, 96, ::Social::Events::ServerTelemetryData> mServerTelemetryData;
    ::ll::TypedStorage<8, 256, ::ServerNetworkHandlerDependencies const> mDependencies;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkHandler& operator=(ServerNetworkHandler const&);
    ServerNetworkHandler(ServerNetworkHandler const&);
    ServerNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerNetworkHandler();

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);

    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);

    virtual void onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);

    virtual void onPlayerLeftLobby(::Social::OnlineId const&);

    virtual void onXboxUserBlocked(std::string const&);

    virtual void onXboxUserUnblocked(std::string const&);

    virtual void onPlayerReady(::Player&);

    virtual void handlePacketViolation(std::shared_ptr<IPacketSecurityController> const&, std::error_code const&, ::PacketViolationResponse const, ::MinecraftPacketIds const, std::string&&, ::NetworkIdentifier const&, ::SubClientId const, ::SubClientId const, uint const);

    virtual void sendPacketViolationWarningPacket(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&, ::NetworkIdentifier const&, ::SubClientId);

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

    virtual void onDisconnect(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, ::Connection::DisconnectionStage const, std::string const&, std::string const&, bool, std::string const&);

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);

    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<SubClientLoginPacket>);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<MobEquipmentPacket>);

    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);

    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);

    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    virtual void sendSubClientLoginMessageLocal(::NetworkIdentifier const&, ::SubClientConnectionRequest const&, ::PlayerAuthenticationInfo const&, ::SubClientId);

    virtual void onTick();

    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    virtual void onConnect(::NetworkIdentifier const&);

    virtual void completeHandshake(::NetworkIdentifier const&);

    virtual std::optional<PlayerAuthenticationInfo> _validateLoginPacket(::NetworkIdentifier const&, ::LoginPacket const&);

    virtual void _onClientAsyncAuthorized(::NetworkIdentifier const&, ::ConnectionRequest const&, ::PlayerAuthenticationInfo const&, std::optional<MessToken> const&);

    virtual ::ServerPlayer* _getServerPlayer(::NetworkIdentifier const&, ::SubClientId);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetworkHandler(
        ::GameCallbacks&,
        ::Bedrock::NonOwnerPointer<ILevel> const&,
        std::optional<ServerConfiguration::ServerConfigurationJoinInfo> const&,
        ::Social::Events::ServerTelemetryData const&,
        ::ServerNetworkSystem&,
        ::PrivateKeyManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftServiceKeyManager>>,
        ::ServerLocator&,
        ::PacketSender&,
        ::AllowList&,
        ::EditorAllowList&,
        ::PermissionsFile*,
        ::KeyManager const&,
        int,
        int,
        ::MinecraftCommands&,
        ::IMinecraftApp&,
        std::unordered_map<PackIdVersion, std::string> const&,
        ::Scheduler&,
        ::Bedrock::NonOwnerPointer<TextFilteringProcessor>,
        ::optional_ref<MinecraftGameTest>,
        ::ServiceReference<AppConfigs>,
        ::NetworkServerConfig,
        std::shared_ptr<ScriptPackSettingsCache>,
        ::ServerNetworkHandlerDependencies&&
    );

    MCNAPI void _decideIfSkinIsTrusted(::SerializedSkinRef&);

    MCNAPI std::string _extractFirstConnectionData(::NetworkIdentifierWithSubId const&);

    MCNAPI int _getActiveAndInProgressPlayerCount(::mce::UUID) const;

    MCNAPI std::optional<MessToken> _getJoinerMessToken(std::string const&);

    MCNAPI ::ResourcePackFileUploadManager&
    _getResourcePackFileUploadManager(::NetworkIdentifier const&, std::string const&);

    MCNAPI void _handleFinalVerdict(
        std::variant<
            std::reference_wrapper<const ConnectionRequest>,
            std::reference_wrapper<const SubClientConnectionRequest>> const&,
        ::PlayerAuthenticationInfo const&,
        ::NetworkIdentifier const&,
        ::SubClientId,
        std::optional<MessToken>,
        ::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny>
    );

    MCNAPI void _handleSetDefaultGameType(::ServerPlayer const&, ::SetDefaultGameTypePacket const&) const;

    MCNAPI void _handleSetDifficulty(::ServerPlayer const&, ::SetDifficultyPacket const&) const;

    MCNAPI void _handleSetPlayerGameType(::ServerPlayer&, ::SetPlayerGameTypePacket const&) const;

    MCNAPI bool _isPrimaryOrSecondaryPlayerInServer(::mce::UUID const&) const;

    MCNAPI bool _isServerTextEnabled(::ServerTextEvent const&) const;

    MCNAPI void _onClientAuthenticated(::NetworkIdentifier const&, ::PlayerAuthenticationInfo const&);

    MCNAPI void _onPlayerLeft(::ServerPlayer*, bool);

    MCNAPI void _onSubClientAuthenticated(
        ::NetworkIdentifier const&,
        std::shared_ptr<SubClientLoginPacket>,
        ::PlayerAuthenticationInfo const&
    );

    MCNAPI void
    _processServerAuthPlayerActions(::ServerPlayer&, ::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCNAPI void _processValidatedLoginPacket(
        ::NetworkIdentifier const&,
        std::shared_ptr<LoginPacket>,
        ::PlayerAuthenticationInfo const&,
        std::optional<MessToken> const&
    );

    MCNAPI void _sendAdditionalLevelData(::ServerPlayer&, ::NetworkIdentifier const&);

    MCNAPI void _sendLevelData(::ServerPlayer&, ::NetworkIdentifier const&);

    MCNAPI bool _updatePermissions(
        ::ServerPlayer const&,
        ::RequestPermissionsPacket const&,
        ::Abilities&,
        ::PermissionsHandler&,
        ::Player*
    );

    MCNAPI void addToDenyList(::mce::UUID const&, std::string const&);

    MCNAPI void addToDenyList(::mce::UUID const&, std::string const&, ::DenyList::Duration const&);

    MCNAPI void allowIncomingConnections(std::string const&, bool);

    MCNAPI ::OwnerPtr<EntityContext>
    createNewPlayer(::NetworkIdentifier const&, ::ConnectionRequest const&, ::PlayerAuthenticationInfo const&);

    MCNAPI ::OwnerPtr<EntityContext>
    createSimulatedPlayer(std::string const&, std::string const&, std::optional<ActorUniqueID>);

    MCNAPI void disallowIncomingConnections();

    MCNAPI void
    disconnectClient(::NetworkIdentifier const&, ::SubClientId const, ::Connection::DisconnectFailReason const);

    MCNAPI void disconnectClientWithMessage(
        ::NetworkIdentifier const&,
        ::SubClientId const,
        ::Connection::DisconnectFailReason const,
        std::string const&,
        std::optional<std::string>
    );

    MCNAPI void disconnectPrimaryClient(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const);

    MCNAPI bool doesClientHaveSubClients(::NetworkIdentifier const&) const;

    MCNAPI void engineCancelResponseHelper(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCNAPI void
    engineDownloadingFinishedResponseHelper(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCNAPI void engineDownloadingResponseHelper(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCNAPI ::ConnectionRequest const& fetchConnectionRequest(::NetworkIdentifier const&);

    MCNAPI ::PlayerAuthenticationInfo fetchPlayerAuthenticationInfo(::NetworkIdentifier const&);

    MCNAPI ::CommandPermissionLevel getCommandsOpPermissionLevel();

    MCNAPI std::string getGlobalMultiplayerCorrelationId() const;

    MCNAPI std::string getServerName() const;

    MCNAPI bool isDedicatedServer();

    MCNAPI void onReady_ClientGeneration(::Player&, ::NetworkIdentifier const&);

    MCNAPI void onStartShutdown();

    MCNAPI void persistPlayerPermissionsToDisk(::Player&, ::PlayerPermissionLevel);

    MCNAPI std::unique_ptr<ulong, std::function<void(ulong*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            const NetworkIdentifier&,
            const PlayerAuthenticationInfo&,
            SubClientId,
            std::shared_ptr<AsyncVerdictPromise>
        )>
    );

    MCNAPI void removeFromDenyList(::mce::UUID const&, std::string const&);

    MCNAPI void sendLoginMessageLocal(::NetworkIdentifier const&, ::ConnectionRequest const&, ::ServerPlayer&);

    MCNAPI void setAllowListActive(bool);

    MCNAPI void setConnectionNonceActive(bool);

    MCNAPI void setEduSystems(::Bedrock::NonOwnerPointer<IEDUSystems>);

    MCNAPI void setIsTrial(bool);

    MCNAPI int setMaxNumPlayers(int);

    MCNAPI void setNewPlayerPermissions(::ServerPlayer&);

    MCNAPI bool tryToLoadPlayer(::ServerPlayer&, ::ConnectionRequest const&, ::PlayerAuthenticationInfo const&);

    MCNAPI void updateServerAnnouncement();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _updateCommandBlock(::BlockSource&, ::CommandBlockUpdatePacket const&, ::Bedrock::Safety::RedactableString const*);

    MCNAPI static void handle(::ServerPlayer*, std::shared_ptr<InventoryTransactionPacket>);

    MCNAPI static void handle(::Player*, ::PlayerAuthInputPacket const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::GameCallbacks&,
        ::Bedrock::NonOwnerPointer<ILevel> const&,
        std::optional<ServerConfiguration::ServerConfigurationJoinInfo> const&,
        ::Social::Events::ServerTelemetryData const&,
        ::ServerNetworkSystem&,
        ::PrivateKeyManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftServiceKeyManager>>,
        ::ServerLocator&,
        ::PacketSender&,
        ::AllowList&,
        ::EditorAllowList&,
        ::PermissionsFile*,
        ::KeyManager const&,
        int,
        int,
        ::MinecraftCommands&,
        ::IMinecraftApp&,
        std::unordered_map<PackIdVersion, std::string> const&,
        ::Scheduler&,
        ::Bedrock::NonOwnerPointer<TextFilteringProcessor>,
        ::optional_ref<MinecraftGameTest>,
        ::ServiceReference<AppConfigs>,
        ::NetworkServerConfig,
        std::shared_ptr<ScriptPackSettingsCache>,
        ::ServerNetworkHandlerDependencies&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCNAPI void $onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);

    MCNAPI void $onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);

    MCNAPI void $onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);

    MCNAPI void $onPlayerLeftLobby(::Social::OnlineId const&);

    MCNAPI void $onXboxUserBlocked(std::string const&);

    MCNAPI void $onXboxUserUnblocked(std::string const&);

    MCNAPI void $onPlayerReady(::Player&);

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

    MCNAPI void $sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCNAPI void $onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

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

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TextPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<SubClientLoginPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<MobEquipmentPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InteractPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EmotePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    MCNAPI void $sendSubClientLoginMessageLocal(
        ::NetworkIdentifier const&,
        ::SubClientConnectionRequest const&,
        ::PlayerAuthenticationInfo const&,
        ::SubClientId
    );

    MCNAPI void $onTick();

    MCNAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCNAPI void $onConnect(::NetworkIdentifier const&);

    MCNAPI void $completeHandshake(::NetworkIdentifier const&);

    MCNAPI std::optional<PlayerAuthenticationInfo>
           $_validateLoginPacket(::NetworkIdentifier const&, ::LoginPacket const&);

    MCNAPI void $_onClientAsyncAuthorized(
        ::NetworkIdentifier const&,
        ::ConnectionRequest const&,
        ::PlayerAuthenticationInfo const&,
        std::optional<MessToken> const&
    );

    MCNAPI ::ServerPlayer* $_getServerPlayer(::NetworkIdentifier const&, ::SubClientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
