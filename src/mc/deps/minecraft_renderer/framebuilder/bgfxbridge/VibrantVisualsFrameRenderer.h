#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/ActorShadow.h"
#include "mc/deps/minecraft_renderer/framebuilder/AlphaTestCracks.h"
#include "mc/deps/minecraft_renderer/framebuilder/Atmosphere.h"
#include "mc/deps/minecraft_renderer/framebuilder/BlendedCracksObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/BlockChanges.h"
#include "mc/deps/minecraft_renderer/framebuilder/CloudObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/ColorCorrectedUI.h"
#include "mc/deps/minecraft_renderer/framebuilder/DeferredWater.h"
#include "mc/deps/minecraft_renderer/framebuilder/FadeToBlackEffect.h"
#include "mc/deps/minecraft_renderer/framebuilder/FancyFrameRendererResources.h"
#include "mc/deps/minecraft_renderer/framebuilder/FirstPersonPlayerShadowCaster.h"
#include "mc/deps/minecraft_renderer/framebuilder/FullScreenOverlayObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/FullScreenOverlayObjectDoNotRenderInScreenshot.h"
#include "mc/deps/minecraft_renderer/framebuilder/Gameface.h"
#include "mc/deps/minecraft_renderer/framebuilder/GameplayMetadata.h"
#include "mc/deps/minecraft_renderer/framebuilder/IBLClouds.h"
#include "mc/deps/minecraft_renderer/framebuilder/InLevelCubeMapObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/InMenuCubeMapObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/InsideBlockEffect.h"
#include "mc/deps/minecraft_renderer/framebuilder/ItemInHandObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/ItemShadow.h"
#include "mc/deps/minecraft_renderer/framebuilder/Lead.h"
#include "mc/deps/minecraft_renderer/framebuilder/MotionOnly.h"
#include "mc/deps/minecraft_renderer/framebuilder/NameTag.h"
#include "mc/deps/minecraft_renderer/framebuilder/NonShadowOnlyObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/OverlayUI.h"
#include "mc/deps/minecraft_renderer/framebuilder/ParticleObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/PersistentUIElement.h"
#include "mc/deps/minecraft_renderer/framebuilder/PlayerUI.h"
#include "mc/deps/minecraft_renderer/framebuilder/PlayerVision.h"
#include "mc/deps/minecraft_renderer/framebuilder/RTXMinecraftFrameRendererResources.h"
#include "mc/deps/minecraft_renderer/framebuilder/SceneObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/SceneObjectActors.h"
#include "mc/deps/minecraft_renderer/framebuilder/SceneObjectBanners.h"
#include "mc/deps/minecraft_renderer/framebuilder/SceneOverlayObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/SceneSky.h"
#include "mc/deps/minecraft_renderer/framebuilder/SceneSkyObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/ScreenshotCapture.h"
#include "mc/deps/minecraft_renderer/framebuilder/SelectionOverlayObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/ServerGraphicsOverrideParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowAtlasFrameData.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowOverlay.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowVolume.h"
#include "mc/deps/minecraft_renderer/framebuilder/SimpleItemShadow.h"
#include "mc/deps/minecraft_renderer/framebuilder/SimpleShadow.h"
#include "mc/deps/minecraft_renderer/framebuilder/SkyAmbientSamples.h"
#include "mc/deps/minecraft_renderer/framebuilder/StaticShadowCaster.h"
#include "mc/deps/minecraft_renderer/framebuilder/ThirdPersonItemInHandObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/TransparentItemInWorldObject.h"
#include "mc/deps/minecraft_renderer/framebuilder/UIMeshCapture.h"
#include "mc/deps/minecraft_renderer/framebuilder/UIStructureVolumeCapture.h"
#include "mc/deps/minecraft_renderer/framebuilder/VibrantVisualsFrameRendererResources.h"
#include "mc/deps/minecraft_renderer/framebuilder/VolumetricFog.h"
#include "mc/deps/minecraft_renderer/framebuilder/VoxelVolumeBuffers.h"
#include "mc/deps/minecraft_renderer/framebuilder/WaterHoleObject.h"
#include "mc/external/render_dragon/frame_graph/BindFramebufferDepth.h"
#include "mc/external/render_dragon/frame_graph/Declarator.h"
#include "mc/external/render_dragon/frame_object/Frame.h"
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"
#include "mc/external/render_dragon/rendering/Camera.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { struct FrameExplicitTarget; }
namespace dragon::tasks { class GraphicsTasks; }
namespace mce::framebuilder { struct PerCascadeRenderingParameters; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
class VibrantVisualsFrameRenderer
: public ::mce::framebuilder::bgfxbridge::GameBase<
      dragon::framerenderer::RenderContext,
      mce::framebuilder::gamecomponents::ActorShadow,
      mce::framebuilder::gamecomponents::AlphaTestCracks,
      mce::framebuilder::gamecomponents::Atmosphere,
      mce::framebuilder::gamecomponents::BlendedCracksObject,
      mce::framebuilder::gamecomponents::StaticShadowCaster,
      mce::framebuilder::gamecomponents::DeferredWater,
      mce::framebuilder::gamecomponents::FadeToBlackEffect,
      mce::framebuilder::gamecomponents::FullScreenOverlayObject,
      mce::framebuilder::gamecomponents::FullScreenOverlayObjectDoNotRenderInScreenshot,
      mce::framebuilder::gamecomponents::Gameface,
      mce::framebuilder::gamecomponents::GameplayMetadata,
      mce::framebuilder::gamecomponents::IBLClouds,
      mce::framebuilder::gamecomponents::CloudObject,
      mce::framebuilder::gamecomponents::InLevelCubeMapObject,
      mce::framebuilder::gamecomponents::InMenuCubeMapObject,
      mce::framebuilder::gamecomponents::InsideBlockEffect,
      mce::framebuilder::gamecomponents::ItemInHandObject,
      mce::framebuilder::gamecomponents::ItemShadow,
      mce::framebuilder::gamecomponents::Lead,
      mce::framebuilder::gamecomponents::MotionOnly,
      mce::framebuilder::gamecomponents::OverlayUI,
      mce::framebuilder::gamecomponents::ParticleObject,
      mce::framebuilder::gamecomponents::PersistentUIElement,
      mce::framebuilder::gamecomponents::PlayerUI,
      mce::framebuilder::gamecomponents::ColorCorrectedUI,
      mce::framebuilder::gamecomponents::PlayerVision,
      mce::framebuilder::gamecomponents::FirstPersonPlayerShadowCaster,
      mce::framebuilder::gamecomponents::SceneObjectActors,
      mce::framebuilder::gamecomponents::SceneObjectBanners,
      mce::framebuilder::gamecomponents::SceneObject,
      mce::framebuilder::gamecomponents::SceneOverlayObject,
      mce::framebuilder::gamecomponents::SceneSky,
      mce::framebuilder::gamecomponents::SceneSkyObject,
      mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters,
      mce::framebuilder::gamecomponents::SimpleShadow,
      mce::framebuilder::gamecomponents::SimpleItemShadow,
      mce::framebuilder::gamecomponents::SelectionOverlayObject,
      mce::framebuilder::gamecomponents::NonShadowOnlyObject,
      mce::framebuilder::gamecomponents::ShadowOverlay,
      mce::framebuilder::gamecomponents::ShadowAtlasFrameData,
      mce::framebuilder::gamecomponents::ShadowVolume,
      mce::framebuilder::gamecomponents::ThirdPersonItemInHandObject,
      mce::framebuilder::gamecomponents::TransparentItemInWorldObject,
      mce::framebuilder::gamecomponents::VolumetricFog,
      mce::framebuilder::gamecomponents::VoxelVolumeBuffers,
      mce::framebuilder::gamecomponents::WaterHoleObject,
      mce::framebuilder::gamecomponents::UIStructureVolumeCapture,
      mce::framebuilder::gamecomponents::UIMeshCapture,
      mce::framebuilder::gamecomponents::ScreenshotCapture,
      mce::framebuilder::gamecomponents::NameTag,
      mce::framebuilder::gamecomponents::SkyAmbientSamples,
      mce::framebuilder::gamecomponents::BlockChanges,
      mce::framebuilder::bgfxbridge::RTXMinecraftFrameRendererResources,
      mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources,
      mce::framebuilder::bgfxbridge::FancyFrameRendererResources>::Renderer {
#else // @header-generator platform
class VibrantVisualsFrameRenderer {
#endif // @header-generator platform
public:
    // VibrantVisualsFrameRenderer inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ShadowMapBaseData;
#else // @header-generator platform
#endif // @header-generator platform
    struct CascadedShadowMapData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ShadowMapBaseData;
#endif // @header-generator platform
    struct ShadowMapData;
    // clang-format on

    // VibrantVisualsFrameRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ShadowMapBaseData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 280, ::dragon::rendering::Camera> mCamera;
        ::ll::TypedStorage<8, 8, std::reference_wrapper<const mce::framebuilder::PerCascadeRenderingParameters>> mRenderingParameters;
        ::ll::TypedStorage<1, 1, bool> mShouldRender;
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
    struct CascadedShadowMapData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        ShadowMapBaseData& operator=(ShadowMapBaseData const&);
        ShadowMapBaseData(ShadowMapBaseData const&);
        ShadowMapBaseData();
    };
#else // @header-generator platform
    struct ShadowMapBaseData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct CascadedShadowMapData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<2, 2, ushort> mResolution;
        ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::VibrantVisualsFrameRenderer::ShadowMapBaseData>> mCascades;
        ::ll::UntypedStorage<8, 24> mDepthMaps;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CascadedShadowMapData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ShadowMapData : public ::mce::framebuilder::bgfxbridge::VibrantVisualsFrameRenderer::ShadowMapBaseData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mResolution;
        ::ll::UntypedStorage<8, 16>      mDepthMap;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShadowMapData& operator=(ShadowMapData const&);
        ShadowMapData(ShadowMapData const&);
        ShadowMapData();
    };

public:
    // prevent constructor by default
    VibrantVisualsFrameRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VibrantVisualsFrameRenderer();

