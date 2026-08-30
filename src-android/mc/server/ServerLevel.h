#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/player/PlayerDeathManager.h"
#include "mc/world/level/BossbarManager.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/LevelChunkMetaDataManager.h"
#include "mc/world/persistence/DynamicPropertiesDefinition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChunkGenerationManager;
class ChunkPos;
class Command;
class CommandManager;
class CommandOrigin;
class DynamicProperties;
class DynamicPropertiesManager;
class EntityContext;
class Experiments;
class HashedString;
class ISubChunkLighter;
class LevelSettings;
class MapDataManager;
class MobEvents;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
class Player;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class ServerLevelStatCollectors;
class ServerMapDataManager;
class ServerPlayerSleepManager;
class ServerScriptManager;
class ServerSubChunkLighter;
class TagCacheManager;
class TickTimeManager;
class TickTimeManagerServer;
class TradeTables;
class VolumeEntityManagerServer;
class WorldClockRegistryServer;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct ServerLevelArguments;
namespace GameModeExt { struct MessengerFactory; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

class ServerLevel : public ::Level {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TradeTables>> mTradeTable;
    ::ll::UntypedStorage<8, 16> mCommandManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MobEvents>> mMobEvents;
    ::ll::UntypedStorage<8, 16> mTagCacheManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PositionTrackingDB::PositionTrackingDBServer>> mServerPositionTrackerDB;
    ::ll::TypedStorage<8, 40, ::BossbarManager> mBossbarManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VolumeEntityManagerServer>> mVolumeEntityManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DynamicPropertiesManager>> mDynamicPropertiesManager;
    ::ll::TypedStorage<8, 48, ::DynamicPropertiesDefinition> mDynamicPropertiesDefinition;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnActorEntityAdded;
    ::ll::UntypedStorage<8, 16> mChunkGenerationManager;
    ::ll::UntypedStorage<1, 16> mTickTimeManager;
    ::ll::UntypedStorage<8, 16> mServerPlayerSleepManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerWakeUpSubscription;
    ::ll::TypedStorage<8, 128, ::PlayerDeathManager> mPlayerDeathManager;
    ::ll::TypedStorage<8, 48, ::LevelChunkMetaDataManager> mLevelChunkMetaDataManager;
    ::ll::UntypedStorage<8, 16> mMapDataManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextTelemetrySendTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerSubChunkLighter>> mServerSubChunkLighter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerLevelStatCollectors>> mScriptStatCollectors;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevel& operator=(ServerLevel const&);
    ServerLevel(ServerLevel const&);
    ServerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerLevel();

    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const;

    virtual ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> getServerPlayerSleepManager() const;

    virtual ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> getServerPlayerSleepManager();

    virtual void setCommandsEnabled(bool);

    virtual void setWorldTemplateOptionsUnlocked();

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    virtual void loadFunctionManager();

    virtual ::ResourcePackManager* getClientResourcePackManager() const;

    virtual ::ResourcePackManager* getServerResourcePackManager() const;

    virtual ::TradeTables* getTradeTables();

    virtual void decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    virtual void incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    virtual ::Bedrock::NonOwnerPointer<TagCacheManager> getTagCacheManager();

    virtual ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const;

    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);

    virtual void runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;

    virtual std::weak_ptr<ISubChunkLighter> getSubChunkLighter() const;

    virtual ::Random& getThreadRandom() const;

    virtual ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> getChunkGenerationManager() const;

    virtual ::Bedrock::NonOwnerPointer<ChunkGenerationManager> getChunkGenerationManager();

    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> getMapDataManager();

    virtual ::PlayerDeathManager* _getPlayerDeathManager();

    virtual ::MapDataManager& _getMapDataManager();

    virtual ::TickTimeManager& _getTickTimeManager();

    virtual ::TickTimeManager const& _getTickTimeManager() const;

    virtual ::PlayerSleepManager& getPlayerSleepManager();

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const;

    virtual void _subTick();

    virtual void _initializeMapDataManager();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onActorEntityAdded(::Actor&);

    MCNAPI void _onPlayerWakeUp(::Player&);

    MCNAPI void
    addServerChunksToPacket(::NetworkIdentifier const&, ::SubClientId, ::NetworkChunkPublisherUpdatePacket&);

    MCNAPI void bindDynamicScriptTypes(::ServerScriptManager&);

    MCNAPI ::CommandManager const& getCommandManager() const;

    MCNAPI ::CommandManager& getCommandManager();

    MCNAPI ::DynamicPropertiesDefinition& getDynamicPropertiesDefinition();

    MCNAPI ::DynamicPropertiesManager& getDynamicPropertiesManager() const;

    MCNAPI ::MobEvents const& getMobEvents() const;

    MCNAPI ::MobEvents& getMobEvents();

    MCNAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistryServer>> getWorldClockRegistryServer() const;

    MCNAPI bool hasPendingGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    MCNAPI void queueChunkGenerationRequest(::NetworkIdentifier const&, ::SubClientId, ::ChunkPos const&);

    MCNAPI void setShouldSendSleepMessage(bool);

    MCNAPI bool shouldSendSleepMessage() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $initialize(
        std::string const&,
        ::LevelSettings const&,
        ::Experiments const&,
        std::string const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
    );

    MCNAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> $getServerPlayerSleepManager() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> $getServerPlayerSleepManager();

    MCNAPI void $setCommandsEnabled(bool);

    MCNAPI void $setWorldTemplateOptionsUnlocked();

    MCNAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();

    MCNAPI void $loadFunctionManager();

    MCNAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCNAPI ::ResourcePackManager* $getServerResourcePackManager() const;

    MCNAPI ::TradeTables* $getTradeTables();

    MCNAPI void
    $decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    MCNAPI void
    $incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    MCNAPI ::Bedrock::NonOwnerPointer<TagCacheManager> $getTagCacheManager();

    MCNAPI ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;

    MCNAPI void $runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);

    MCNAPI void $runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);

    MCNAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCNAPI std::weak_ptr<ISubChunkLighter> $getSubChunkLighter() const;

    MCNAPI ::Random& $getThreadRandom() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> $getChunkGenerationManager() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ChunkGenerationManager> $getChunkGenerationManager();

    MCNAPI void $clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> $getMapDataManager();

    MCNAPI ::PlayerDeathManager* $_getPlayerDeathManager();

    MCNAPI ::MapDataManager& $_getMapDataManager();

    MCNAPI ::TickTimeManager& $_getTickTimeManager();

    MCNAPI ::TickTimeManager const& $_getTickTimeManager() const;

    MCNAPI ::PlayerSleepManager& $getPlayerSleepManager();

    MCNAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCNAPI void $_subTick();

    MCNAPI void $_initializeMapDataManager();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
