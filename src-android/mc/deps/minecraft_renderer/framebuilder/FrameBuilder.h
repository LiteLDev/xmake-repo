#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/native_window.h"
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/minecraft_renderer/framebuilder/AsyncLoadResult.h"
#include "mc/deps/minecraft_renderer/game/FrustumCullerType.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/deps/renderer/hal/enums/RenderFeature.h"
#include "mc/external/render_dragon/mesh/IndexSize.h"
#include "mc/external/render_dragon/platform/DebugModeFlags.h"
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/platform/VerticalSync.h"
#include "mc/external/render_dragon/rendering/ClipSpaceDepthMode.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/tasks/DeferredResult.h"
#include "mc/external/render_dragon/texture_streaming/DebugPolicy.h"

// auto generated forward declare list
// clang-format off
struct AndroidSurfaceParameters;
struct RangeIndices;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct TerrainLayer;
namespace cg { struct ImageDescription; }
namespace dragon { class ResolvedImageResource; }
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct RenderMetadata; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedShaderBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon { struct TextureDescription; }
namespace dragon::materials { class MaterialResourceManager; }
namespace dragon::platform { struct GLTextureWrapper; }
namespace dragon::platform { struct Statistics; }
namespace dragon::rendering { class RayTracingFeatureConfiguration; }
namespace dragon::rendering { class RayTracingResources; }
namespace dragon::rendering { struct SharedTextureHandle; }
namespace dragon::texturestreaming { struct DragonTextureCacheContext; }
namespace dragon::texturestreaming { template<typename T0> class TextureCache; }
namespace mce { class VertexFormat; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureShiftBuffer; }
namespace mce { struct VertexLayout; }
namespace mce::framebuilder { class DynamicResolutionController; }
namespace mce::framebuilder { class FrameBuilderContext; }
namespace mce::framebuilder { class PBRTextureDataManager; }
namespace mce::framebuilder { class RenderingFeatureConfiguration; }
namespace mce::framebuilder { struct ActiveShadowTileInfo; }
namespace mce::framebuilder { struct BiomeBlendingData; }
namespace mce::framebuilder { struct BlitFlipbookTextureDescription; }
namespace mce::framebuilder { struct BlockChangesDescription; }
namespace mce::framebuilder { struct BufferClearDescription; }
namespace mce::framebuilder { struct CameraDescriptionOrthographic; }
namespace mce::framebuilder { struct CameraDescriptionPerspective; }
namespace mce::framebuilder { struct FadeToBlackDescription; }
namespace mce::framebuilder { struct FrameBuilderInitDependencies; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
namespace mce::framebuilder { struct FramePacingConfig; }
namespace mce::framebuilder { struct FullscreenEffectDescription; }
namespace mce::framebuilder { struct LightAmbientDescription; }
namespace mce::framebuilder { struct LightDirectionalDescription; }
namespace mce::framebuilder { struct LightPointDescription; }
namespace mce::framebuilder { struct RenderAtmosphereDescription; }
namespace mce::framebuilder { struct RenderBatchActorDescription; }
namespace mce::framebuilder { struct RenderBlockSelectionOverlayBlockEntityDescription; }
namespace mce::framebuilder { struct RenderCameraAimAssistHighlightDescription; }
namespace mce::framebuilder { struct RenderCelestialBodyDescription; }
namespace mce::framebuilder { struct RenderChunkGeometryDescription; }
namespace mce::framebuilder { struct RenderChunkOccludersDescription; }
namespace mce::framebuilder { struct RenderCloudsDescription; }
namespace mce::framebuilder { struct RenderCrackDescription; }
namespace mce::framebuilder { struct RenderCubemapDescription; }
namespace mce::framebuilder { struct RenderEndSkyDescription; }
namespace mce::framebuilder { struct RenderEnvironmentalTextDescription; }
namespace mce::framebuilder { struct RenderFlameBillboardDescription; }
namespace mce::framebuilder { struct RenderItemInHandDescription; }
namespace mce::framebuilder { struct RenderLegacyCubemapDescription; }
namespace mce::framebuilder { struct RenderMeshFallbackDescription; }
namespace mce::framebuilder { struct RenderNametagDescription; }
namespace mce::framebuilder { struct RenderParticleDescription; }
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
namespace mce::framebuilder::bgfxbridge { struct EntityCreationContext; }
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
namespace mce::framebuilder::gamecomponents { struct ServerGraphicsOverrideParameters; }
// clang-format on

namespace mce::framebuilder {

class FrameBuilder : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FrameBuilder inner types declare
    // clang-format off
    struct FrameTimings;
    class InitializationState;
    // clang-format on

    // FrameBuilder inner types define
    struct FrameTimings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, double> renderThreadDurationInSeconds;
        ::ll::TypedStorage<8, 8, double> waitUntilCompletedDurationInSeconds;
        ::ll::TypedStorage<8, 8, double> flipTimestampInMilliseconds;
        // NOLINTEND
    };

