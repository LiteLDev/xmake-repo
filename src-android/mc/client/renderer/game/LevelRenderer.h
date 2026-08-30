#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/RenderChunkCoordinator.h"
#include "mc/client/renderer/debug/DebugRenderer.h"
#include "mc/client/renderer/game/LevelBuilder.h"
#include "mc/client/renderer/game/ShadowCascadeState.h"
#include "mc/client/renderer/scripting/Renderer.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderDispatcher;
class ActorResourceDefinitionGroup;
class Block;
class BlockActorRenderDispatcher;
class BlockPos;
class BlockSource;
class BlockTessellator;
class ClientFrameUpdateContext;
class ClientLevel;
class DataDrivenRenderer;
class DataDrivenRendererRegistry;
class DataDrivenRendererV2RequiredData;
class GameRenderer;
class GeometryGroup;
class HashedString;
class IClientInstance;
class IRenderChunkGarbageCollection;
class LevelChunk;
class LevelRendererPlayer;
class LevelRendererProxy;
class LevelRendererShadowCamera;
class MinecraftGameplayGraphicsResources;
class OptionRegistry;
class ParticleEngine;
class ParticleSystemEngine;
class PlayerRenderView;
class RenderChunkShared;
class RuntimeLocalLightingConfig;
class ScreenContext;
class SeasonsRenderer;
class SoundMapping;
class SoundPlayerInterface;
class TaskGroup;
class Tessellator;
class TextureAtlas;
class TextureShiftManager;
class UniversalEntityRenderer;
struct ActorBlockSyncMessage;
struct DataDrivenRendererContinuousData;
struct FrameRenderObject;
struct LevelRenderPreRenderUpdateParameters;
struct ScreenshotOptions;
namespace ClientBlockPipeline { class SchematicsRepository; }
namespace LightPropagation { class LightPropagationCoordinator; }
namespace LightPropagation { class LightVolumeManager; }
namespace PointLighting { class PointLightCoordinator; }
namespace PointLighting { class PointLightShadowProbeManager; }
namespace Scripting::RenderHelper { class RendererInterface; }
namespace cg { class ImageBuffer; }
namespace dragon::atlas { class IAtlasUserOperations; }
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
namespace mce { struct TextureResourceService; }
// clang-format on

class LevelRenderer : public ::LevelListener, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 40> mRenderChunkCoordinators;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PointLighting::PointLightCoordinator>> mPointLightCoordinator;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PointLighting::PointLightShadowProbeManager>> mPointLightShadowProbeManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPointLightOptionSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LightPropagation::LightPropagationCoordinator>> mLightPropagationCoordinator;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mShadowCylinder;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mShadowOverlayCube;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mShadowDisc;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mSkyMesh;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mStarsMesh;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mEndSkyMesh;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mSunMesh;
    ::ll::TypedStorage<8, 128, std::shared_ptr<mce::Mesh>[8]> mMoonMesh;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mNameplateBackgroundMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mAtlasTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mBrightnessTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mSunTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mSunTexVibrantVisuals;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mMoonTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mEndSkyTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mEndFlashTex;
    ::ll::TypedStorage<8, 24, std::vector<mce::TexturePtr>> mCrackFrames;
    ::ll::UntypedStorage<1, 8> mDebugRenderer;
    ::ll::TypedStorage<8, 152, ::Scripting::RenderHelper::Renderer> mScriptDebugRenderer;
    ::ll::TypedStorage<8, 8, ::Tick> mTicks;
    ::ll::TypedStorage<8, 8, ::BlockActorRenderDispatcher&> mBlockEntityRenderDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTessellator>> mLocalRenderer;
    ::ll::UntypedStorage<8, 24> mParticleEngine;
    ::ll::UntypedStorage<8, 24> mParticleSystemEngine;
    ::ll::UntypedStorage<8, 16> mGeometryEditorGui;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mSyncTaskGroup;
    ::ll::TypedStorage<8, 8, ::GameRenderer&> mGameRenderer;
    ::ll::TypedStorage<8, 8, ::ClientLevel&> mLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    ::ll::UntypedStorage<1, 32> mLocalUser;
    ::ll::UntypedStorage<8, 48> mReleaseParticleSystemInterfaceProxyCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelRendererPlayer>> mLevelRendererPlayer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelRendererShadowCamera>> mLevelRendererShadowCamera;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelRendererShadowCamera>> mLevelRendererCloudShadowCamera;
    ::ll::TypedStorage<4, 4, ::ShadowCascadeState> mShadowCascadeState;
    ::ll::TypedStorage<1, 1, bool> mTextureShiftsEnabled;
    ::ll::TypedStorage<8, 1440, ::LevelBuilder> mLevelBuilder;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelRendererProxy>> mProxy;
    ::ll::TypedStorage<4, 16, ::mce::Color> mClearBufferColor;
    ::ll::TypedStorage<8, 16, std::weak_ptr<PlayerRenderView>> mPlayerView;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DataDrivenRendererV2RequiredData>> mDataDrivenRendererV2RequiredData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<UniversalEntityRenderer>> mUniversalEntityRenderer;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRenderer& operator=(LevelRenderer const&);
    LevelRenderer(LevelRenderer const&);
    LevelRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelRenderer();

    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    virtual void onChunkUnloaded(::LevelChunk&);

    virtual void takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>);

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onDeviceLost();

    virtual void onLowMemory(::LowMemorySeverity);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelRenderer(
        ::IClientInstance&,
        ::ClientLevel&,
        std::shared_ptr<OptionRegistry>,
        std::shared_ptr<mce::TextureGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const TextureAtlas>> const&,
        ::WeakEntityRef,
        ::GameRenderer&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&,
        ::SoundMapping const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const TextureShiftManager>>&,
        std::weak_ptr<dragon::atlas::IAtlasUserOperations>
    );

    MCNAPI void _createMeshes(::Tessellator&);

    MCNAPI void _initDataDrivenRendererResources(
        std::unordered_map<HashedString, std::shared_ptr<DataDrivenRenderer>> const&,
        ::MinecraftGameplayGraphicsResources&
    );

    MCNAPI void _setLevelRendererCameras();

    MCNAPI void endFrame(::mce::TextureResourceService&);

    MCNAPI void frameUpdate(::ClientFrameUpdateContext&);

    MCNAPI ::BlockTessellator& getBlockRenderer();

    MCNAPI ::mce::Color const& getClearBufferColor() const;

    MCNAPI ::DataDrivenRendererV2RequiredData* getDataDrivenRendererV2RequiredData();

    MCNAPI std::shared_ptr<ActorRenderDispatcher> getEntityRenderDispatcher();

    MCNAPI std::shared_ptr<LevelRendererShadowCamera> getLevelRendererCloudShadowCamera();

    MCNAPI ::LevelRendererPlayer const& getLevelRendererPlayer() const;

    MCNAPI ::LevelRendererPlayer& getLevelRendererPlayer();

    MCNAPI std::shared_ptr<LevelRendererShadowCamera> getLevelRendererShadowCamera();

    MCNAPI std::weak_ptr<LightPropagation::LightPropagationCoordinator> getLightPropagationCoordinator();

    MCNAPI std::weak_ptr<LightPropagation::LightVolumeManager> getLightVolumeManager();

    MCNAPI std::weak_ptr<const LightPropagation::LightVolumeManager> getLightVolumeManagerConst() const;

    MCNAPI ::ParticleEngine& getParticleEngine() const;

    MCNAPI ::ParticleSystemEngine& getParticleSystemEngine() const;

    MCNAPI ::StackRefResult<RenderChunkCoordinator> getRenderChunkCoordinator(::DimensionType);

    MCNAPI ::IRenderChunkGarbageCollection& getRenderChunkGarbageCollection();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ClientBlockPipeline::SchematicsRepository>>
    getSchematicsRepository() const;

    MCNAPI ::Scripting::RenderHelper::RendererInterface& getScriptRendererInterface();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SeasonsRenderer>> getSeasonsRenderer();

    MCNAPI bool getTextureShiftsEnabled() const;

    MCNAPI ::Tick const& getTicks() const;

    MCNAPI ::DataDrivenRendererContinuousData* getV2ContinuousData();

    MCNAPI ::DataDrivenRendererRegistry const* getV2DataDrivenRendererRegistry() const;

    MCNAPI bool getV2ShouldRenderActorsWithAttachables() const;

    MCNAPI void onDimensionChanged();

    MCNAPI void onOptionsChanged();

    MCNAPI void onWillChangeDimension();

    MCNAPI void preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    MCNAPI void rebuildAllDDRv2Geometry();

    MCNAPI void rebuildAllRenderChunkGeometry();

    MCNAPI void reinit(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const TextureAtlas>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>> const&
    );

    MCNAPI void relightAllRenderChunkGeometry();

    MCNAPI void renderLevel(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI void resetCameras();

    MCNAPI void resetLightVolumeManager(std::weak_ptr<const RuntimeLocalLightingConfig>);

    MCNAPI void resetLightingConfig(std::weak_ptr<const RuntimeLocalLightingConfig>);

    MCNAPI void resetPointLighting(std::weak_ptr<dragon::atlas::IAtlasUserOperations>);

    MCNAPI void tickLevelRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& Z_FAR_MIN();

    MCNAPI static float const& Z_NEAR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        ::ClientLevel&,
        std::shared_ptr<OptionRegistry>,
        std::shared_ptr<mce::TextureGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const TextureAtlas>> const&,
        ::WeakEntityRef,
        ::GameRenderer&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&,
        ::SoundMapping const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const TextureShiftManager>>&,
        std::weak_ptr<dragon::atlas::IAtlasUserOperations>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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

    MCNAPI void $onChunkUnloaded(::LevelChunk&);

    MCNAPI void $takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
    );

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
