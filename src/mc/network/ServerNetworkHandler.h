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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/Nonce.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/ServerNetworkHandlerDependencies.h"
#include "mc/network/XboxLiveUserObserver.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/platform/MultiplayerServiceObserver.h"
#include "mc/platform/UUID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/server/DenyList.h"
#include "mc/server/ServerPlayerLoader.h"
#include "mc/server/ServerTextEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class ActorEventPacket;
class ActorPickRequestPacket;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorRuntimeID;
#else // @header-generator platform
#endif // @header-generator platform
class AllowList;
class AnimatePacket;
class AnvilDamagePacket;
class AppConfigs;
class AsyncJoinTaskManager;
#if defined(LL_PLAT_A) // @header-generator platform
class AsyncVerdictPromise;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class SubChunkPacket;
#else // @header-generator platform
#endif // @header-generator platform
class SubChunkRequestPacket;
class SubClientConnectionRequest;
class SubClientLoginPacket;
class TaskGroup;
class TextFilteringProcessor;
class TextPacket;
class UpdateClientOptionsPacket;
class UpdatePlayerGameTypePacket;
#if defined(LL_PLAT_A) // @header-generator platform
class UserEntityIdentifierComponent;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct ActorUniqueID;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
#if defined(LL_PLAT_A) // @header-generator platform
struct ChatEvent;
#else // @header-generator platform
#endif // @header-generator platform
struct IServerNetworkController;
struct MessToken;
struct PackInfoData;
namespace Automation { class AutomationClient; }
namespace Bedrock::Safety { class RedactableString; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Json { class Value; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace Social { class GameConnectionInfo; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Social { struct Nonce; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<ConnectionRequest>>                         mPrimaryRequest;
        ::ll::TypedStorage<8, 296, ::PlayerAuthenticationInfo>                               mPrimaryPlayerInfo;
        ::ll::TypedStorage<8, 24, std::string>                                               mClientInfoPartyId;
        ::ll::TypedStorage<8, 40, std::unordered_map<SubClientId, PlayerAuthenticationInfo>> mSubClientPlayerInfo;
        ::ll::TypedStorage<1, 1, ::ServerNetworkHandler::Client::LoginState>                 mLoginState;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>>                           mPrimaryRequest;
        ::ll::TypedStorage<8, 384, ::PlayerAuthenticationInfo>                                     mPrimaryPlayerInfo;
        ::ll::TypedStorage<8, 32, ::std::string>                                                   mClientInfoPartyId;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubClientId, ::PlayerAuthenticationInfo>> mSubClientPlayerInfo;
        ::ll::TypedStorage<1, 1, ::ServerNetworkHandler::Client::LoginState>                       mLoginState;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Client();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void addSubClientPlayerInfo(::SubClientId, ::PlayerAuthenticationInfo);
#else // @header-generator platform
        MCAPI
        Client(::std::unique_ptr<::ConnectionRequest> primaryRequest, ::PlayerAuthenticationInfo primaryPlayerInfo);

        MCAPI void addSubClientPlayerInfo(::SubClientId subClientId, ::PlayerAuthenticationInfo playerInfo);

        MCAPI void removeSubClientPlayerInfo(::SubClientId subClientId);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::std::unique_ptr<::ConnectionRequest> primaryRequest, ::PlayerAuthenticationInfo primaryPlayerInfo);
#endif // @header-generator platform
        // NOLINTEND
    };

