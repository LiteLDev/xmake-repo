#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/chunk/ChunkKey.h"
#include "mc/world/level/chunk/LevelChunkGarbageCollector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/ActorChunkTransferEntry.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/ActorReplication.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/ActorUnloadedChunkTransferEntry.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/dimension/DimensionIdType.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/dimension/DirectionalLightSource.h"
#include "mc/world/level/dimension/IDimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/levelgen/ChunkGenSessionContext.h"
#include "mc/world/level/levelgen/v1/FeatureTerrainAdjustments.h"
#include "mc/world/level/levelgen/v2/providers/IntProvider.h"
#include "mc/world/level/saveddata/SavedData.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BiomeRegistry;
class Block;
class BlockEventDispatcher;
class BlockPos;
class BlockSource;
class ChunkBuildOrderPolicyBase;
class ChunkLoadActionList;
class ChunkSource;
class CircuitSystem;
#if defined(LL_PLAT_A) // @header-generator platform
class ClientDimensionExtensions;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DelayActionList;
class DimensionBrightnessRamp;
class EntityContext;
class GameEventDispatcher;
#if defined(LL_PLAT_A) // @header-generator platform
class IClientDimensionExtensions;
#else // @header-generator platform
#endif // @header-generator platform
class ILevel;
class ILevelStorageManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class IStructureWireframeQueue;
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkMetaData;
class Packet;
class Player;
class PostprocessingManager;
class RuntimeLightingManager;
class Seasons;
class SubChunkInterlocker;
class TaskGroup;
class TickingAreaList;
class Vec3;
class VillageManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
class Weather;
class WorldGenerator;
struct ActorBlockSyncMessage;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorChunkTransferEntry;
struct ActorUnloadedChunkTransferEntry;
#endif // @header-generator platform
struct BiomeIdType;
struct DimensionArguments;
#if defined(LL_PLAT_A) // @header-generator platform
struct UpdateSubChunkNetworkBlockInfo;
#else // @header-generator platform
struct NetworkIdentifierWithSubId;
struct UpdateSubChunkBlocksChangedInfo;
#endif // @header-generator platform
namespace Poi { class Manager; }
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IClientDimensionExtensions;
#endif // @header-generator platform
// clang-format on

class Dimension : public ::IDimension,
#if defined(LL_PLAT_A) // @header-generator platform
                  public ::EnableGetWeakRef<Dimension>,