    class InitializationState {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~InitializationState() = default;
        // NOLINTEND
    };

    using InitializationStatePointer = std::shared_ptr<mce::framebuilder::FrameBuilder::InitializationState>;

    using LayerRanges = std::function<RangeIndices(const TerrainLayer&, TerrainLayerLOD)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FrameBuilder() = default;

    virtual bool enabled() const = 0;

    virtual std::optional<dragon::platform::Statistics> getStatistics() = 0;

    virtual std::optional<dragon::platform::Statistics> getPreviousFrameStatistics() const = 0;

    virtual double getAverageGPUTime() const = 0;

    virtual void resetGPUTimeData() = 0;

    virtual bool supportsRenderFeature(::mce::RenderFeature const) const = 0;

    virtual ::mce::framebuilder::FrameBuilder::FrameTimings getLastFrameTimings() const = 0;

    virtual std::weak_ptr<mce::framebuilder::DynamicResolutionController> getDynamicResolutionController() = 0;

    virtual bool isDeviceRemoved();

    virtual std::optional<std::shared_ptr<mce::framebuilder::FrameBuilder::InitializationState>> init(::mce::framebuilder::FrameBuilderInitDependencies&&) = 0;

    virtual std::optional<std::shared_ptr<mce::framebuilder::FrameBuilder::InitializationState>> continueInit(std::shared_ptr<mce::framebuilder::FrameBuilder::InitializationState>) = 0;

    virtual bool initialized() const = 0;

    virtual void destroy() = 0;

    virtual void loadCoreAssets(::Core::PathBuffer<std::string> const&, std::function<std::string (const std::string&, const std::string&)>) = 0;

    virtual ::mce::framebuilder::AsyncLoadResult loadAsyncAssets() = 0;

    virtual void startFrame() = 0;

    virtual void endFrame(::mce::framebuilder::FrameBuilderContext&&) = 0;

    virtual void discardFrame(bool) = 0;

    virtual void setTerrainAtlasTexture(::mce::ClientTexture const&) = 0;

    virtual float getTargetFrameTime() const = 0;

    virtual ::mce::framebuilder::FramePacingConfig getFramePacingConfig() const = 0;

    virtual void setFramePacingConfig(::mce::framebuilder::FramePacingConfig const&) = 0;

    virtual void setDefaultActorMERSUniforms(float const, float const, float const, float const) = 0;

    virtual void setDefaultParticleMERSUniforms(float const, float const, float const, float const) = 0;

    virtual void setBiomeBlendingData(::mce::framebuilder::BiomeBlendingData const&) = 0;

    virtual void setActiveShadowTiles(std::vector<mce::framebuilder::ActiveShadowTileInfo> const&) = 0;

    virtual void updateSurfaceParameters(std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&) = 0;

    virtual void updateWindowSize(uint const, uint const) = 0;

    virtual void updateClientViewSize(::glm::vec<2, float, (glm::qualifier)0> const&) = 0;

    virtual bool updateMsaaLevel(uchar const) = 0;

    virtual void updateFrameRateLimit(std::optional<int> const) = 0;

    virtual void updateVSync(::dragon::platform::VerticalSync) = 0;

    virtual void updateFramePacing(bool) = 0;

    virtual bool enableDynamicTextureHandles() = 0;

    virtual void setDebugMode(::dragon::platform::DebugModeFlags) = 0;

    virtual void suspend() = 0;

    virtual void resume() = 0;

    virtual ::dragon::tasks::DeferredResult<dragon::rendering::SharedTextureHandle> createExternalTexture(std::optional<std::variant<std::monostate, dragon::platform::GLTextureWrapper>>) = 0;

    virtual void updateExternalTexture(::dragon::tasks::DeferredResult<dragon::rendering::SharedTextureHandle>, std::optional<std::variant<std::monostate, dragon::platform::GLTextureWrapper>>, std::function<void (dragon::rendering::SharedTextureHandle)>) = 0;

    virtual ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> wrapExternalTexture(::dragon::platform::RenderAPI, ::dragon::TextureDescription const&, void*) = 0;

    virtual void createRenderChunk(::dragon::RenderMetadata const&) = 0;

    virtual void destroyRenderChunk(::dragon::RenderMetadata const&) = 0;

    virtual void generateRenderChunkVertexData(::RenderChunkDirectVertexData&, std::function<RangeIndices (const TerrainLayer&, TerrainLayerLOD)>, ::gsl::span<const uchar> const&, ulong const&, ::mce::VertexLayout const&, int const*) = 0;

    virtual void generateRenderChunkIndexData(::RenderChunkDirectIndexData&, std::function<RangeIndices (const TerrainLayer&, TerrainLayerLOD)>, ::gsl::span<const uchar> const&, ::dragon::mesh::IndexSize const) = 0;

