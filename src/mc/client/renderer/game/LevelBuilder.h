#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/game/PolygonOperatorPool.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
class LevelRenderer;
class LevelRendererCamera;
class MinecraftGameplayGraphicsResources;
class RenderChunkBuilder;
class RenderChunkInstanced;
class RenderChunkShared;
class RenderChunkSorter;
class RenderChunkSorterSharedInfo;
class SubChunkRequestSubscriber;
class Vec3;
struct LevelRenderPreRenderUpdateParameters;
struct SubChunk;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class LevelBuilder {
public:
    // LevelBuilder inner types declare
    // clang-format off
    struct CameraQueriedRenderChunk;
    struct PositionAndPriority;
    // clang-format on

    // LevelBuilder inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CameraQueriedRenderChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<LevelRendererCamera>> mRequestingCamera;
        ::ll::TypedStorage<4, 12, ::SubChunkPos>                      mRenderChunksToQueryForCuller;
        // NOLINTEND
#else // @header-generator platform
    struct CameraQueriedRenderChunk {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        CameraQueriedRenderChunk& operator=(CameraQueriedRenderChunk const&);
        CameraQueriedRenderChunk();
    };

    struct PositionAndPriority {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::SubChunkPos> mPosition;
        ::ll::TypedStorage<4, 4, int>            mPriority;
        // NOLINTEND

    public:
        // prevent constructor by default
        PositionAndPriority& operator=(PositionAndPriority const&);
        PositionAndPriority();
    };

    using BuilderPool = ::PolygonOperatorPool<RenderChunkBuilder>;

    using SorterPool = ::PolygonOperatorPool<RenderChunkSorter>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> maxCullingSteps;
    ::ll::TypedStorage<4, 4, int> numDirtyChunks;
    ::ll::TypedStorage<4, 4, int> numDirtyChunksPrevFrame;
    ::ll::TypedStorage<4, 4, int const> mMaxInflightChunks;
    ::ll::TypedStorage<1, 1, bool> mEnforceInterlocks;
    ::ll::TypedStorage<1, 1, bool> mUseSplitVertexStreams;
    ::ll::UntypedStorage<8, 96> mBuilders;
    ::ll::UntypedStorage<8, 96> mSorters;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&> mLevelRenderer;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LevelRendererCamera>>> mLevelRendererCameras;
    ::ll::UntypedStorage<8, 616> mRenderChunksToBuild;
    ::ll::TypedStorage<8, 48, std::queue<std::shared_ptr<RenderChunkShared>, std::deque<std::shared_ptr<RenderChunkShared>>>> mRenderChunksToUpload;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mRenderChunksFinishedBuildingSpinLock;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mImmediateChunkInFlightCount;
    ::ll::UntypedStorage<1, 140> mRenderChunksToQueryForCullerMutex;
    ::ll::TypedStorage<8, 24, std::vector<LevelBuilder::CameraQueriedRenderChunk>> mRenderChunksToQueryForEachCamera;
    ::ll::TypedStorage<8, 24, std::vector<RenderChunkInstanced*>> mSortedRenderChunkInstancedList;
    ::ll::TypedStorage<8, 24, std::vector<LevelBuilder::PositionAndPriority>> mSortedList;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mRenderChunksVisibleFromCullingPoint;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mRenderChunksVisibilityMask;
    ::ll::TypedStorage<8, 40, std::unordered_set<SubChunkPos>> mInterlockedRenderChunksToCheck;
    ::ll::TypedStorage<8, 40, std::unordered_set<SubChunkPos>> mInterlockGraphWalkSet;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mInterlockGraphWalkToCheckList;
    ::ll::TypedStorage<8, 40, std::unordered_set<SubChunkPos>> mExtraChunksToDrawUntilNextCull;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mExtraChunksToDrawUntilNextCullEraseList;
    ::ll::TypedStorage<4, 4, uint> mLastCullIteration;
    ::ll::TypedStorage<8, 8, ulong> mLastNumRenderChunksVisibleFromCullingPoint;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTimeRenderChunksBeingBuilt;
    ::ll::UntypedStorage<8, 16> mBuilderTask;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkRequestSubscriber>> mSubChunkSubscriber;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkSorterSharedInfo>> mSharedSortInfo;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCurrentTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBuilder& operator=(LevelBuilder const&);
    LevelBuilder(LevelBuilder const&);
    LevelBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _destroyBuilders();

    MCNAPI void _prepareRenderChunkRenderList(::Vec3 const&, ::Vec3 const&, float, bool);

    MCNAPI void _promoteSortedGeometry(::RenderChunkInstanced&);

    MCNAPI void addChunkToQueryForCuller(::SubChunkPos const&, std::weak_ptr<LevelRendererCamera>);

    MCNAPI void checkAndRequestSubChunk(::SubChunkPos const&);

    MCNAPI void onAppResumed();

    MCNAPI void onChunkReloaded(::LevelChunk&);

    MCNAPI void onDimensionChanged();

    MCNAPI void onGraphicsModeChanged(::MinecraftGameplayGraphicsResources&);

    MCNAPI void recreateBuilders(::MinecraftGameplayGraphicsResources&);

    MCNAPI void renderChunkImmediateChanged(::SubChunkPos const&, ::LevelRendererCamera&);

    MCNAPI void scheduleChunkSort(std::shared_ptr<RenderChunkInstanced> const&);

    MCNAPI bool tryRebuild(::RenderChunkInstanced&, ::Vec3 const&, ::LevelRendererCamera&);

    MCNAPI ~LevelBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct PositionAndPriority {};
#endif // @header-generator platform
};