#else // @header-generator platform
#endif // @header-generator platform
                  public ::LevelListener,
                  public ::SavedData,
                  public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                  public ::std::enable_shared_from_this<Dimension> {
#else // @header-generator platform
                  public ::EnableGetWeakRef<::Dimension>,
                  public ::std::enable_shared_from_this<::Dimension> {
#endif // @header-generator platform
public:
    // Dimension inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct DirectionalLightState;
#else // @header-generator platform
#endif // @header-generator platform
    struct ChaoticDirectionalLightControls;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct DirectionalLightState;
#endif // @header-generator platform
    // clang-format on

    // Dimension inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ChaoticDirectionalLightControls {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMinFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMaxFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMinFlashCooldown;
        ::ll::TypedStorage<4, 4, float> mMaxFlashCooldown;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct DirectionalLightState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                    mAngle;
        ::ll::TypedStorage<4, 4, float>                    mPerpendicularAngle;
        ::ll::TypedStorage<4, 4, float>                    mIntensityMultiplier;
        ::ll::TypedStorage<4, 4, ::DirectionalLightSource> mLightSource;
        ::ll::TypedStorage<1, 1, bool>                     mDisableLightSource;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct ChaoticDirectionalLightControls {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMinFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMaxFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMinFlashCooldown;
        ::ll::TypedStorage<4, 4, float> mMaxFlashCooldown;
        // NOLINTEND
    };
#else // @header-generator platform
    using ActorTagList = ::std::vector<::std::unique_ptr<::CompoundTag>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ChunkPosToActorListMap = std::unordered_map<ChunkPos, std::vector<std::unique_ptr<CompoundTag>>>;
#else // @header-generator platform
    using ChunkPosToActorListMap = ::std::unordered_map<::ChunkPos, ::std::vector<::std::unique_ptr<::CompoundTag>>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using DirectionalLightControls = std::variant<Dimension::ChaoticDirectionalLightControls>;

    using ActorTagList = std::vector<std::unique_ptr<CompoundTag>>;
#else // @header-generator platform
    using DirectionalLightControls = ::std::variant<::Dimension::ChaoticDirectionalLightControls>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ActorChunkTransferEntry>> mActorChunkTransferQueue;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkKey, std::vector<ActorUnloadedChunkTransferEntry>>> mActorUnloadedChunkTransferQueue;
    ::ll::TypedStorage<8, 8, ::ILevel&> mLevel;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange> mHeightRange;
    ::ll::TypedStorage<2, 2, short> mSeaLevel;
    ::ll::TypedStorage<1, 1, uchar> mMonsterSpawnBlockLightLimit;
    ::ll::TypedStorage<8, 32, ::IntProvider> mMonsterSpawnLightTest;
    ::ll::UntypedStorage<1, 16> mBlockSource;
    ::ll::TypedStorage<1, 1, bool> mHasWeather;
    ::ll::TypedStorage<4, 28, float[7]> mMobsPerChunkSurface;
    ::ll::TypedStorage<4, 28, float[7]> mMobsPerChunkUnderground;
    ::ll::TypedStorage<1, 2, ::BrightnessPair> mDefaultBrightness;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DimensionBrightnessRamp>> mDimensionBrightnessRamp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunkMetaData>> mTargetMetaData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RuntimeLightingManager>> mRuntimeLightingManager;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mTypeId;
    ::ll::TypedStorage<4, 4, ::DimensionType> mId;
    ::ll::UntypedStorage<2, 2> mRegistryId;
    ::ll::TypedStorage<1, 1, bool> mUltraWarm;
    ::ll::TypedStorage<1, 1, bool> mHasCeiling;
    ::ll::TypedStorage<1, 1, bool> mHasSkylight;
    ::ll::TypedStorage<1, 1, ::Brightness> mSkyDarken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockEventDispatcher>> mDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mChunkGenTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PostprocessingManager>> mPostProcessingManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkInterlocker>> mSubChunkInterlocker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkSource>> mChunkSource;
    ::ll::TypedStorage<8, 8, ::WorldGenerator*> mWorldGenerator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Weather>> mWeather;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Seasons>> mSeasons;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameEventDispatcher>> mGameEventDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CircuitSystem>> mCircuitSystem;
    ::ll::TypedStorage<4, 4, int const> CIRCUIT_TICK_RATE;
    ::ll::TypedStorage<4, 4, int> mCircuitSystemTickRate;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, WeakEntityRef>> mActorIDEntityIDMap;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>> mDisplayEntities;
    ::ll::TypedStorage<8, 184, ::FeatureTerrainAdjustments> mFeatureTerrainAdjustments;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::vector<std::unique_ptr<CompoundTag>>>> mLimboEntities;
    ::ll::TypedStorage<8, 24, std::set<ActorUniqueID>> mEntitiesToMoveChunks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TickingAreaList>> mTickingAreaList;
    ::ll::TypedStorage<8, 632, ::LevelChunkGarbageCollector> mLevelChunkGarbageCollector;
    ::ll::TypedStorage<8, 24, std::set<ActorUniqueID>> mWitherIDs;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelChunkBuilderData>> mLevelChunkBuilderData;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPruneTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastStructurePruneTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBuildOrderPolicyBase>> mChunkBuildOrderPolicy;
    ::ll::TypedStorage<8, 40, ::ChunkGenSessionContext> mChunkGenSessionContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VillageManager>> mVillageManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Poi::Manager>> mPoiManager;
    ::ll::TypedStorage<8, 24, std::vector<NetworkIdentifierWithSubId>> mTemporaryPlayerIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkLoadActionList>> mChunkLoadActionList;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DelayActionList>> mDelayActionList;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubChunkPos, UpdateSubChunkBlocksChangedInfo>> mBlocksChangedBySubChunkMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IClientDimensionExtensions>> mClientExtensions;
    ::ll::TypedStorage<8, 88, ::ActorReplication> mActorReplication;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>> mPlayersToReplicate;
    ::ll::TypedStorage<1, 1, bool> mRunChunkGenWatchDog;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorChunkTransferEntry>> mActorChunkTransferQueue;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkKey, ::std::vector<::ActorUnloadedChunkTransferEntry>>>
                                                                                      mActorUnloadedChunkTransferQueue;
    ::ll::TypedStorage<8, 8, ::ILevel&>                                               mLevel;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange>                                  mHeightRange;
    ::ll::TypedStorage<2, 2, short>                                                   mSeaLevel;
    ::ll::TypedStorage<1, 1, uchar>                                                   mMonsterSpawnBlockLightLimit;
    ::ll::TypedStorage<8, 32, ::IntProvider>                                          mMonsterSpawnLightTest;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                              mBlockSource;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasWeather;
    ::ll::TypedStorage<4, 28, float[7]>                                               mMobsPerChunkSurface;
    ::ll::TypedStorage<4, 28, float[7]>                                               mMobsPerChunkUnderground;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                        mDefaultBrightness;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DimensionBrightnessRamp>>            mDimensionBrightnessRamp;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>                mTargetMetaData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RuntimeLightingManager>>             mRuntimeLightingManager;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mTypeId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                         mId;
    ::ll::TypedStorage<2, 2, ::DimensionIdType const>                                 mRegistryId;
    ::ll::TypedStorage<1, 1, bool>                                                    mUltraWarm;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasCeiling;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasSkylight;
    ::ll::TypedStorage<1, 1, ::Brightness>                                            mSkyDarken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockEventDispatcher>>               mDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mChunkGenTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PostprocessingManager>>              mPostProcessingManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkInterlocker>>                mSubChunkInterlocker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                        mChunkSource;
    ::ll::TypedStorage<8, 8, ::WorldGenerator*>                                       mWorldGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Weather>>                            mWeather;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Seasons>>                            mSeasons;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameEventDispatcher>>                mGameEventDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CircuitSystem>>                      mCircuitSystem;
    ::ll::TypedStorage<4, 4, int const>                                               CIRCUIT_TICK_RATE;
    ::ll::TypedStorage<4, 4, int>                                                     mCircuitSystemTickRate;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::WeakEntityRef>> mActorIDEntityIDMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                         mDisplayEntities;
    ::ll::TypedStorage<8, 72, ::FeatureTerrainAdjustments>                            mFeatureTerrainAdjustments;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::vector<::std::unique_ptr<::CompoundTag>>>>
                                                                             mLimboEntities;
    ::ll::TypedStorage<8, 16, ::std::set<::ActorUniqueID>>                   mEntitiesToMoveChunks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TickingAreaList>>          mTickingAreaList;
    ::ll::TypedStorage<8, 632, ::LevelChunkGarbageCollector>                 mLevelChunkGarbageCollector;
    ::ll::TypedStorage<8, 16, ::std::set<::ActorUniqueID>>                   mWitherIDs;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelChunkBuilderData>>     mLevelChunkBuilderData;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mLastPruneTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mLastStructurePruneTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBuildOrderPolicyBase>> mChunkBuildOrderPolicy;
    ::ll::TypedStorage<8, 40, ::ChunkGenSessionContext>                      mChunkGenSessionContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VillageManager>>            mVillageManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Poi::Manager>>              mPoiManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>>   mTemporaryPlayerIds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkLoadActionList>>       mChunkLoadActionList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DelayActionList>>           mDelayActionList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::UpdateSubChunkBlocksChangedInfo>>
                                                                              mBlocksChangedBySubChunkMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IClientDimensionExtensions>> mClientExtensions;
    ::ll::TypedStorage<8, 112, ::ActorReplication>                            mActorReplication;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                 mPlayersToReplicate;
    ::ll::TypedStorage<1, 1, bool>                                            mRunChunkGenWatchDog;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Dimension& operator=(Dimension const&);
    Dimension(Dimension const&);
#endif // @header-generator platform
    Dimension();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Dimension();
#else // @header-generator platform
    virtual ~Dimension() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isNaturalDimension() const;

    virtual ::DimensionType getDimensionId() const;

    virtual void sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*);

    virtual void sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*);

    virtual void flushLevelChunkGarbageCollector();

    virtual void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    virtual ::BiomeRegistry const& getBiomeRegistry() const;

    virtual ::BiomeRegistry& getBiomeRegistry();

    virtual void forEachPlayer(::brstd::function_ref<bool (Player&)>) const;

    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const;

    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const;

    virtual void buildPlayersForPositionPacket(::BlockPos const&, ::Player const*, std::vector<NetworkIdentifierWithSubId>&) const;

    virtual void updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;

    virtual void init(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);
