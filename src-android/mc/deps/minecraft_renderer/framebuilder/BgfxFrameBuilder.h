#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/memory/RingAllocatorContainer.h"
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameBuilder.h"
#include "mc/deps/minecraft_renderer/framebuilder/UITarget.h"
#include "mc/external/bgfx/DLSSOptions.h"
#include "mc/external/render_dragon/frame_object/Frame.h"
#include "mc/external/render_dragon/mesh/Mesh.h"
#include "mc/external/render_dragon/platform/RegistryStatistics.h"
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/platform/Statistics.h"
#include "mc/external/render_dragon/rendering/Camera.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/external/render_dragon/tasks/GraphicsTasks.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class Pool;
namespace Bedrock::Threading { class PerformanceHintSession; }
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::frameobject { struct IntraFrameAllocatorContainer; }
namespace dragon::framerenderer { class BgfxPrimitiveIndexBuffer; }
namespace dragon::framerenderer::modules { struct LocalExposureData; }
namespace dragon::platform { class BgfxContext; }
namespace dragon::rendering { class AverageLuminanceData; }
namespace dragon::rendering { class RayTracingFeatureConfiguration; }
namespace dragon::rendering { class RayTracingResources; }
namespace dragon::rendering { class ScreenSpaceReflectionsData; }
namespace dragon::rendering { class UpscalingCameraData; }
namespace dragon::rendering { class UpscalingData; }
namespace dragon::rendering { class VolumeScatteringData; }
namespace dragon::tasks { class AsyncTasksScope; }
namespace mce::framebuilder { class CausticsManager; }
namespace mce::framebuilder { class DynamicFramePacingController; }
namespace mce::framebuilder { class DynamicResolutionController; }
namespace mce::framebuilder { class LightProbeManager; }
namespace mce::framebuilder { class RenderingFeatureConfiguration; }
namespace mce::framebuilder { struct DeferredResources; }
namespace mce::framebuilder::bgfxbridge { class BgfxFrameExtractor; }
namespace mce::framebuilder::bgfxbridge { struct FancyFrameRendererResources; }
namespace mce::framebuilder::bgfxbridge { struct RTXMinecraftFrameRendererResources; }
namespace mce::framebuilder::bgfxbridge { struct VibrantVisualsFrameRendererResources; }
namespace mce::framebuilder::gamecomponents { struct ActorShadow; }
namespace mce::framebuilder::gamecomponents { struct AlphaTestCracks; }
namespace mce::framebuilder::gamecomponents { struct Atmosphere; }
namespace mce::framebuilder::gamecomponents { struct BlendedCracksObject; }
namespace mce::framebuilder::gamecomponents { struct BlockChanges; }
namespace mce::framebuilder::gamecomponents { struct CloudObject; }
namespace mce::framebuilder::gamecomponents { struct ColorCorrectedUI; }
namespace mce::framebuilder::gamecomponents { struct DeferredWater; }
namespace mce::framebuilder::gamecomponents { struct FadeToBlackEffect; }
namespace mce::framebuilder::gamecomponents { struct FirstPersonPlayerShadowCaster; }
namespace mce::framebuilder::gamecomponents { struct FullScreenOverlayObject; }
namespace mce::framebuilder::gamecomponents { struct FullScreenOverlayObjectDoNotRenderInScreenshot; }
namespace mce::framebuilder::gamecomponents { struct Gameface; }
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
namespace mce::framebuilder::gamecomponents { struct IBLClouds; }
namespace mce::framebuilder::gamecomponents { struct InLevelCubeMapObject; }
namespace mce::framebuilder::gamecomponents { struct InMenuCubeMapObject; }
namespace mce::framebuilder::gamecomponents { struct InsideBlockEffect; }
namespace mce::framebuilder::gamecomponents { struct ItemInHandObject; }
namespace mce::framebuilder::gamecomponents { struct ItemShadow; }
namespace mce::framebuilder::gamecomponents { struct Lead; }
namespace mce::framebuilder::gamecomponents { struct MotionOnly; }
namespace mce::framebuilder::gamecomponents { struct NameTag; }
namespace mce::framebuilder::gamecomponents { struct NonShadowOnlyObject; }
namespace mce::framebuilder::gamecomponents { struct OverlayUI; }
namespace mce::framebuilder::gamecomponents { struct ParticleObject; }
namespace mce::framebuilder::gamecomponents { struct PersistentUIElement; }
namespace mce::framebuilder::gamecomponents { struct PlayerUI; }
namespace mce::framebuilder::gamecomponents { struct PlayerVision; }
namespace mce::framebuilder::gamecomponents { struct SceneObject; }
namespace mce::framebuilder::gamecomponents { struct SceneObjectActors; }
namespace mce::framebuilder::gamecomponents { struct SceneObjectBanners; }
namespace mce::framebuilder::gamecomponents { struct SceneOverlayObject; }
namespace mce::framebuilder::gamecomponents { struct SceneSky; }
namespace mce::framebuilder::gamecomponents { struct SceneSkyObject; }
namespace mce::framebuilder::gamecomponents { struct ScreenshotCapture; }
namespace mce::framebuilder::gamecomponents { struct SelectionOverlayObject; }
namespace mce::framebuilder::gamecomponents { struct ServerGraphicsOverrideParameters; }
namespace mce::framebuilder::gamecomponents { struct ShadowAtlasFrameData; }
namespace mce::framebuilder::gamecomponents { struct ShadowOverlay; }
namespace mce::framebuilder::gamecomponents { struct ShadowVolume; }
namespace mce::framebuilder::gamecomponents { struct SimpleItemShadow; }
namespace mce::framebuilder::gamecomponents { struct SimpleShadow; }
namespace mce::framebuilder::gamecomponents { struct SkyAmbientSamples; }
namespace mce::framebuilder::gamecomponents { struct StaticShadowCaster; }
namespace mce::framebuilder::gamecomponents { struct ThirdPersonItemInHandObject; }
namespace mce::framebuilder::gamecomponents { struct TransparentItemInWorldObject; }
namespace mce::framebuilder::gamecomponents { struct UIMeshCapture; }
namespace mce::framebuilder::gamecomponents { struct UIStructureVolumeCapture; }
namespace mce::framebuilder::gamecomponents { struct VolumetricFog; }
namespace mce::framebuilder::gamecomponents { struct VoxelVolumeBuffers; }
namespace mce::framebuilder::gamecomponents { struct WaterHoleObject; }
// clang-format on