    class TransferBuilderBatcher {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 224, ::ClientBlobCache::Server::TransferBuilder> mTransferBuilder;
#else // @header-generator platform
        ::ll::TypedStorage<8, 248, ::ClientBlobCache::Server::TransferBuilder> mTransferBuilder;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        TransferBuilderBatcher();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::unique_ptr<::ServerNetworkHandler::Client>>>
                                                                                    mClients;
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                      mGameCallbacks;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                 mLevel;
    ::ll::TypedStorage<8, 24, ::ServerPlayerLoader>                                 mPlayerLoader;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                                mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>                                  mServerKeys;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                      mServerLocator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::PacketSender*>>                      mPacketSender;
    ::ll::TypedStorage<8, 8, ::AllowList&>                                          mAllowList;
    ::ll::TypedStorage<8, 8, ::EditorAllowList&>                                    mEditorAllowList;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                    mPermissionsFile;
    ::ll::TypedStorage<8, 104, ::DenyList>                                          mServerDenyList;
    ::ll::TypedStorage<8, 72, ::NetworkServerConfig>                                mNetworkServerConfig;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPackSettingsCache>>         mPackSettingsCache;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasDisplayedPackErrors;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                 mMyId;
    ::ll::TypedStorage<4, 4, int const>                                             mMaxChunkRadius;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                  mMinecraftCommands;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                                      mApp;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBlobCache::Server::ActiveTransfersManager>> mClientCacheManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::NetworkIdentifierWithSubId, ::Json::Value>>
        mServerStorageForClientsConnectingAttempt;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::Nonce>> mPlayerNonces;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClassroomModeNetworkHandler>>      mCompanionHandler;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mValidatePlayerMutex;
    ::ll::TypedStorage<1, 1, bool>                                                  mAllowIncoming;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IServerNetworkController>>         mServerNetworkController;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mServerName;
    ::ll::TypedStorage<4, 4, int>                                                   mMaxNumPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::mce::UUID>>                    mKnownEmotePieceIdLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                           mKnownEmotePieceIds;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint64,
            ::std::unordered_map<::std::string, ::std::shared_ptr<::ResourcePackFileUploadManager>>>>
        mResourceUploadManagers;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>>>>
        mPreviousUpload;
    ::ll::
        TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ResourcePackPathLifetimeHelpers::ResourcePackPathCache>>>
            mResourcePackPathCache;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ServerConnectionAuthValidator>>>
                                                                                         mConnectionAuthValidator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>            mNetworkTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AsyncJoinTaskManager>>> mAsyncJoinTaskManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsTrial;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::PackIdVersion, ::std::string>>      mPackIdToContentKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSpecificNetEventCallback>>          mGameSpecificNetEventCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::unique_ptr<::ServerNetworkHandler::TransferBuilderBatcher>>>
                                                                                   mTransferBuilderBatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestNetworkAdapter>>          mGameTestAdapter;
    ::ll::TypedStorage<8, 40, ::ServiceReference<::AppConfigs>>                    mAppConfigs;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeDefinitionListPacket const>> mBiomeDefinitionListWithoutCSCG;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeDefinitionListPacket const>> mBiomeDefinitionListWithCSCG;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IEDUSystems>>           mEduSystems;
    ::ll::TypedStorage<8, 384, ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo>>
                                                                         mServerConfigurationJoinInfo;
    ::ll::TypedStorage<8, 128, ::Social::Events::ServerTelemetryData>    mServerTelemetryData;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 256, ::ServerNetworkHandlerDependencies const> mDependencies;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkHandler& operator=(ServerNetworkHandler const&);
    ServerNetworkHandler(ServerNetworkHandler const&);
    ServerNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerNetworkHandler();
#else // @header-generator platform
    virtual ~ServerNetworkHandler() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);
#else // @header-generator platform
    virtual void onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              senderSubId,
        ::SubClientId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);
#else // @header-generator platform
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);
#else // @header-generator platform
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);
#else // @header-generator platform
    virtual void onPlayerJoinedLobby(::Social::OnlineId const& player, ::Social::Nonce const& nonce) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerLeftLobby(::Social::OnlineId const&);
#else // @header-generator platform
    virtual void onPlayerLeftLobby(::Social::OnlineId const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onXboxUserBlocked(std::string const&);
#else // @header-generator platform
    virtual void onXboxUserBlocked(::std::string const& xuid) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onXboxUserUnblocked(std::string const&);
#else // @header-generator platform
    virtual void onXboxUserUnblocked(::std::string const& xuid) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerReady(::Player&);
#else // @header-generator platform
    virtual void onPlayerReady(::Player& player) /*override*/;
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
    ) /*override*/;
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);
#else // @header-generator platform
    virtual void sendServerLegacyParticle(::ParticleType name, ::Vec3 const& pos, ::Vec3 const&, int data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);
