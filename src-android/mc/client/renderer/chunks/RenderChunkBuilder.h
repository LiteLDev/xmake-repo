#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderChunkQuadInfo.h"
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/chunks/RenderChunkPerformanceTrackingData.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockTessellator;
class ChunkSource;
class ChunkViewSource;
class IRenderChunkGarbage;
class MinecraftGameplayGraphicsResources;
class RenderChunkCoordinator;
class RenderChunkGeometry;
class RuntimeLocalLightingConfig;
class SubChunkPos;
class Tessellator;
struct AirAndSimpleBlockBits;
struct BlockQueueEntry;
namespace ClientBlockPipeline { class BlockTessellatorPipeline; }
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class TessellatorContext; }
namespace ClientBlockPipeline { struct SimpleMesh; }
namespace mce { class Mesh; }
namespace mce { class MeshData; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on

class RenderChunkBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>>                              mLocalSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTessellator>>                              mBlockTessellator;
    ::ll::TypedStorage<1, 1, bool>                                                           mAllDark;
    ::ll::TypedStorage<1, 1, bool>                                                           mSkyLit;
    ::ll::TypedStorage<1, 1, bool>                                                           mBlendCanRenderAsOpaque;
    ::ll::TypedStorage<4, 4, float>                                                          mAverageSkyLight;
    ::ll::TypedStorage<8, 168, std::array<std::vector<RenderChunkQuadInfo>, 7>>              mFaceMetadata;
    ::ll::TypedStorage<4, 176, std::array<RangeIndices, 22>>                                 mRenderLayerRanges;
    ::ll::TypedStorage<8, 8, std::vector<BlockQueueEntry>*>                                  mQueues;
    ::ll::TypedStorage<8, 8, std::vector<BlockQueueEntry>*>                                  mSimpleOpaqueBlockQueue;
    ::ll::TypedStorage<8, 176, ulong[22]>                                                    mQueueIndexCounts;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Tessellator>>                                   mOwnedTessellator;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::MaterialRepository>>      mMaterialRepository;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const RuntimeLocalLightingConfig>>               mLocalLightingConfig;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientBlockPipeline::BlockTessellatorPipeline>> mPipelineTessellator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientBlockPipeline::Description>>              mPipelineDescription;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                                                 mTessellator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::Mesh>>                                     mBuiltMesh;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::MeshData>>                                 mMeshData;
    ::ll::TypedStorage<1, 1, bool>                                                           mGUIRendering;
    ::ll::TypedStorage<4, 24, ::AABB>                                                        mBuildBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                                mUseNewTessellationPipeline;
    ::ll::TypedStorage<1, 1, bool>                                mTextureShiftsEnabled;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IRenderChunkGarbage>> mRenderChunkGarbage;
    ::ll::UntypedStorage<1, 16>                                   mRenderChunkCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkBuilder& operator=(RenderChunkBuilder const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderChunkBuilder(
        ::MinecraftGameplayGraphicsResources&,
        ::ClientBlockPipeline::TessellatorContext&,
        ::ChunkSource&,
        ::WeakRef<RenderChunkCoordinator>
    );

    MCNAPI RenderChunkBuilder(
        std::shared_ptr<ClientBlockPipeline::MaterialRepository> const&,
        ::ChunkSource&,
        ::Tessellator&,
        std::weak_ptr<IRenderChunkGarbage>
    );

    MCNAPI ::mce::MeshData acquireMeshData();

    MCNAPI void applyBuildBoundingBox(::AABB const&);

    MCNAPI void build(
        ::RenderChunkGeometry&,
        bool,
        ::BakedBlockLightType,
        bool,
        ::mce::framebuilder::FrameLightingModelCapabilities const&
    );

    MCNAPI void setGUIRendering(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void checkNeighborBlockIsAirOrSimpleBlock(::Block const&, ulong const, ::AirAndSimpleBlockBits&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::MinecraftGameplayGraphicsResources&,
        ::ClientBlockPipeline::TessellatorContext&,
        ::ChunkSource&,
        ::WeakRef<RenderChunkCoordinator>
    );

    MCNAPI void* $ctor(
        std::shared_ptr<ClientBlockPipeline::MaterialRepository> const&,
        ::ChunkSource&,
        ::Tessellator&,
        std::weak_ptr<IRenderChunkGarbage>
    );
    // NOLINTEND
};
