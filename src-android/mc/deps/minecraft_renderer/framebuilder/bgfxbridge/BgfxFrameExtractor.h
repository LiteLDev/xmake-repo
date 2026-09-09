#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/ActiveShadowTileInfo.h"
#include "mc/deps/minecraft_renderer/framebuilder/BiomeBlendingData.h"
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/BVHMeshKey.h"
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/BVHMeshKeyHasher.h"
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/UIElementType.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/deps/minecraft_renderer/objects/WeatherRenderObject.h"
#include "mc/deps/minecraft_renderer/renderer/StructuredBuffer.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/external/render_dragon/endstone/Guarded.h"
#include "mc/external/render_dragon/frame_object/components/UIElementPassType.h"
#include "mc/external/render_dragon/mesh/IndexSize.h"
#include "mc/external/render_dragon/mesh/Mesh.h"
#include "mc/external/render_dragon/mesh/SplitMergeBasedSpanRegistry.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/tasks/DeferredResult.h"

// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
struct RangeIndices;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct TerrainLayer;
namespace bgfx { struct PBRTextureData; }
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct RenderMetadata; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::frameobject { struct IntraFrameAllocatorContainer; }
namespace dragon::frameobject::components { struct MaterialFilter; }
namespace dragon::frameobject::components { struct MeshFilter; }
namespace dragon::framerenderer { class BgfxPrimitiveIndexBuffer; }
namespace dragon::materials { class MaterialResourceManager; }
namespace dragon::memory { class BufferSource; }
namespace dragon::mesh { class VertexDeclManager; }
namespace dragon::mesh { struct IndexSpanRegistry; }
namespace dragon::mesh { struct VertexSpanRegistry; }
namespace dragon::platform { struct GLTextureWrapper; }
namespace dragon::rendering { class TextureResourceManager; }
namespace dragon::rendering { struct SharedTextureHandle; }
namespace dragon::tasks { class GraphicsTasks; }
namespace mce { class Color; }
namespace mce { class Mesh; }
namespace mce { class VertexFormat; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureShiftBuffer; }
namespace mce { struct VertexLayout; }
namespace mce::Font { struct RenderingParameters; }
namespace mce::framebuilder { struct BlitFlipbookTextureDescription; }
namespace mce::framebuilder { struct BlockChangesDescription; }
namespace mce::framebuilder { struct FadeToBlackDescription; }
namespace mce::framebuilder { struct FullscreenEffectDescription; }
namespace mce::framebuilder { struct GlintDescription; }
namespace mce::framebuilder { struct LightAmbientDescription; }
namespace mce::framebuilder { struct LightDirectionalDescription; }
namespace mce::framebuilder { struct LightPointDescription; }
namespace mce::framebuilder { struct RenderActorDescription; }
namespace mce::framebuilder { struct RenderAtmosphereDescription; }
namespace mce::framebuilder { struct RenderBannerDescription; }
namespace mce::framebuilder { struct RenderBatchActorDescription; }
namespace mce::framebuilder { struct RenderBatchActorInstanceDescription; }
namespace mce::framebuilder { struct RenderBatchRenderControllerDescription; }
namespace mce::framebuilder { struct RenderBatchSkinnedMeshDescription; }
namespace mce::framebuilder { struct RenderBlockSelectionOverlayBlockEntityDescription; }
namespace mce::framebuilder { struct RenderCameraAimAssistHighlightDescription; }
namespace mce::framebuilder { struct RenderCelestialBodyDescription; }
namespace mce::framebuilder { struct RenderChunkGeometryDescription; }
namespace mce::framebuilder { struct RenderChunkOccludersDescription; }
namespace mce::framebuilder { struct RenderCloudsDescription; }
namespace mce::framebuilder { struct RenderCrackDescription; }
namespace mce::framebuilder { struct RenderCracksOverlayBlockEntityDescription; }
namespace mce::framebuilder { struct RenderCubemapDescription; }
namespace mce::framebuilder { struct RenderEndSkyDescription; }
namespace mce::framebuilder { struct RenderEnvironmentalTextDescription; }
namespace mce::framebuilder { struct RenderFlameBillboardDescription; }
namespace mce::framebuilder { struct RenderItemInHandDescription; }
namespace mce::framebuilder { struct RenderLegacyCubemapDescription; }
namespace mce::framebuilder { struct RenderMeshFallbackDescription; }
namespace mce::framebuilder { struct RenderNametagDescription; }
namespace mce::framebuilder { struct RenderParticleDescription; }
namespace mce::framebuilder { struct RenderPatternDescription; }
namespace mce::framebuilder { struct RenderPlayerVisionDescription; }
namespace mce::framebuilder { struct RenderShadowDescription; }
namespace mce::framebuilder { struct RenderSkinnedMeshDescription; }
namespace mce::framebuilder { struct RenderSkyDescription; }
namespace mce::framebuilder { struct RenderStarsDescription; }
namespace mce::framebuilder { struct RenderUIGamefaceDescription; }
namespace mce::framebuilder { struct RenderUIHudIconDescription; }
namespace mce::framebuilder { struct RenderUIImGuiDescription; }
namespace mce::framebuilder { struct RenderUIMeshDescription; }
namespace mce::framebuilder { struct RenderUITextDescription; }
namespace mce::framebuilder { struct RenderVolumetricFogDescription; }
namespace mce::framebuilder { struct RenderWeatherDescription; }
namespace mce::framebuilder { struct ShadowAtlasFrameDescription; }
namespace mce::framebuilder { struct SkyAmbientSamplesDescription; }
namespace mce::framebuilder { struct VoxelVolumeDescription; }
namespace mce::framebuilder::bgfxbridge { class DefineFlags; }
namespace mce::framebuilder::bgfxbridge { struct BVHMesh; }
namespace mce::framebuilder::bgfxbridge { struct BVHSkinnedMesh; }
namespace mce::framebuilder::bgfxbridge { struct EntityCreationContext; }
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
namespace mce::framebuilder::gamecomponents { struct ServerGraphicsOverrideParameters; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

class BgfxFrameExtractor {
public:
    // BgfxFrameExtractor inner types declare
    // clang-format off
    struct PreviousFrameCachedData;
    // clang-format on

    // BgfxFrameExtractor inner types define
    struct PreviousFrameCachedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
        ::ll::TypedStorage<8, 8, ulong>                                       mFrameNumLastTimeAccessed;
        // NOLINTEND

    public:
        // prevent constructor by default
        PreviousFrameCachedData& operator=(PreviousFrameCachedData const&);
        PreviousFrameCachedData(PreviousFrameCachedData const&);
        PreviousFrameCachedData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>                                                           mChunkSeenThisFrame;
    ::ll::UntypedStorage<8, 80>                                                           mRTXBVHSkinnedMeshCache;
    ::ll::UntypedStorage<8, 80>                                                           mDeferredBVHSkinnedMeshCache;
    ::ll::UntypedStorage<8, 80>                                                           mBVHStaticMeshCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::framebuilder::bgfxbridge::BVHMeshKey>>  mPreviousBVHCloudMeshKey;
    ::ll::UntypedStorage<8, 80>                                                           mPrevWorldMatrixMeshCache;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                                          mCacheKeyGenerator;
    ::ll::UntypedStorage<8, 8>                                                            mChunkVertexRegistry;
    ::ll::UntypedStorage<8, 8>                                                            mChunkIndexRegistry;
    ::ll::TypedStorage<8, 88, ::dragon::mesh::Mesh>                                       mCubemapMesh;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::materials::MaterialResourceManager>> mMaterialsManager;
    ::ll::TypedStorage<2, 2, ushort>                                                      mUIDepthLayer;
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::BgfxPrimitiveIndexBuffer&>          mQuadIndexBuffer;
    ::ll::UntypedStorage<8, 24>                                                           mTerrainAtlasTextureHandle;
    ::ll::UntypedStorage<8, 24>                                                           mBiomeBlendingTextureHandle;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>                             mDefaultMERSUniforms;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>                             mDefaultParticleMERSUniforms;
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::BiomeBlendingData>                     mBiomeBlendingData;
    ::ll::UntypedStorage<8, 56>                                                           mPbrBuffer;
    ::ll::UntypedStorage<8, 56>                                                           mShiftBuffer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasRenderOperations>>     mAtlas;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::ActiveShadowTileInfo>>       mActiveShadowTiles;
    // NOLINTEND

public:
    // prevent constructor by default
    BgfxFrameExtractor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _bindCSSTextures(::dragon::frameobject::components::MaterialFilter&);

    MCNAPI void _createUIElement(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::bgfxbridge::UIElementType const,
        ushort const&,
        ::mce::Mesh const&,
        ::mce::framebuilder::GlintDescription const*,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        std::optional<glm::vec<4, float, (glm::qualifier)0>> const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        bool const,
        ::mce::Color const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        float const,
        bool const,
        bool const,
        bool const,
        bool const,
        ::dragon::frameobject::components::UIElementPassType const,
        std::optional<mce::Font::RenderingParameters> const&,
        ::OffscreenCaptureDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderBatchActorDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderChunkGeometryDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderCloudsDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderBlockSelectionOverlayBlockEntityDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderItemInHandDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderParticleDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderWeatherDescription const&
    );

    MCNAPI void _insert(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::mce::framebuilder::RenderActorDescription const&,
        std::optional<mce::framebuilder::RenderBannerDescription> const&,
        std::optional<mce::framebuilder::RenderPatternDescription> const&
    );

    MCNAPI ~BgfxFrameExtractor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource> generateVertexBufferWithFormat(
        ::mce::framebuilder::bgfxbridge::EntityCreationContext const&,
        ::gsl::details::span_iterator<const uchar> const&,
        ulong const&,
        ::mce::VertexFormat const&,
        std::string&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