#else // @header-generator platform
    virtual void
    onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination) /*override*/;
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);
#else // @header-generator platform
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);
#else // @header-generator platform
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<SubClientLoginPacket>);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::EmotePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::InteractPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<MobEquipmentPacket>);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::PartyChangedPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<LoginPacket>);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::PartyDestinationCookieResponsePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<InventoryTransactionPacket>);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);
#else // @header-generator platform
    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendSubClientLoginMessageLocal(::NetworkIdentifier const&, ::SubClientConnectionRequest const&, ::PlayerAuthenticationInfo const&, ::SubClientId);
#else // @header-generator platform
    virtual void sendSubClientLoginMessageLocal(
        ::NetworkIdentifier const&          source,
        ::SubClientConnectionRequest const& connectionRequest,
        ::PlayerAuthenticationInfo const&   playerInfo,
        ::SubClientId                       subid
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTick();
#else // @header-generator platform
    virtual void onTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();
#else // @header-generator platform
    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onConnect(::NetworkIdentifier const&);
#else // @header-generator platform
    virtual void onConnect(::NetworkIdentifier const& id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void completeHandshake(::NetworkIdentifier const&);
#else // @header-generator platform
    virtual void completeHandshake(::NetworkIdentifier const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<PlayerAuthenticationInfo> _validateLoginPacket(::NetworkIdentifier const&, ::LoginPacket const&);
#else // @header-generator platform
    virtual ::std::optional<::PlayerAuthenticationInfo>
    _validateLoginPacket(::NetworkIdentifier const& source, ::LoginPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onClientAsyncAuthorized(::NetworkIdentifier const&, ::ConnectionRequest const&, ::PlayerAuthenticationInfo const&, std::optional<MessToken> const&);
#else // @header-generator platform
    virtual void _onClientAsyncAuthorized(
        ::NetworkIdentifier const&          source,
        ::ConnectionRequest const&          request,
        ::PlayerAuthenticationInfo const&   playerInfo,
        ::std::optional<::MessToken> const& hostMessToken
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ServerPlayer* _getServerPlayer(::NetworkIdentifier const&, ::SubClientId);
    // clang-format on
#else // @header-generator platform
    virtual ::ServerPlayer* _getServerPlayer(::NetworkIdentifier const& source, ::SubClientId subId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ServerNetworkHandler(
        ::GameCallbacks&                                                           gameCallbacks,
        ::Bedrock::NonOwnerPointer<::ILevel> const&                                level,
        ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo> const& serverJoinInfo,
        ::Social::Events::ServerTelemetryData const&                               serveTelemetryData,
        ::ServerNetworkSystem&                                                     network,
        ::PrivateKeyManager&                                                       serverKeys,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>                minecraftServiceKeys,
        ::ServerLocator&                                                           serverLocator,
        ::PacketSender&                                                            packetSender,
        ::AllowList&                                                               allowList,
        ::EditorAllowList&                                                         editorAllowList,
        ::PermissionsFile*                                                         permissionsFile,
        ::KeyManager const&                                                        hostPublicKey,
        int                                                                        maxChunkRadius,
        int                                                                        maxNumPlayers,
        ::MinecraftCommands&                                                       commandHandler,
        ::IMinecraftApp&                                                           app,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&                packIdToContentKey,
        ::Scheduler&                                                               scheduler,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>                       textFilteringProcessor,
        ::optional_ref<::MinecraftGameTest>                                        gameTest,
        ::ServiceReference<::AppConfigs>                                           appConfigs,
        ::NetworkServerConfig                                                      networkServerConfig,
        ::std::shared_ptr<::ScriptPackSettingsCache>                               packSettingsCache,
        ::ServerNetworkHandlerDependencies&&                                       dependencies
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _decideIfSkinIsTrusted(::SerializedSkinRef&);
#else // @header-generator platform
    MCAPI ::std::string _extractFirstConnectionData(::NetworkIdentifierWithSubId const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _extractFirstConnectionData(::NetworkIdentifierWithSubId const&);
#else // @header-generator platform
    MCAPI int _getActiveAndInProgressPlayerCount(::mce::UUID excludePlayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getActiveAndInProgressPlayerCount(::mce::UUID) const;
#else // @header-generator platform
    MCAPI ::std::optional<::MessToken> _getJoinerMessToken(::std::string const& eduTokenChain);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<MessToken> _getJoinerMessToken(std::string const&);
#else // @header-generator platform
    MCAPI ::ResourcePackFileUploadManager&
    _getResourcePackFileUploadManager(::NetworkIdentifier const& source, ::std::string const& resourceName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _handleFinalVerdict(
        ::std::variant<
            ::std::reference_wrapper<::ConnectionRequest const>,
            ::std::reference_wrapper<::SubClientConnectionRequest const>> const& connectionRequest,
        ::PlayerAuthenticationInfo const&                                        playerInfo,
        ::NetworkIdentifier const&                                               source,
        ::SubClientId                                                            subClientId,
        ::std::optional<::MessToken>                                             messToken,
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny>                    finalVerdict
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleSetDefaultGameType(::ServerPlayer const&, ::SetDefaultGameTypePacket const&) const;
#else // @header-generator platform
    MCAPI bool _isPrimaryOrSecondaryPlayerInServer(::mce::UUID const& playerId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleSetDifficulty(::ServerPlayer const&, ::SetDifficultyPacket const&) const;
#else // @header-generator platform
    MCAPI void _onClientAuthenticated(::NetworkIdentifier const& source, ::PlayerAuthenticationInfo const& playerInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleSetPlayerGameType(::ServerPlayer&, ::SetPlayerGameTypePacket const&) const;
#else // @header-generator platform
    MCAPI void _onPlayerLeft(::ServerPlayer* player, bool skipMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isPrimaryOrSecondaryPlayerInServer(::mce::UUID const&) const;

    MCNAPI bool _isServerTextEnabled(::ServerTextEvent const&) const;

    MCNAPI void _onClientAuthenticated(::NetworkIdentifier const&, ::PlayerAuthenticationInfo const&);

    MCNAPI void _onPlayerLeft(::ServerPlayer*, bool);

    MCNAPI void _onSubClientAuthenticated(
        ::NetworkIdentifier const&,
        std::shared_ptr<SubClientLoginPacket>,
        ::PlayerAuthenticationInfo const&
#else // @header-generator platform
    MCAPI void _onSubClientAuthenticated(
        ::NetworkIdentifier const&                source,
        ::std::shared_ptr<::SubClientLoginPacket> packet,
        ::PlayerAuthenticationInfo const&         playerInfo
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _processServerAuthPlayerActions(::ServerPlayer&, ::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCNAPI void _processValidatedLoginPacket(
        ::NetworkIdentifier const&,
        std::shared_ptr<LoginPacket>,
        ::PlayerAuthenticationInfo const&,
        std::optional<MessToken> const&
#else // @header-generator platform
    MCAPI void _processValidatedLoginPacket(
        ::NetworkIdentifier const&          source,
        ::std::shared_ptr<::LoginPacket>    packet,
        ::PlayerAuthenticationInfo const&   playerInfo,
        ::std::optional<::MessToken> const& hostMessToken
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendAdditionalLevelData(::ServerPlayer&, ::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI void _sendAdditionalLevelData(::ServerPlayer& newPlayer, ::NetworkIdentifier const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendLevelData(::ServerPlayer&, ::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI void _sendLevelData(::ServerPlayer& newPlayer, ::NetworkIdentifier const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _updatePermissions(
        ::ServerPlayer const&,
        ::RequestPermissionsPacket const&,
        ::Abilities&,
        ::PermissionsHandler&,
        ::Player*
#else // @header-generator platform
    MCAPI bool _updatePermissions(
        ::ServerPlayer const&             requester,
        ::RequestPermissionsPacket const& packet,
        ::Abilities&                      abilities,
        ::PermissionsHandler&             permissions,
        ::Player*                         player
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addToDenyList(::mce::UUID const&, std::string const&);
#else // @header-generator platform
    MCAPI void addToDenyList(::mce::UUID const& uuid, ::std::string const& xuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addToDenyList(::mce::UUID const&, std::string const&, ::DenyList::Duration const&);
#else // @header-generator platform
    MCAPI void allowIncomingConnections(::std::string const& serverName, bool shouldAnnounce);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> createNewPlayer(
        ::NetworkIdentifier const&        source,
        ::ConnectionRequest const&        connectionRequest,
        ::PlayerAuthenticationInfo const& playerInfo
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> createSimulatedPlayer(
        ::std::string const&             name,
        ::std::string const&             xuid,
        ::std::optional<::ActorUniqueID> idOverride
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeFromDenyList(::mce::UUID const&, std::string const&);
#else // @header-generator platform
    MCAPI void disconnectClient(
        ::NetworkIdentifier const&               id,
        ::SubClientId const                      subId,
        ::Connection::DisconnectFailReason const disconnectReason
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendLoginMessageLocal(::NetworkIdentifier const&, ::ConnectionRequest const&, ::ServerPlayer&);
#else // @header-generator platform
    MCAPI void disconnectClientWithMessage(
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               message,
        ::std::optional<::std::string>     filteredMessage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAllowListActive(bool);
#else // @header-generator platform
    MCAPI void
    disconnectPrimaryClient(::NetworkIdentifier const& id, ::Connection::DisconnectFailReason disconnectReason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setConnectionNonceActive(bool);
#else // @header-generator platform
    MCAPI void
    engineCancelResponseHelper(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEduSystems(::Bedrock::NonOwnerPointer<IEDUSystems>);
#else // @header-generator platform
    MCAPI void engineDownloadingFinishedResponseHelper(
        ::NetworkIdentifier const&                source,
        ::ResourcePackClientResponsePacket const& packet
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setIsTrial(bool);
#else // @header-generator platform
    MCAPI void engineDownloadingResponseHelper(
        ::NetworkIdentifier const&                source,
        ::ResourcePackClientResponsePacket const& packet
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int setMaxNumPlayers(int);
#else // @header-generator platform
    MCAPI ::PlayerAuthenticationInfo fetchPlayerAuthenticationInfo(::NetworkIdentifier const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setNewPlayerPermissions(::ServerPlayer&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getServerName() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryToLoadPlayer(::ServerPlayer&, ::ConnectionRequest const&, ::PlayerAuthenticationInfo const&);
#else // @header-generator platform
    MCAPI void onReady_ClientGeneration(::Player& newPlayer, ::NetworkIdentifier const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateServerAnnouncement();
#else // @header-generator platform
    MCAPI void onStartShutdown();

    MCAPI void removeFromDenyList(::mce::UUID const& uuid, ::std::string const& xuid);

    MCAPI void sendLoginMessageLocal(
        ::NetworkIdentifier const& source,
        ::ConnectionRequest const& connectionRequest,
        ::ServerPlayer&            player
    );

#ifdef LL_PLAT_S
    MCAPI void setAutomationClient(::Bedrock::NonOwnerPointer<::Automation::AutomationClient> client);
#endif

#ifdef LL_PLAT_C
    MCAPI void setEduSystems(::Bedrock::NonOwnerPointer<::IEDUSystems> eduSystems);
#endif

    MCAPI bool tryToLoadPlayer(
        ::ServerPlayer&                   player,
        ::ConnectionRequest const&        connectionRequest,
        ::PlayerAuthenticationInfo const& playerInfo
    );

    MCAPI void updateServerAnnouncement();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _updateCommandBlock(::BlockSource&, ::CommandBlockUpdatePacket const&, ::Bedrock::Safety::RedactableString const*);
#else // @header-generator platform
    MCAPI static void _decideIfSkinIsTrusted(::SerializedSkinRef& skin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void handle(::ServerPlayer*, std::shared_ptr<InventoryTransactionPacket>);
#else // @header-generator platform
    MCAPI static bool _isServerTextEnabled(::ServerTextEvent const& textEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void handle(::Player*, ::PlayerAuthInputPacket const&);
#else // @header-generator platform
    MCAPI static void _populateCDNValues(
        ::std::vector<::PackInfoData>&                            resourcePacksData,
        ::std::vector<::std::pair<::std::string, ::std::string>>& cdnUrls,
        ::std::string const&                                      deviceModel
    );

    MCAPI static void _updateCommandBlock(
        ::BlockSource&                             region,
        ::CommandBlockUpdatePacket const&          packet,
        ::Bedrock::Safety::RedactableString const* redactedName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::GameCallbacks&                                                           gameCallbacks,
        ::Bedrock::NonOwnerPointer<::ILevel> const&                                level,
        ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo> const& serverJoinInfo,
        ::Social::Events::ServerTelemetryData const&                               serveTelemetryData,
        ::ServerNetworkSystem&                                                     network,
        ::PrivateKeyManager&                                                       serverKeys,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>                minecraftServiceKeys,
        ::ServerLocator&                                                           serverLocator,
        ::PacketSender&                                                            packetSender,
        ::AllowList&                                                               allowList,
        ::EditorAllowList&                                                         editorAllowList,
        ::PermissionsFile*                                                         permissionsFile,
        ::KeyManager const&                                                        hostPublicKey,
        int                                                                        maxChunkRadius,
        int                                                                        maxNumPlayers,
        ::MinecraftCommands&                                                       commandHandler,
        ::IMinecraftApp&                                                           app,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&                packIdToContentKey,
        ::Scheduler&                                                               scheduler,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>                       textFilteringProcessor,
        ::optional_ref<::MinecraftGameTest>                                        gameTest,
        ::ServiceReference<::AppConfigs>                                           appConfigs,
        ::NetworkServerConfig                                                      networkServerConfig,
        ::std::shared_ptr<::ScriptPackSettingsCache>                               packSettingsCache,
        ::ServerNetworkHandlerDependencies&&                                       dependencies
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              senderSubId,
#endif // @header-generator platform
        ::SubClientId
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);
#else // @header-generator platform
    MCAPI void $onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);
#else // @header-generator platform
    MCAPI void $onPlayerJoinedLobby(::Social::OnlineId const& player, ::Social::Nonce const& nonce);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&);
#else // @header-generator platform
    MCFOLD void $onPlayerLeftLobby(::Social::OnlineId const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);
#else // @header-generator platform
    MCAPI void $onXboxUserBlocked(::std::string const& xuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);
#else // @header-generator platform
    MCAPI void $onXboxUserUnblocked(::std::string const& xuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);
#else // @header-generator platform
    MCFOLD void $onPlayerReady(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
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
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerPlayer* $_getServerPlayer(::NetworkIdentifier const&, ::SubClientId);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $sendServerLegacyParticle(::ParticleType name, ::Vec3 const& pos, ::Vec3 const&, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination);

    MCAPI void $onDisconnect(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

    MCAPI ::IncomingPacketFilterResult $allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    );

    MCAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PartyDestinationCookieResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet);

    MCAPI void $sendSubClientLoginMessageLocal(
        ::NetworkIdentifier const&          source,
        ::SubClientConnectionRequest const& connectionRequest,
        ::PlayerAuthenticationInfo const&   playerInfo,
        ::SubClientId                       subid
    );

    MCAPI void $onTick();

    MCAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCAPI void $onConnect(::NetworkIdentifier const& id);

    MCAPI void $completeHandshake(::NetworkIdentifier const& source);

    MCAPI ::std::optional<::PlayerAuthenticationInfo>
    $_validateLoginPacket(::NetworkIdentifier const& source, ::LoginPacket const& packet);

    MCAPI void $_onClientAsyncAuthorized(
        ::NetworkIdentifier const&          source,
        ::ConnectionRequest const&          request,
        ::PlayerAuthenticationInfo const&   playerInfo,
        ::std::optional<::MessToken> const& hostMessToken
    );

    MCAPI ::ServerPlayer* $_getServerPlayer(::NetworkIdentifier const& source, ::SubClientId subId);


#endif // @header-generator platform
    // NOLINTEND
};