#endif // @header-generator platform

    virtual void tick();

    virtual void tickRedstone();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const = 0;
#else // @header-generator platform
    virtual void initializeWithLevelStorageManagerConnector(
        ::ILevelStorageManagerConnector& levelStorageManagerConnector
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidSpawn(int, int) const;
#else // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const&, float) const;
#else // @header-generator platform
    virtual bool isNaturalDimension() const /*override*/;

    virtual bool isValidSpawn(int x, int z) const;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;
#endif // @header-generator platform

    virtual short getCloudHeight() const;

    virtual ::BiomeIdType getDefaultBiomeId() const;

    virtual bool mayRespawnViaBed() const;

    virtual ::BlockPos getSpawnPos() const;

    virtual int getSpawnYPosition() const;

    virtual bool showSky() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDimensionDirectionalLightControls(std::variant<Dimension::ChaoticDirectionalLightControls> const&);
#else // @header-generator platform
    virtual float getTimeOfDay(int time, float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float) const;
#else // @header-generator platform
    virtual void setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserialize(::CompoundTag const&);
#else // @header-generator platform
    virtual ::DimensionType getDimensionId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::CompoundTag&) const;
#else // @header-generator platform
    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBroadcast(::Packet const&, ::Player*);
#else // @header-generator platform
    virtual ::BiomeRegistry& getBiomeRegistry() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool is2DPositionRelevantForPlayer(::BlockPos const&, ::Player&) const;