    virtual void generateRenderChunkAdditionalVertexData(::RenderChunkDirectVertexData&, ::gsl::span<const uchar> const&, ulong const&, ::mce::VertexFormat const&) = 0;

    virtual void freeRenderChunkVertexData(::RenderChunkDirectVertexData&) = 0;

    virtual void freeRenderChunkIndexData(::RenderChunkDirectIndexData&) = 0;

    virtual void debugPrintToScreen(std::function<void (const char*)>) = 0;

    virtual void debugDeclareSceneCamera(::mce::framebuilder::CameraDescriptionOrthographic const&, ::mce::framebuilder::BufferClearDescription const&) = 0;

    virtual void debugDeclareSceneCamera(::mce::framebuilder::CameraDescriptionPerspective const&, ::mce::framebuilder::BufferClearDescription const&) = 0;

    virtual ::glm::vec<3, float, (glm::qualifier)0> getSunDir() const = 0;

    virtual void setSunDir(::glm::vec<3, float, (glm::qualifier)0> const&) = 0;

    virtual ::dragon::rendering::ClipSpaceDepthMode getClipSpace() const = 0;

    virtual ::mce::CheckedResourceService<dragon::ResolvedVertexBufferResource>* getVertexBufferResourceService() = 0;

    virtual ::mce::CheckedResourceService<dragon::ResolvedIndexBufferResource>* getIndexBufferResourceService() = 0;

    virtual ::mce::CheckedResourceService<dragon::ResolvedShaderBufferResource>* getShaderBufferResourceService() = 0;

    virtual ::mce::CheckedResourceService<dragon::ResolvedMaterialResource>* getMaterialResourceService() = 0;

    virtual void initializeTextureCache() = 0;

    virtual void initializeTextureStreamer() = 0;

    virtual bool isTextureStreamingEnabled() const = 0;

    virtual std::shared_ptr<dragon::texturestreaming::TextureCache<dragon::texturestreaming::DragonTextureCacheContext>> getTextureCache() = 0;

    virtual ::dragon::texturestreaming::unimplemented::DebugPolicy::TextureStreamingDebugControl getTextureStreamingDebugControl() = 0;

    virtual ::dragon::materials::MaterialResourceManager* getMaterialResourceManager() = 0;

    virtual ::mce::framebuilder::FrameLightingModelCapabilities getFrameLightingModelCapabilities() const = 0;

    virtual bool isRayTracingCapable() const = 0;

    virtual bool isRayTracingEnabled() const = 0;

    virtual bool isDeferredEnabled() const = 0;

    virtual bool isVSyncEnabled_DEPRECATED() const = 0;

    virtual bool isFrameDiscardWhileRenderingCapable() const = 0;

    virtual bool isFrameDiscardWhileRenderingEnabled() const = 0;

    virtual std::shared_ptr<dragon::rendering::RayTracingResources> getRayTracingResources() = 0;

    virtual std::shared_ptr<dragon::rendering::RayTracingResources> const getRayTracingResources() const = 0;

    virtual std::shared_ptr<dragon::rendering::RayTracingFeatureConfiguration> getRayTracingFeatureConfiguration() = 0;

    virtual std::shared_ptr<dragon::rendering::RayTracingFeatureConfiguration> const getRayTracingFeatureConfiguration() const = 0;

    virtual std::shared_ptr<mce::framebuilder::RenderingFeatureConfiguration> getRenderingFeatureConfiguration() = 0;

    virtual std::shared_ptr<mce::framebuilder::RenderingFeatureConfiguration> const getRenderingFeatureConfiguration() const = 0;

    virtual void setLightingModel(::dragon::rendering::LightingModels, bool&) = 0;

    virtual ::glm::vec<2, ushort, (glm::qualifier)0> getRenderResolution() const = 0;

    virtual std::vector<dragon::platform::RenderAPI> getSupportedRenderers() const = 0;

    virtual bool isUpscalingAvailable() const = 0;

    virtual void setUpscaling(bool) = 0;

    virtual bool isUpscalingEnabled() const = 0;

    virtual float getUpscalingFactor() const = 0;

    virtual std::string_view const getUpscalingInfo() const = 0;

    virtual void custom(std::function<void (const mce::framebuilder::bgfxbridge::EntityCreationContext&)> const&) = 0;

    virtual void queuePreFrameTask(std::function<void ()> const&) = 0;

    virtual ::LevelCullerType getLevelCullerType() const = 0;

    virtual ::LevelCullerType getShadowLevelCullerType() const = 0;

    virtual ::FrustumCullerType getFrustumCullerType() const = 0;

    virtual void clearRenderingResourcesCache() = 0;