namespace mce::framebuilder {

class BgfxFrameBuilder : public ::mce::framebuilder::FrameBuilder {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::framebuilder::bgfxbridge::BgfxFrameExtractor>> mExtractor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::platform::BgfxContext>> mBgfxContext;
    ::ll::UntypedStorage<8, 320> mIntraFrameAllocatorContainer;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::IntraFrameAllocatorContainer*> mIntraFrameAllocator;
    ::ll::UntypedStorage<8, 8> mNextAllocationScope;
    ::ll::TypedStorage<8, 336, ::dragon::tasks::GraphicsTasks> mGraphicsTasks;
    ::ll::TypedStorage<1, 1, ::dragon::platform::RenderAPI> mPreferredRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::tasks::AsyncTasksScope>> mFrameAsyncTasks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::framerenderer::BgfxPrimitiveIndexBuffer>> mQuadIndexBuffer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::framerenderer::BgfxPrimitiveIndexBuffer>> mSequenceIndexBuffer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::rendering::RayTracingFeatureConfiguration>> mRayTracingFeatureConfiguration;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::rendering::RayTracingResources>> mRayTracingResources;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::framebuilder::DeferredResources>> mDeferredResources;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::rendering::UpscalingData>> mUpscalingData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::UpscalingCameraData>>> mPlayerCameraUpscalingData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::AverageLuminanceData>>> mPlayerAverageLuminanceData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::VolumeScatteringData>>> mVolumeScatteringData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::ScreenSpaceReflectionsData>>> mScreenSpaceReflectionsData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::framerenderer::modules::LocalExposureData>>> mLocalExposureData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<mce::framebuilder::LightProbeManager>>> mLightProbeManagers;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::framebuilder::CausticsManager>> mCausticsManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::framebuilder::RenderingFeatureConfiguration>> mRenderingFeatureConfiguration;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::LightingModels> mDesiredLightingModel;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::LightingModels> mLightingModel;
    ::ll::TypedStorage<1, 1, bool> mIsBVHRequired;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mSunDir;
    ::ll::UntypedStorage<8, 24> mTransactionConsumerFrame;
    ::ll::UntypedStorage<8, 48> mCoreAssetFileLoadCallback;
    ::ll::TypedStorage<8, 24, std::string> mCoreAssetDataDirectory;
    ::ll::UntypedStorage<8, 104> mInternalDragonTextureResourceService;
    ::ll::UntypedStorage<8, 24> mMissingTexture;
    ::ll::TypedStorage<8, 8, ulong> mFrameCounter;
    ::ll::TypedStorage<8, 24, std::map<uchar, glm::vec<3, float, (glm::qualifier)0>>> mPreviousFramePlayerViewWorldOrigins;
    ::ll::TypedStorage<8, 48, std::queue<std::pair<long, std::shared_ptr<dragon::frameobject::Frame<mce::framebuilder::gamecomponents::ActorShadow, mce::framebuilder::gamecomponents::AlphaTestCracks, mce::framebuilder::gamecomponents::Atmosphere, mce::framebuilder::gamecomponents::BlendedCracksObject, mce::framebuilder::gamecomponents::StaticShadowCaster, mce::framebuilder::gamecomponents::DeferredWater, mce::framebuilder::gamecomponents::FadeToBlackEffect, mce::framebuilder::gamecomponents::FullScreenOverlayObject, mce::framebuilder::gamecomponents::FullScreenOverlayObjectDoNotRenderInScreenshot, mce::framebuilder::gamecomponents::Gameface, mce::framebuilder::gamecomponents::GameplayMetadata, mce::framebuilder::gamecomponents::IBLClouds, mce::framebuilder::gamecomponents::CloudObject, mce::framebuilder::gamecomponents::InLevelCubeMapObject, mce::framebuilder::gamecomponents::InMenuCubeMapObject, mce::framebuilder::gamecomponents::InsideBlockEffect, mce::framebuilder::gamecomponents::ItemInHandObject, mce::framebuilder::gamecomponents::ItemShadow, mce::framebuilder::gamecomponents::Lead, mce::framebuilder::gamecomponents::MotionOnly, mce::framebuilder::gamecomponents::OverlayUI, mce::framebuilder::gamecomponents::ParticleObject, mce::framebuilder::gamecomponents::PersistentUIElement, mce::framebuilder::gamecomponents::PlayerUI, mce::framebuilder::gamecomponents::ColorCorrectedUI, mce::framebuilder::gamecomponents::PlayerVision, mce::framebuilder::gamecomponents::FirstPersonPlayerShadowCaster, mce::framebuilder::gamecomponents::SceneObjectActors, mce::framebuilder::gamecomponents::SceneObjectBanners, mce::framebuilder::gamecomponents::SceneObject, mce::framebuilder::gamecomponents::SceneOverlayObject, mce::framebuilder::gamecomponents::SceneSky, mce::framebuilder::gamecomponents::SceneSkyObject, mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters, mce::framebuilder::gamecomponents::SimpleShadow, mce::framebuilder::gamecomponents::SimpleItemShadow, mce::framebuilder::gamecomponents::SelectionOverlayObject, mce::framebuilder::gamecomponents::NonShadowOnlyObject, mce::framebuilder::gamecomponents::ShadowOverlay, mce::framebuilder::gamecomponents::ShadowAtlasFrameData, mce::framebuilder::gamecomponents::ShadowVolume, mce::framebuilder::gamecomponents::ThirdPersonItemInHandObject, mce::framebuilder::gamecomponents::TransparentItemInWorldObject, mce::framebuilder::gamecomponents::VolumetricFog, mce::framebuilder::gamecomponents::VoxelVolumeBuffers, mce::framebuilder::gamecomponents::WaterHoleObject, mce::framebuilder::gamecomponents::UIStructureVolumeCapture, mce::framebuilder::gamecomponents::UIMeshCapture, mce::framebuilder::gamecomponents::ScreenshotCapture, mce::framebuilder::gamecomponents::NameTag, mce::framebuilder::gamecomponents::SkyAmbientSamples, mce::framebuilder::gamecomponents::BlockChanges, mce::framebuilder::bgfxbridge::RTXMinecraftFrameRendererResources, mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources, mce::framebuilder::bgfxbridge::FancyFrameRendererResources>>>, std::deque<std::pair<long, std::shared_ptr<dragon::frameobject::Frame<mce::framebuilder::gamecomponents::ActorShadow, mce::framebuilder::gamecomponents::AlphaTestCracks, mce::framebuilder::gamecomponents::Atmosphere, mce::framebuilder::gamecomponents::BlendedCracksObject, mce::framebuilder::gamecomponents::StaticShadowCaster, mce::framebuilder::gamecomponents::DeferredWater, mce::framebuilder::gamecomponents::FadeToBlackEffect, mce::framebuilder::gamecomponents::FullScreenOverlayObject, mce::framebuilder::gamecomponents::FullScreenOverlayObjectDoNotRenderInScreenshot, mce::framebuilder::gamecomponents::Gameface, mce::framebuilder::gamecomponents::GameplayMetadata, mce::framebuilder::gamecomponents::IBLClouds, mce::framebuilder::gamecomponents::CloudObject, mce::framebuilder::gamecomponents::InLevelCubeMapObject, mce::framebuilder::gamecomponents::InMenuCubeMapObject, mce::framebuilder::gamecomponents::InsideBlockEffect, mce::framebuilder::gamecomponents::ItemInHandObject, mce::framebuilder::gamecomponents::ItemShadow, mce::framebuilder::gamecomponents::Lead, mce::framebuilder::gamecomponents::MotionOnly, mce::framebuilder::gamecomponents::OverlayUI, mce::framebuilder::gamecomponents::ParticleObject, mce::framebuilder::gamecomponents::PersistentUIElement, mce::framebuilder::gamecomponents::PlayerUI, mce::framebuilder::gamecomponents::ColorCorrectedUI, mce::framebuilder::gamecomponents::PlayerVision, mce::framebuilder::gamecomponents::FirstPersonPlayerShadowCaster, mce::framebuilder::gamecomponents::SceneObjectActors, mce::framebuilder::gamecomponents::SceneObjectBanners, mce::framebuilder::gamecomponents::SceneObject, mce::framebuilder::gamecomponents::SceneOverlayObject, mce::framebuilder::gamecomponents::SceneSky, mce::framebuilder::gamecomponents::SceneSkyObject, mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters, mce::framebuilder::gamecomponents::SimpleShadow, mce::framebuilder::gamecomponents::SimpleItemShadow, mce::framebuilder::gamecomponents::SelectionOverlayObject, mce::framebuilder::gamecomponents::NonShadowOnlyObject, mce::framebuilder::gamecomponents::ShadowOverlay, mce::framebuilder::gamecomponents::ShadowAtlasFrameData, mce::framebuilder::gamecomponents::ShadowVolume, mce::framebuilder::gamecomponents::ThirdPersonItemInHandObject, mce::framebuilder::gamecomponents::TransparentItemInWorldObject, mce::framebuilder::gamecomponents::VolumetricFog, mce::framebuilder::gamecomponents::VoxelVolumeBuffers, mce::framebuilder::gamecomponents::WaterHoleObject, mce::framebuilder::gamecomponents::UIStructureVolumeCapture, mce::framebuilder::gamecomponents::UIMeshCapture, mce::framebuilder::gamecomponents::ScreenshotCapture, mce::framebuilder::gamecomponents::NameTag, mce::framebuilder::gamecomponents::SkyAmbientSamples, mce::framebuilder::gamecomponents::BlockChanges, mce::framebuilder::bgfxbridge::RTXMinecraftFrameRendererResources, mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources, mce::framebuilder::bgfxbridge::FancyFrameRendererResources>>>>>> mInFlightFrames;
    ::ll::UntypedStorage<8, 8> mFramePool;
    ::ll::TypedStorage<1, 1, bool> m_enabledVSync;
    ::ll::TypedStorage<2, 2, ushort> mScreenTileSize;
    ::ll::TypedStorage<8, 88, ::dragon::mesh::Mesh> mScreenTiles;
    ::ll::UntypedStorage<2, 4> mResolution;
    ::ll::UntypedStorage<2, 4> mClientResolution;
    ::ll::TypedStorage<4, 16, ::bgfx::DLSSOptions> mUpscalingOptions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::framebuilder::DynamicFramePacingController>> mDynamicFramePacingController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::framebuilder::DynamicResolutionController>> mDynamicResolutionController;
    ::ll::UntypedStorage<8, 24> mLastFrameTimings;
    ::ll::TypedStorage<8, 8, double> mGpuTimeAccumulated;
    ::ll::TypedStorage<4, 4, uint> mGpuTimeHitCount;
    ::ll::TypedStorage<4, 4, int> mFrameRateLimit;
    ::ll::TypedStorage<4, 4, float> mUnthrottledMainThreadCpuTimeMs;
    ::ll::TypedStorage<8, 256, std::optional<dragon::platform::Statistics>> mPreviousFrameStats;
    ::ll::TypedStorage<4, 12, ::dragon::platform::RegistryStatistics> mRegistryStats;
    ::ll::TypedStorage<1, 1, bool> mUpdateRegistryStats;
    ::ll::TypedStorage<1, 1, bool> m_enabledMsaa;
    ::ll::TypedStorage<1, 1, uchar> mRequestedMsaaLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Threading::PerformanceHintSession>> mMainThreadPerformanceHintSession;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Threading::PerformanceHintSession>> mRenderThreadPerformanceHintSession;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasRenderOperations>> mAtlas;
    ::ll::TypedStorage<1, 1, bool> mMaterialReloadQueued;
    ::ll::TypedStorage<1, 1, bool> mDynamicTextureHandlesEnabled;
    ::ll::TypedStorage<8, 24, std::vector<dragon::rendering::Camera>> mDebugCameras;
    ::ll::TypedStorage<8, 56, std::optional<mce::framebuilder::bgfxbridge::UITarget>> mPersistentUiView;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder
