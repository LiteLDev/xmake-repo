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
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class Command;
class CommandManager;
class CommandOrigin;
#if defined(LL_PLAT_A) // @header-generator platform
class DynamicProperties;
#else // @header-generator platform
#endif // @header-generator platform
class DynamicPropertiesManager;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class Experiments;
class HashedString;
class ISubChunkLighter;
class LevelSettings;
class MapDataManager;
class MobEvents;
#if defined(LL_PLAT_A) // @header-generator platform
class NetworkChunkPublisherUpdatePacket;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkIdentifier;
class Player;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class ServerLevelStatCollectors;
class ServerMapDataManager;
class ServerPlayerSleepManager;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerScriptManager;
#else // @header-generator platform
#endif // @header-generator platform
class ServerSubChunkLighter;
class TagCacheManager;
class TickTimeManager;
class TickTimeManagerServer;
class TradeTables;
class VolumeEntityManagerServer;
class WorldClockRegistryServer;
struct BiomeJsonDocumentGlueResolvedBiomeData;
#if defined(LL_PLAT_A) // @header-generator platform
struct ServerLevelArguments;
#else // @header-generator platform
struct LevelTagIDType;
struct LevelTagSetIDType;
#endif // @header-generator platform
namespace GameModeExt { struct MessengerFactory; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

class ServerLevel : public ::Level {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TradeTables>>                 mTradeTable;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::CommandManager>> mCommandManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MobEvents>>                   mMobEvents;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TagCacheManager>>> mTagCacheManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PositionTrackingDB::PositionTrackingDBServer>>
                                                                             mServerPositionTrackerDB;
    ::ll::TypedStorage<8, 64, ::BossbarManager>                              mBossbarManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VolumeEntityManagerServer>> mVolumeEntityManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DynamicPropertiesManager>>  mDynamicPropertiesManager;
    ::ll::TypedStorage<8, 72, ::DynamicPropertiesDefinition>                 mDynamicPropertiesDefinition;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkGenerationManager>>>
                                                                                    mChunkGenerationManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManagerServer>>> mTickTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerPlayerSleepManager>>>
                                                               mServerPlayerSleepManager;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerWakeUpSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::PlayerDeathManager> mPlayerDeathManager;
    ::ll::TypedStorage<8, 48, ::LevelChunkMetaDataManager> mLevelChunkMetaDataManager;
    ::ll::UntypedStorage<8, 16> mMapDataManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextTelemetrySendTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerSubChunkLighter>> mServerSubChunkLighter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerLevelStatCollectors>> mScriptStatCollectors;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 168, ::PlayerDeathManager>           mPlayerDeathManager;
    ::ll::TypedStorage<8, 48, ::LevelChunkMetaDataManager>     mLevelChunkMetaDataManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerMapDataManager>>> mMapDataManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mNextTelemetrySendTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerSubChunkLighter>>    mServerSubChunkLighter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerLevelStatCollectors>> mScriptStatCollectors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevel& operator=(ServerLevel const&);
    ServerLevel(ServerLevel const&);
    ServerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerLevel();
#else // @header-generator platform
    virtual ~ServerLevel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);
#else // @header-generator platform
    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const;
#else // @header-generator platform
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> getServerPlayerSleepManager() const;
#else // @header-generator platform
    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> getServerPlayerSleepManager();
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCommandsEnabled(bool);
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWorldTemplateOptionsUnlocked();
#else // @header-generator platform
    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager();
#else // @header-generator platform
    virtual void setWorldTemplateOptionsUnlocked() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadFunctionManager();
#else // @header-generator platform
    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePackManager* getClientResourcePackManager() const;
#else // @header-generator platform
    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePackManager* getServerResourcePackManager() const;
#else // @header-generator platform
    virtual ::TradeTables* getTradeTables() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TradeTables* getTradeTables();
#else // @header-generator platform
    virtual void runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);
#else // @header-generator platform
    virtual void
    runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);
#else // @header-generator platform
    virtual void decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<TagCacheManager> getTagCacheManager();
#else // @header-generator platform
    virtual void incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);
#else // @header-generator platform
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);
#else // @header-generator platform
    virtual void loadFunctionManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;
#else // @header-generator platform
    virtual ::Random& getThreadRandom() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<ISubChunkLighter> getSubChunkLighter() const;
#else // @header-generator platform
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Random& getThreadRandom() const;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> getChunkGenerationManager() const;
#else // @header-generator platform
    virtual void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<ChunkGenerationManager> getChunkGenerationManager();
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> getMapDataManager();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerDeathManager* _getPlayerDeathManager();
#else // @header-generator platform
    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapDataManager& _getMapDataManager();
#else // @header-generator platform
    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TickTimeManager& _getTickTimeManager();
#else // @header-generator platform
    virtual void _subTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TickTimeManager const& _getTickTimeManager() const;
#else // @header-generator platform
    virtual ::TickTimeManager const& _getTickTimeManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerSleepManager& getPlayerSleepManager();
#else // @header-generator platform
    virtual ::TickTimeManager& _getTickTimeManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const;
#else // @header-generator platform
    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _subTick();
#else // @header-generator platform
    virtual ::MapDataManager& _getMapDataManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initializeMapDataManager();
    // clang-format on
#else // @header-generator platform
    virtual void _initializeMapDataManager() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onActorEntityAdded(::Actor&);
#else // @header-generator platform
    MCAPI void _onActorEntityAdded(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onPlayerWakeUp(::Player&);
#else // @header-generator platform
    MCAPI void _onPlayerWakeUp(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistryServer> getWorldClockRegistryServer() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $initialize(
        std::string const&,
        ::LevelSettings const&,
        ::Experiments const&,
        std::string const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
#else // @header-generator platform
    MCAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;
#else // @header-generator platform
    MCAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> $getServerPlayerSleepManager() const;
#else // @header-generator platform
    MCAPI ::PlayerSleepManager& $getPlayerSleepManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> $getServerPlayerSleepManager();
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> $getServerPlayerSleepManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCommandsEnabled(bool);
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> $getServerPlayerSleepManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWorldTemplateOptionsUnlocked();
#else // @header-generator platform
    MCAPI void $setCommandsEnabled(bool commandsEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();
#else // @header-generator platform
    MCAPI void $setWorldTemplateOptionsUnlocked();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadFunctionManager();
#else // @header-generator platform
    MCAPI ::ResourcePackManager* $getClientResourcePackManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePackManager* $getClientResourcePackManager() const;
#else // @header-generator platform
    MCAPI ::ResourcePackManager* $getServerResourcePackManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePackManager* $getServerResourcePackManager() const;
#else // @header-generator platform
    MCAPI ::TradeTables* $getTradeTables();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TradeTables* $getTradeTables();
#else // @header-generator platform
    MCAPI void $runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);
#else // @header-generator platform
    MCAPI void $runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);
#else // @header-generator platform
    MCAPI void $decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<TagCacheManager> $getTagCacheManager();
#else // @header-generator platform
    MCAPI void $incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::TagCacheManager> $getTagCacheManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);
#else // @header-generator platform
    MCAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);
#else // @header-generator platform
    MCAPI void $loadFunctionManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Random& $getThreadRandom() const;
#else // LL_PLAT_C
    MCFOLD ::Random& $getThreadRandom() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<ISubChunkLighter> $getSubChunkLighter() const;
#else // @header-generator platform
    MCAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Random& $getThreadRandom() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> $getChunkGenerationManager() const;
#else // @header-generator platform
    MCAPI void $clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<ChunkGenerationManager> $getChunkGenerationManager();
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> $getMapDataManager();
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerDeathManager* $_getPlayerDeathManager();
#else // @header-generator platform
    MCAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MapDataManager& $_getMapDataManager();
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::ISubChunkLighter> $getSubChunkLighter() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TickTimeManager& $_getTickTimeManager();
#else // @header-generator platform
    MCAPI void $_subTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TickTimeManager const& $_getTickTimeManager() const;
#else // @header-generator platform
    MCAPI ::TickTimeManager const& $_getTickTimeManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerSleepManager& $getPlayerSleepManager();
#else // @header-generator platform
    MCAPI ::TickTimeManager& $_getTickTimeManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;
#else // @header-generator platform
    MCAPI ::PlayerDeathManager* $_getPlayerDeathManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_subTick();
#else // @header-generator platform
    MCAPI ::MapDataManager& $_getMapDataManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeMapDataManager();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_initializeMapDataManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