    virtual void updatePBRData(::mce::framebuilder::PBRTextureDataManager&) = 0;

    virtual void updateTextureShiftData(std::vector<mce::TextureShiftBuffer> const&) = 0;

    virtual bool shouldRenderPersistentUI(ulong) const = 0;

    virtual bool shouldFlipTextureOrigin() const = 0;

    virtual uint getMaxVertexCount() const = 0;

    virtual void queueMaterialReload() = 0;

    virtual void registerWindowHandle(std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&, ushort const, int const, int const) = 0;

    virtual void unregisterWindowHandle(ushort const) = 0;

    virtual std::string getGraphicsCapabilitiesJsonString() = 0;

    virtual bool hasGpuTimerSupport() const = 0;

    virtual ::mce::ClientResourcePointer<dragon::ResolvedImageResource> readBackTexture(::cg::ImageDescription const&, std::string const&) = 0;

    virtual ::mce::CheckedResourceService<dragon::ResolvedTextureResource>* _getTextureResourceService() = 0;

    virtual void _insert(std::variant<std::reference_wrapper<const mce::framebuilder::RenderFlameBillboardDescription>, std::reference_wrapper<const mce::framebuilder::BlitFlipbookTextureDescription>, std::reference_wrapper<const mce::framebuilder::RenderParticleDescription>, std::reference_wrapper<const mce::framebuilder::RenderPlayerVisionDescription>, std::reference_wrapper<const mce::framebuilder::RenderShadowDescription>, std::reference_wrapper<const mce::framebuilder::FadeToBlackDescription>, std::reference_wrapper<const mce::framebuilder::RenderCameraAimAssistHighlightDescription>, std::reference_wrapper<const mce::framebuilder::FullscreenEffectDescription>>) = 0;

    virtual void _insert(std::variant<std::reference_wrapper<const mce::framebuilder::RenderUIGamefaceDescription>, std::reference_wrapper<const mce::framebuilder::RenderUIHudIconDescription>, std::reference_wrapper<const mce::framebuilder::RenderUIMeshDescription>, std::reference_wrapper<const mce::framebuilder::RenderUITextDescription>, std::reference_wrapper<const mce::framebuilder::RenderUIImGuiDescription>>) = 0;

    virtual void _insert(std::variant<std::reference_wrapper<const mce::framebuilder::RenderAtmosphereDescription>, std::reference_wrapper<const mce::framebuilder::RenderCloudsDescription>, std::reference_wrapper<const mce::framebuilder::RenderCubemapDescription>, std::reference_wrapper<const mce::framebuilder::RenderEndSkyDescription>, std::reference_wrapper<const mce::framebuilder::RenderLegacyCubemapDescription>, std::reference_wrapper<const mce::framebuilder::RenderSkyDescription>, std::reference_wrapper<const mce::framebuilder::RenderStarsDescription>, std::reference_wrapper<const mce::framebuilder::RenderCelestialBodyDescription>, std::reference_wrapper<const mce::framebuilder::RenderVolumetricFogDescription>, std::reference_wrapper<const mce::framebuilder::RenderWeatherDescription>, std::reference_wrapper<const mce::framebuilder::SkyAmbientSamplesDescription>>) = 0;

    virtual void _insert(std::variant<std::reference_wrapper<const mce::framebuilder::RenderEnvironmentalTextDescription>, std::reference_wrapper<const mce::framebuilder::RenderNametagDescription>, std::reference_wrapper<const mce::framebuilder::RenderMeshFallbackDescription>, std::reference_wrapper<const mce::framebuilder::RenderChunkGeometryDescription>, std::reference_wrapper<const mce::framebuilder::RenderChunkOccludersDescription>, std::reference_wrapper<const mce::framebuilder::RenderCrackDescription>, std::reference_wrapper<const mce::framebuilder::RenderItemInHandDescription>, std::reference_wrapper<const mce::framebuilder::RenderSkinnedMeshDescription>, std::reference_wrapper<const mce::framebuilder::RenderBlockSelectionOverlayBlockEntityDescription>, std::reference_wrapper<const mce::framebuilder::BlockChangesDescription>, std::reference_wrapper<const mce::framebuilder::RenderBatchActorDescription>>) = 0;

    virtual void _insert(std::variant<std::reference_wrapper<const mce::framebuilder::LightAmbientDescription>, std::reference_wrapper<const mce::framebuilder::LightDirectionalDescription>, std::reference_wrapper<const mce::framebuilder::gamecomponents::GameplayMetadata>, std::reference_wrapper<const mce::framebuilder::LightPointDescription>, std::reference_wrapper<const mce::framebuilder::ShadowAtlasFrameDescription>, std::reference_wrapper<const mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters>, std::reference_wrapper<const mce::framebuilder::VoxelVolumeDescription>>) = 0;

    virtual void _initiateTDR() = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder
