#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/Frame.h"
#include "mc/external/render_dragon/frame_renderer/GenericPassContext.h"

// auto generated forward declare list
// clang-format off
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

namespace mce::framebuilder::bgfxbridge {

struct DrawContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mCubeMap;
    ::ll::UntypedStorage<8, 168> mScene;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DrawContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
