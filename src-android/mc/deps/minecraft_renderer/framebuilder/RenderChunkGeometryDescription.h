#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"
#include "mc/external/render_dragon/frame_object/components/ViewSetId.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct TerrainLayer;
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder {

struct RenderChunkGeometryDescription {
public:
    // RenderChunkGeometryDescription inner types declare
    // clang-format off
    struct PerChunkData;
    // clang-format on

    // RenderChunkGeometryDescription inner types define
    struct PerChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RenderChunkDirectIndexData const*>      mDirectIndexData;
        ::ll::TypedStorage<8, 8, ::RenderChunkDirectVertexData const*>     mDirectVertexData;
        ::ll::TypedStorage<1, 1, bool>                                     mUnsorted;
        ::ll::TypedStorage<4, 4, uint>                                     mIndicesOffset;
        ::ll::TypedStorage<4, 4, uint>                                     mIndicesCount;
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mChunkOriginAndScale;
        ::ll::TypedStorage<4, 4, float>                                    mRenderChunkFogAlpha;
        ::ll::TypedStorage<4, 4, uint>                                     mVisibleCameraMask;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 80> mTextures;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::RenderChunkGeometryDescription::PerChunkData>> mChunks;
    ::ll::TypedStorage<8, 8, ::TerrainLayer const&> mTerrainLayer;
    ::ll::TypedStorage<1, 1, ::TerrainLayerLOD> mTerrainLayerLOD;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription> mFog;
    ::ll::TypedStorage<4, 4, float> mFarChunkDistance;
    ::ll::TypedStorage<4, 4, float> mTime;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldAdjustmentMatrix;
    ::ll::TypedStorage<1, 1, bool> mIsUI;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription> mOffscreenCaptureDescription;
    ::ll::TypedStorage<1, 1, bool> mDitheringEnabled;
    ::ll::TypedStorage<2, 2, ::dragon::frameobject::components::ViewSetId const> mViewId;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCameraPosition;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkGeometryDescription& operator=(RenderChunkGeometryDescription const&);
    RenderChunkGeometryDescription(RenderChunkGeometryDescription const&);
    RenderChunkGeometryDescription();
};

} // namespace mce::framebuilder