    virtual void frameImpl(::dragon::framegraph::Declarator<dragon::framerenderer::RenderContext>&, ::dragon::frameobject::Frame<mce::framebuilder::gamecomponents::ActorShadow, mce::framebuilder::gamecomponents::AlphaTestCracks, mce::framebuilder::gamecomponents::Atmosphere, mce::framebuilder::gamecomponents::BlendedCracksObject, mce::framebuilder::gamecomponents::StaticShadowCaster, mce::framebuilder::gamecomponents::DeferredWater, mce::framebuilder::gamecomponents::FadeToBlackEffect, mce::framebuilder::gamecomponents::FullScreenOverlayObject, mce::framebuilder::gamecomponents::FullScreenOverlayObjectDoNotRenderInScreenshot, mce::framebuilder::gamecomponents::Gameface, mce::framebuilder::gamecomponents::GameplayMetadata, mce::framebuilder::gamecomponents::IBLClouds, mce::framebuilder::gamecomponents::CloudObject, mce::framebuilder::gamecomponents::InLevelCubeMapObject, mce::framebuilder::gamecomponents::InMenuCubeMapObject, mce::framebuilder::gamecomponents::InsideBlockEffect, mce::framebuilder::gamecomponents::ItemInHandObject, mce::framebuilder::gamecomponents::ItemShadow, mce::framebuilder::gamecomponents::Lead, mce::framebuilder::gamecomponents::MotionOnly, mce::framebuilder::gamecomponents::OverlayUI, mce::framebuilder::gamecomponents::ParticleObject, mce::framebuilder::gamecomponents::PersistentUIElement, mce::framebuilder::gamecomponents::PlayerUI, mce::framebuilder::gamecomponents::ColorCorrectedUI, mce::framebuilder::gamecomponents::PlayerVision, mce::framebuilder::gamecomponents::FirstPersonPlayerShadowCaster, mce::framebuilder::gamecomponents::SceneObjectActors, mce::framebuilder::gamecomponents::SceneObjectBanners, mce::framebuilder::gamecomponents::SceneObject, mce::framebuilder::gamecomponents::SceneOverlayObject, mce::framebuilder::gamecomponents::SceneSky, mce::framebuilder::gamecomponents::SceneSkyObject, mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters, mce::framebuilder::gamecomponents::SimpleShadow, mce::framebuilder::gamecomponents::SimpleItemShadow, mce::framebuilder::gamecomponents::SelectionOverlayObject, mce::framebuilder::gamecomponents::NonShadowOnlyObject, mce::framebuilder::gamecomponents::ShadowOverlay, mce::framebuilder::gamecomponents::ShadowAtlasFrameData, mce::framebuilder::gamecomponents::ShadowVolume, mce::framebuilder::gamecomponents::ThirdPersonItemInHandObject, mce::framebuilder::gamecomponents::TransparentItemInWorldObject, mce::framebuilder::gamecomponents::VolumetricFog, mce::framebuilder::gamecomponents::VoxelVolumeBuffers, mce::framebuilder::gamecomponents::WaterHoleObject, mce::framebuilder::gamecomponents::UIStructureVolumeCapture, mce::framebuilder::gamecomponents::UIMeshCapture, mce::framebuilder::gamecomponents::ScreenshotCapture, mce::framebuilder::gamecomponents::NameTag, mce::framebuilder::gamecomponents::SkyAmbientSamples, mce::framebuilder::gamecomponents::BlockChanges, mce::framebuilder::bgfxbridge::RTXMinecraftFrameRendererResources, mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources, mce::framebuilder::bgfxbridge::FancyFrameRendererResources> const&, std::optional<dragon::framerenderer::FrameExplicitTarget>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VibrantVisualsFrameRenderer(::dragon::tasks::GraphicsTasks&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::tasks::GraphicsTasks&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $frameImpl(
        ::dragon::framegraph::Declarator<dragon::framerenderer::RenderContext>&,
        ::dragon::frameobject::Frame<
            mce::framebuilder::gamecomponents::ActorShadow,
            mce::framebuilder::gamecomponents::AlphaTestCracks,
            mce::framebuilder::gamecomponents::Atmosphere,
            mce::framebuilder::gamecomponents::BlendedCracksObject,
            mce::framebuilder::gamecomponents::StaticShadowCaster,
            mce::framebuilder::gamecomponents::DeferredWater,
            mce::framebuilder::gamecomponents::FadeToBlackEffect,
            mce::framebuilder::gamecomponents::FullScreenOverlayObject,
            mce::framebuilder::gamecomponents::FullScreenOverlayObjectDoNotRenderInScreenshot,
            mce::framebuilder::gamecomponents::Gameface,
            mce::framebuilder::gamecomponents::GameplayMetadata,
            mce::framebuilder::gamecomponents::IBLClouds,
            mce::framebuilder::gamecomponents::CloudObject,
            mce::framebuilder::gamecomponents::InLevelCubeMapObject,
            mce::framebuilder::gamecomponents::InMenuCubeMapObject,
            mce::framebuilder::gamecomponents::InsideBlockEffect,
            mce::framebuilder::gamecomponents::ItemInHandObject,
            mce::framebuilder::gamecomponents::ItemShadow,
            mce::framebuilder::gamecomponents::Lead,
            mce::framebuilder::gamecomponents::MotionOnly,
            mce::framebuilder::gamecomponents::OverlayUI,
            mce::framebuilder::gamecomponents::ParticleObject,
            mce::framebuilder::gamecomponents::PersistentUIElement,
            mce::framebuilder::gamecomponents::PlayerUI,
            mce::framebuilder::gamecomponents::ColorCorrectedUI,
            mce::framebuilder::gamecomponents::PlayerVision,
            mce::framebuilder::gamecomponents::FirstPersonPlayerShadowCaster,
            mce::framebuilder::gamecomponents::SceneObjectActors,
            mce::framebuilder::gamecomponents::SceneObjectBanners,
            mce::framebuilder::gamecomponents::SceneObject,
            mce::framebuilder::gamecomponents::SceneOverlayObject,
            mce::framebuilder::gamecomponents::SceneSky,
            mce::framebuilder::gamecomponents::SceneSkyObject,
            mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters,
            mce::framebuilder::gamecomponents::SimpleShadow,
            mce::framebuilder::gamecomponents::SimpleItemShadow,
            mce::framebuilder::gamecomponents::SelectionOverlayObject,
            mce::framebuilder::gamecomponents::NonShadowOnlyObject,
            mce::framebuilder::gamecomponents::ShadowOverlay,
            mce::framebuilder::gamecomponents::ShadowAtlasFrameData,
            mce::framebuilder::gamecomponents::ShadowVolume,
            mce::framebuilder::gamecomponents::ThirdPersonItemInHandObject,
            mce::framebuilder::gamecomponents::TransparentItemInWorldObject,
            mce::framebuilder::gamecomponents::VolumetricFog,
            mce::framebuilder::gamecomponents::VoxelVolumeBuffers,
            mce::framebuilder::gamecomponents::WaterHoleObject,
            mce::framebuilder::gamecomponents::UIStructureVolumeCapture,
            mce::framebuilder::gamecomponents::UIMeshCapture,
            mce::framebuilder::gamecomponents::ScreenshotCapture,
            mce::framebuilder::gamecomponents::NameTag,
            mce::framebuilder::gamecomponents::SkyAmbientSamples,
            mce::framebuilder::gamecomponents::BlockChanges,
            mce::framebuilder::bgfxbridge::RTXMinecraftFrameRendererResources,
            mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources,
            mce::framebuilder::bgfxbridge::FancyFrameRendererResources> const&,
        std::optional<dragon::framerenderer::FrameExplicitTarget>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ShadowMapData {};
#endif // @header-generator platform
};

} // namespace mce::framebuilder::bgfxbridge
