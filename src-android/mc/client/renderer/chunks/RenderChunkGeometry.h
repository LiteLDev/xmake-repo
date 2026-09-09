#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/chunks/BlockQueueEntry.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Block;
class FaceSortingMetaDataBase;
class IRenderChunkGarbage;
class MinecraftGraphics;
class RenderChunkBuilder;
class RenderChunkSorter;
class TerrainTextures;
class TextureAtlas;
class Vec3;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct RenderChunkQuadInfo;
struct TerrainLayer;
namespace dragon { struct RenderMetadata; }
namespace mce { class IndexBufferContainer; }
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct BufferResourceService; }
namespace mce { struct ServerTexture; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on

class RenderChunkGeometry {
public:
    // RenderChunkGeometry inner types define
    enum class Bit : uchar {
        CanRender                    = 0,
        Built                        = 1,
        RayTracingModeOnAtBuildStart = 2,
        RayTracingModeOnAtBuildEnd   = 3,
        HasSortedLayers              = 4,
        ImmediateChange              = 5,
        BlendCanRenderAsOpaque       = 6,
        Count                        = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Tick> mLastChangeTick;
    ::ll::TypedStorage<8, 8, ::Tick> mFirstChangeTick;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, std::shared_ptr<mce::Mesh>, std::shared_ptr<RenderChunkDirectVertexData>>> mMeshData;
    ::ll::TypedStorage<8, 8, std::bitset<7>> mFlags;
    ::ll::TypedStorage<4, 4, float> mReadyTime;
    ::ll::TypedStorage<4, 4, int> mBuildIterationCount;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos> mCenter;
    ::ll::TypedStorage<4, 48, ::Bounds> mDataBounds;
    ::ll::TypedStorage<4, 4, ::EntityId> mEntityId;
    ::ll::TypedStorage<8, 112, std::array<std::shared_ptr<FaceSortingMetaDataBase>, 7>> mFaceSortingMetaData;
    ::ll::TypedStorage<4, 176, std::array<RangeIndices, 22>> mRenderLayerIndexRanges;
    ::ll::TypedStorage<4, 4, float> mAverageSkyLight;
    ::ll::TypedStorage<8, 8, std::bitset<6>> mInterlockBitField;
    ::ll::TypedStorage<1, 6, std::array<uchar, 6>> mInterlockNeighborVersionNumbers;
    ::ll::TypedStorage<1, 1, uchar> mBuildVersionNumber;
    ::ll::TypedStorage<8, 24, std::vector<BlockQueueEntry>> mPointLightCandidates;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IRenderChunkGarbage>> mRenderChunkGarbage;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkGeometry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _convertFaceMetaDataToFaceSortingMetaData(std::array<std::vector<RenderChunkQuadInfo>, 7> const&, bool);

    MCNAPI void _resetFaceMetadata();

    MCNAPI bool canBlendRenderAsOpaque() const;

    MCNAPI bool didRayTracingModeChangeDuringBuild() const;

    MCNAPI ulong endFaceSortOnly(
        ::mce::BufferResourceService&,
        ::RenderChunkSorter&,
        std::variant<
            std::monostate,
            std::shared_ptr<mce::IndexBufferContainer>,
            std::shared_ptr<RenderChunkDirectIndexData>>&,
        std::array<RangeIndices, 22>&,
        ::dragon::RenderMetadata const&
    );

    MCNAPI void
    endRebuild(::RenderChunkBuilder&, ::mce::BufferResourceService&, bool, ::dragon::RenderMetadata const&, bool);

    MCNAPI ::mce::TexturePtr const& getDiffuseTexture(::TerrainLayer const&) const;

    MCNAPI std::variant<std::monostate, std::shared_ptr<mce::Mesh>, std::shared_ptr<RenderChunkDirectVertexData>> const&
           getMeshData() const;

    MCNAPI std::vector<BlockQueueEntry> const& getPointLightCandidates() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isMeshValid() const;

    MCNAPI bool isReady() const;

    MCNAPI void prefetchMeshPtr() const;

    MCNAPI void reset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<mce::ServerTexture> createTerrainTextureList(::SubClientId const);

    MCNAPI static void deinitTextures();

    MCNAPI static void initTextures(
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> const&,
        std::shared_ptr<mce::TextureGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const TextureAtlas>> const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<TerrainTextures>& mTerrainTextures();
    // NOLINTEND
};
