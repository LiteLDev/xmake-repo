#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/ActorBlockSyncMessage.h"
#include "mc/world/level/BlockActorBlockSyncMessage.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class ChunkSource;
class IRenderChunkGarbage;
class Level;
class LevelChunk;
class LevelRenderer;
class LevelRendererCamera;
class RenderChunkCoordinatorProxy;
class RenderChunkPerformanceData;
class RenderChunkShared;
namespace LightPropagation { class LightPropagationCoordinator; }
// clang-format on

class RenderChunkCoordinator : public ::LevelListener {
public:
    // RenderChunkCoordinator inner types declare
    // clang-format off
    struct DirtyChunkData;
    // clang-format on

    // RenderChunkCoordinator inner types define
    struct DirtyChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>           mImmediate;
        ::ll::TypedStorage<1, 1, bool>           mChangesVisibility;
        ::ll::TypedStorage<8, 8, std::bitset<6>> mInterlockBitField;
        // NOLINTEND
    };

    using RenderChunkMapType = std::unordered_map<SubChunkPos, std::weak_ptr<RenderChunkShared>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mSweepAndPruneRatio;
    ::ll::UntypedStorage<8, 8> mSweepAndPruneIterator;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubChunkPos, std::weak_ptr<RenderChunkShared>>> mRenderChunkSharedMap;
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&> mLevelRenderer;
    ::ll::TypedStorage<8, 24, std::vector<LevelRendererCamera*>> mLevelRendererCameraListenerList;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubChunkPos, RenderChunkCoordinator::DirtyChunkData>> mVisibilityDirtyRenderChunkMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubChunkPos, std::vector<ActorBlockSyncMessage>>> mRenderChunkChangedEntityNotificationMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubChunkPos, std::vector<BlockActorBlockSyncMessage>>> mRenderChunkChangedBlockEntityNotificationMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RenderChunkCoordinatorProxy>> mProxy;
    ::ll::UntypedStorage<1, 16> mRenderChunkPerformanceRegistry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IRenderChunkGarbage>> mGarbage;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkCoordinator& operator=(RenderChunkCoordinator const&);
    RenderChunkCoordinator(RenderChunkCoordinator const&);
    RenderChunkCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RenderChunkCoordinator();

    virtual void onAreaChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&);

    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    virtual void onBrightnessChanged(::BlockSource&, ::BlockPos const&);

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderChunkCoordinator(::Level&, ::LevelRenderer&, ::DimensionType);

    MCNAPI void _handleVisibilityUpdates();

    MCNAPI void _launchVisibilityRebuild(std::shared_ptr<RenderChunkShared>&);

    MCNAPI void _setAllDirty(bool, bool);

    MCNAPI void _setDirty(::BlockPos const&, ::BlockPos const&, bool, bool, bool);

    MCNAPI void addLevelRendererCameraListener(::LevelRendererCamera*);

    MCNAPI std::shared_ptr<RenderChunkShared> getOrCreateChunkAtPos(::SubChunkPos const&);

    MCNAPI ::RenderChunkCoordinatorProxy* getProxy();

    MCNAPI ulong getRenderChunkGeometryFaceMetadataMemoryUsed() const;

    MCNAPI void preRenderTick();

    MCNAPI void rebuildAllRenderChunkGeometry();

    MCNAPI void relightAllRenderChunkGeometry();

    MCNAPI void removeLevelRendererCameraListener(::LevelRendererCamera*);

    MCNAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&, ::LevelRenderer&, ::DimensionType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAreaChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&);

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
    );

    MCNAPI void $onBrightnessChanged(::BlockSource&, ::BlockPos const&);

    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