#else // @header-generator platform
    virtual ::BiomeRegistry const& getBiomeRegistry() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isActorRelevantForPlayer(::Player&, ::Actor const&) const;
#else // @header-generator platform
    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockEvent(::BlockSource&, int, int, int, int, int);
#else // @header-generator platform
    virtual ::Actor* fetchEntity(::ActorUniqueID actorID, bool getRemoved) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);
#else // @header-generator platform
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelDestruction(std::string const&);
#else // @header-generator platform
    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    virtual void serialize(::CompoundTag& tag) const /*override*/;

    virtual void sendBroadcast(::Packet const& packet, ::Player* except);

    virtual bool is2DPositionRelevantForPlayer(::BlockPos const& position, ::Player& player) const;

    virtual void buildPlayersForPositionPacket(
        ::BlockPos const&                            position,
        ::Player const*                              except,
        ::std::vector<::NetworkIdentifierWithSubId>& result
    ) const /*override*/;

    virtual void
    sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except) /*override*/;

    virtual void sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except) /*override*/;

    virtual bool isActorRelevantForPlayer(::Player& player, ::Actor const& actor) const;

    virtual void onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1) /*override*/;

    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;
#endif // @header-generator platform

    virtual ::DimensionBrightnessRamp const& getBrightnessRamp() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> const getStructuresFromChunkRegistry(::Vec3 const&) const;
#else // @header-generator platform
    virtual ::std::vector<::std::string> const getStructuresFromChunkRegistry(::Vec3 const& location) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> const getStructureFromStructureRegistry(::Vec3 const&) const;
#else // @header-generator platform
    virtual ::std::optional<::std::string> const getStructureFromStructureRegistry(::Vec3 const& location) const;
#endif // @header-generator platform

    virtual void startLeaveGame();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getTimeOfDay(int, float) const;
#else // @header-generator platform
    virtual void flushLevelChunkGarbageCollector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
#else // @header-generator platform
    virtual void updatePoiBlockStateChange(::BlockPos pos, ::Block const& removed, ::Block const& placed) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) = 0;

    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Dimension(::DimensionArguments&&);
#else // @header-generator platform
    MCAPI explicit Dimension(::DimensionArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addActorUnloadedChunkTransferToQueue(
        ::ChunkPos const&,
        ::ChunkPos const&,
        ::DimensionType,
        std::string&,
        std::unique_ptr<CompoundTag>
#else // @header-generator platform
    MCAPI void _addActorUnloadedChunkTransferToQueue(
        ::ChunkPos const&                fromChunkPos,
        ::ChunkPos const&                toChunkPos,
        ::DimensionType                  dimId,
        ::std::string&                   actorStorageKey,
        ::std::unique_ptr<::CompoundTag> entityTag
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _completeEntityTransfer(::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI void _completeEntityTransfer(::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource _createFixupBlockSource(::ChunkSource&);
#else // @header-generator platform
    MCAPI void _tickEntityChunkMoves();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tickEntityChunkMoves();
#else // @header-generator platform
    MCAPI void addWither(::ActorUniqueID const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPlayerToReplication(::WeakEntityRef const&);
#else // @header-generator platform
    MCAPI ::Player* fetchNearestInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addWither(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI void flagEntityforChunkMove(::Actor& e);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearPlayerReplicationList();
#else // @header-generator platform
    MCAPI void flushRunTimeLighting();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float distanceToNearestPlayerSqr2D(::Vec3);
#else // @header-generator platform
    MCAPI ::ChunkSource& getChunkSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI float getSkyDarken(float a) const;

    MCAPI float getSunAngle(float a) const;

    MCAPI float getTimeOfDay(float a) const;

    MCAPI void registerDisplayEntity(::WeakRef<::EntityContext> entityRef);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* fetchNearestAttackablePlayer(::Actor&, float) const;
#else // @header-generator platform
    MCAPI void removeActorByID(::ActorUniqueID const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* fetchNearestAttackablePlayer(::BlockPos, float, ::Actor*) const;
#else // @header-generator platform
    MCAPI void
    transferEntity(::ChunkPos const& fromChunkPos, ::Vec3 const& spawnPos, ::std::unique_ptr<::CompoundTag> entityTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* fetchNearestInteractablePlayer(::Actor&, float) const;
#else // @header-generator platform
    MCAPI void tryLoadLimboEntities(::ChunkPos const& loadPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* fetchNearestInteractablePlayer(::Vec3 const&, float) const;

    MCNAPI ::Player* fetchNearestPlayer(::Vec3 const&, float, bool, ::brstd::function_ref<bool(const Player&)>) const;

    MCNAPI ::Player* findPlayer(::brstd::function_ref<bool(const Player&)>) const;

    MCNAPI void flagEntityforChunkMove(::Actor&);

    MCNAPI void flushRunTimeLighting();

    MCNAPI ::BlockEventDispatcher& getBlockEventDispatcher();

    MCNAPI ::ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();

    MCNAPI ::gsl::not_null<ChunkLoadActionList*> getChunkLoadActionList();

    MCNAPI ::ChunkSource& getChunkSource() const;

    MCNAPI ::CircuitSystem& getCircuitSystem();

    MCNAPI ::gsl::not_null<DelayActionList*> getDelayActionList();

    MCNAPI std::vector<WeakEntityRef>& getDisplayEntities();

    MCNAPI std::unordered_map<ActorUniqueID, WeakEntityRef>& getEntityIdMap();

    MCNAPI std::unordered_map<ActorUniqueID, WeakEntityRef> const& getEntityIdMapConst() const;

    MCNAPI ::FeatureTerrainAdjustments& getFeatureTerrainAdjustments();

    MCNAPI ::GameEventDispatcher* getGameEventDispatcher() const;

    MCNAPI short getHeight() const;

    MCNAPI ushort getHeightInSubchunks() const;

    MCNAPI ::DimensionHeightRange const& getHeightRange() const;

    MCNAPI ::Level& getLevel() const;

    MCNAPI ::Level const& getLevelConst() const;

    MCNAPI std::string getLocalizationKey() const;

    MCNAPI short getMinHeight() const;

    MCNAPI uchar getMonsterSpawnBlockLightLimit() const;

    MCNAPI ::IntProvider getMonsterSpawnLightTest() const;

    MCNAPI float getMoonBrightness() const;

    MCNAPI int getMoonPhase() const;

    MCNAPI float getPopCap(int, bool) const;

    MCNAPI ::Seasons& getSeasons();

    MCNAPI float getSkyDarken(float) const;

    MCNAPI ::Brightness getSkyDarken() const;

    MCNAPI float getSunAngle(float) const;

    MCNAPI std::shared_ptr<const LevelChunkMetaData> getTargetMetaData();

    MCNAPI ::TickingAreaList& getTickingAreas();

    MCNAPI ::TickingAreaList const& getTickingAreasConst() const;

    MCNAPI float getTimeOfDay(float) const;

    MCNAPI std::string const& getTypeId() const;

    MCNAPI std::unique_ptr<VillageManager> const& getVillageManager() const;

    MCNAPI ::WeakRef<Dimension> getWeakRef();

    MCNAPI ::Weather& getWeather() const;

    MCNAPI ::WorldGenerator* getWorldGenerator() const;

    MCNAPI bool hasAddedWither() const;

    MCNAPI bool hasCeiling() const;

    MCNAPI bool hasSkylight() const;

    MCNAPI bool isBrightOutside() const;

    MCNAPI bool isChunkKnown(::ChunkPos const&) const;

    MCNAPI bool const isClientSideGenerationEnabled() const;

    MCNAPI bool isHeightWithinRange(short const&) const;

    MCNAPI bool isLeaveGameDone();

    MCNAPI bool isMoonVisible() const;

    MCNAPI bool isRedstoneTick();

    MCNAPI bool isSubChunkHeightWithinRange(short const&) const;

    MCNAPI bool isUltraWarm() const;

    MCNAPI void neighborAwareChunkUpgrade(::ChunkSource&, ::LevelChunk&);

    MCNAPI void onStaticTickingAreaAdded(std::string const&);

    MCNAPI void pauseAndFlushTaskGroups();

    MCNAPI void processPlayerReplication();

    MCNAPI void registerDisplayEntity(::WeakRef<EntityContext>);

    MCNAPI void registerEntity(::ActorUniqueID const&, ::WeakRef<EntityContext>);

    MCNAPI void removeActorByID(::ActorUniqueID const&);

    MCNAPI void removeWither(::ActorUniqueID const&);

    MCNAPI void sendPacketToClients(::Packet const&, std::vector<NetworkIdentifierWithSubId>);

    MCNAPI void setCeiling(bool);

    MCNAPI void setRunChunkGenWatchDog(bool);

    MCNAPI void setSkylight(bool);

    MCNAPI void setUltraWarm(bool);

    MCNAPI void setWorldGenerator(::WorldGenerator*);

    MCNAPI void transferEntity(::ChunkPos const&, ::Vec3 const&, std::unique_ptr<CompoundTag>);

    MCNAPI void tryLoadLimboEntities(::ChunkPos const&);

    MCNAPI void unregisterDisplayEntity(::WeakRef<EntityContext>);

    MCNAPI void unregisterEntity(::ActorUniqueID const&);

    MCNAPI void updateBlockLight(::BlockPos const&, ::Brightness, ::Brightness, ::Brightness, ::Brightness, bool);

    MCNAPI void visitExtensions(::brstd::function_ref<void(ClientDimensionExtensions&)>);

    MCNAPI void visitStructureWireframe(::brstd::function_ref<void(IStructureWireframeQueue&)>);
#else // @header-generator platform
    MCAPI void unregisterDisplayEntity(::WeakRef<::EntityContext> entityRef);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::LimboEntitiesVersion const& CurrentLimboEntitiesVersion();

    MCNAPI static uint const& LOW_CPU_PACKET_BLOCK_LIMIT();

    MCNAPI static ::std::add_lvalue_reference_t<float const[8]> MOON_BRIGHTNESS_PER_PHASE();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& STRUCTURE_PRUNE_INTERVAL();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<float const[]> MOON_BRIGHTNESS_PER_PHASE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DimensionArguments&&);
#else // @header-generator platform
    MCAPI void* $ctor(::DimensionArguments&& args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNaturalDimension() const;
#else // @header-generator platform
    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionType $getDimensionId() const;
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*);
#else // @header-generator platform
    MCAPI void $tickRedstone();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*);
#else // @header-generator platform
    MCAPI void
    $initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushLevelChunkGarbageCollector();
#else // @header-generator platform
    MCFOLD bool $isNaturalDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);
#else // @header-generator platform
    MCFOLD bool $isValidSpawn(int x, int z) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeRegistry const& $getBiomeRegistry() const;
#else // @header-generator platform
    MCAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeRegistry& $getBiomeRegistry();
#else // @header-generator platform
    MCAPI short $getCloudHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachPlayer(::brstd::function_ref<bool(Player&)>) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::BiomeIdType $getDefaultBiomeId() const;
#else // LL_PLAT_C
    MCFOLD ::BiomeIdType $getDefaultBiomeId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $fetchEntity(::ActorUniqueID, bool) const;
#else // @header-generator platform
    MCFOLD bool $mayRespawnViaBed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource& $getBlockSourceFromMainChunkSource() const;
#else // @header-generator platform
    MCFOLD ::BlockPos $getSpawnPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $buildPlayersForPositionPacket(::BlockPos const&, ::Player const*, std::vector<NetworkIdentifierWithSubId>&) const;
#else // @header-generator platform
    MCFOLD int $getSpawnYPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $showSky() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    MCAPI float $getTimeOfDay(int time, float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();

    MCNAPI void $tickRedstone();

    MCNAPI bool $isValidSpawn(int, int) const;

    MCNAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const&, float) const;

    MCNAPI short $getCloudHeight() const;

    MCNAPI ::BiomeIdType $getDefaultBiomeId() const;

    MCNAPI bool $mayRespawnViaBed() const;

    MCNAPI ::BlockPos $getSpawnPos() const;

    MCNAPI int $getSpawnYPosition() const;

    MCNAPI bool $showSky() const;

    MCNAPI void $setDimensionDirectionalLightControls(std::variant<Dimension::ChaoticDirectionalLightControls> const&);

    MCNAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float) const;

    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $deserialize(::CompoundTag const&);

    MCNAPI void $serialize(::CompoundTag&) const;

    MCNAPI void $sendBroadcast(::Packet const&, ::Player*);

    MCNAPI bool $is2DPositionRelevantForPlayer(::BlockPos const&, ::Player&) const;

    MCNAPI bool $isActorRelevantForPlayer(::Player&, ::Actor const&) const;

    MCNAPI void $onBlockEvent(::BlockSource&, int, int, int, int, int);

    MCNAPI void $onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
#else // @header-generator platform
    MCFOLD void $setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelDestruction(std::string const&);
#else // @header-generator platform
    MCAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionBrightnessRamp const& $getBrightnessRamp() const;
#else // @header-generator platform
    MCAPI ::DimensionType $getDimensionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const $getStructuresFromChunkRegistry(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI void $forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> const $getStructureFromStructureRegistry(::Vec3 const&) const;
#else // @header-generator platform
    MCFOLD ::BiomeRegistry& $getBiomeRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startLeaveGame();
#else // @header-generator platform
    MCFOLD ::BiomeRegistry const& $getBiomeRegistry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getTimeOfDay(int, float) const;
#else // @header-generator platform
    MCFOLD ::BlockSource& $getBlockSourceFromMainChunkSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ChunkBuildOrderPolicyBase> $_createChunkBuildOrderPolicy();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Actor* $fetchEntity(::ActorUniqueID actorID, bool getRemoved) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void $deserialize(::CompoundTag const& tag);

    MCAPI void $serialize(::CompoundTag& tag) const;

    MCAPI void $sendBroadcast(::Packet const& packet, ::Player* except);

    MCAPI bool $is2DPositionRelevantForPlayer(::BlockPos const& position, ::Player& player) const;

    MCAPI void $buildPlayersForPositionPacket(
        ::BlockPos const&                            position,
        ::Player const*                              except,
        ::std::vector<::NetworkIdentifierWithSubId>& result
    ) const;

    MCAPI void $sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except);

    MCAPI void $sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except);

    MCAPI bool $isActorRelevantForPlayer(::Player& player, ::Actor const& actor) const;

    MCAPI void $onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);

    MCAPI void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );

    MCAPI void $onLevelDestruction(::std::string const&);

    MCFOLD ::DimensionBrightnessRamp const& $getBrightnessRamp() const;

    MCAPI ::std::vector<::std::string> const $getStructuresFromChunkRegistry(::Vec3 const& location) const;

    MCAPI ::std::optional<::std::string> const $getStructureFromStructureRegistry(::Vec3 const& location) const;

    MCAPI void $startLeaveGame();

    MCAPI void $flushLevelChunkGarbageCollector();

    MCAPI void $updatePoiBlockStateChange(::BlockPos pos, ::Block const& removed, ::Block const& placed) const;

    MCAPI ::std::unique_ptr<::ChunkBuildOrderPolicyBase> $_createChunkBuildOrderPolicy();


#endif // @header-generator platform
    // NOLINTEND
};
