#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/LevelRendererCameraType.h"
#include "mc/client/model/models/SortedMeshDrawList.h"
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/client/renderer/HistoricalFrameTimes.h"
#include "mc/client/renderer/culling/FrustumCuller.h"
#include "mc/client/renderer/game/ActorRenderCandidates.h"
#include "mc/client/renderer/game/OccluderFace.h"
#include "mc/client/renderer/game/ResolvedFogVolumetricCoefficientSetting.h"
#include "mc/client/renderer/game/ResolvedFogVolumetricDensitySetting.h"
#include "mc/client/renderer/game/ResolvedFogVolumetricHenyeyGreensteinGSetting.h"
#include "mc/client/renderer/game/TerrainMaterialVariationManager.h"
#include "mc/client/world/level/fog/FogDistanceSetting.h"
#include "mc/deps/core/math/FrustumEdges.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/minecraft_renderer/game/FrustumCullerType.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/Camera.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/GridArea.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/FogDefinition.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorTerrainInterlockData;
class BaseActorRenderContext;
class BiomeBlendingMapRenderer;
class BlockSource;
class BlockType;
class CameraAimAssistRenderer;
class ClientFrameUpdateContext;
class DebugRenderer;
class Dimension;
class DimensionHeightRange;
class FogDefinitionRegistry;
class FogManager;
class Font;
class IClientInstance;
class IConstBlockSource;
class IVanillaRenderBlockActorComponent;
class Level;
class LevelBuilder;
class LevelCullerBase;
class LevelRenderer;
class LevelRendererCameraProxy;
class LocalPlayer;
class Player;
class RenderChunkInstanced;
class RenderChunkShared;
class ResourcePackManager;
class ScreenContext;
class WeatherRenderer;
struct BaseSceneDirectionalLightRenderData;
struct Bounds;
struct ChunkRenderObjectCollection;
struct CrackRenderObjectCollection;
struct DimensionType;
struct FogTransitionSetting;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct SkyRenderObject;
struct TerrainLayer;
struct ViewRenderData;
struct ViewRenderObject;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
namespace mce { struct BufferResourceService; }
// clang-format on

class LevelRendererCamera {
public:
    // LevelRendererCamera inner types declare
    // clang-format off
    struct FogBrightnessPair;
    struct RenderChunkPosBounds;
    struct RainState;
    struct FogBrightnessParams;
    struct PlayerStateParams;
    struct LimitedActorRenderParams;
    struct LevelRendererDebugInformation;
    // clang-format on

    // LevelRendererCamera inner types define
    struct FogBrightnessPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mCurrentValue;
        ::ll::TypedStorage<4, 4, float> mOriginalValue;
        // NOLINTEND
    };

    struct RenderChunkPosBounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::SubChunkPos> min;
        ::ll::TypedStorage<4, 12, ::SubChunkPos> max;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderChunkPosBounds& operator=(RenderChunkPosBounds const&);
    };

    struct RainState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>              mRainPosX;
        ::ll::TypedStorage<4, 4, float>              mRainPosY;
        ::ll::TypedStorage<4, 4, float>              mRainPosZ;
        ::ll::TypedStorage<4, 4, int>                mRainPosSamples;
        ::ll::TypedStorage<4, 4, int>                mRainCount;
        ::ll::TypedStorage<8, 24, std::vector<Vec3>> mSmokeParticles;
        ::ll::TypedStorage<8, 24, std::vector<Vec3>> mRainSplashParticles;
        // NOLINTEND

    public:
        // prevent constructor by default
        RainState& operator=(RainState const&);
        RainState(RainState const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RainState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FogBrightnessParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                     mIsInEnd;
        ::ll::TypedStorage<1, 1, bool>                                     mCameraUnderLiquid;
        ::ll::TypedStorage<4, 8, ::LevelRendererCamera::FogBrightnessPair> mFogBrightnessPair;
        ::ll::TypedStorage<4, 12, ::BlockPos>                              mCameraPos;
        ::ll::TypedStorage<8, 8, ::IConstBlockSource*>                     mBlockSource;
        // NOLINTEND
    };

    struct PlayerStateParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::LocalPlayer*> mLocalPlayer;
        ::ll::TypedStorage<8, 8, ::Actor const*> mLocalPlayerVehicle;
        ::ll::TypedStorage<1, 1, bool>           mPlayerHasPassengers;
        ::ll::TypedStorage<1, 1, bool>           mShouldRenderPlayerModel;
        ::ll::TypedStorage<1, 1, bool>           mIsSpectator;
        // NOLINTEND
    };

    struct LimitedActorRenderParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ActorType const> mActorType;
        ::ll::TypedStorage<4, 4, int const>         mMaxCount;
        ::ll::TypedStorage<4, 4, int>               mCurrentCount;
        // NOLINTEND
    };

    struct LevelRendererDebugInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<FrustumEdges>>               lastFrusumEdges;
        ::ll::TypedStorage<8, 24, std::vector<mce::Camera>>                lastCascadeCameras;
        ::ll::TypedStorage<8, 536, ::mce::Camera>                          lastDebugCamera;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mReferenceForwardVector;
        ::ll::TypedStorage<8, 24, std::vector<FrustumEdges>>               frusumEdges;
        ::ll::TypedStorage<8, 24, std::vector<mce::Camera>>                cascadeCameras;
        ::ll::TypedStorage<4, 4, int>                                      renderDebugCamera;
        // NOLINTEND
    };

    using ActorRenderQueue = ::brstd::flat_map<
        gsl::not_null<Actor*>,
        ShadowContext,
        std::less<gsl::not_null<Actor*>>,
        std::vector<gsl::not_null<Actor*>>,
        std::vector<ShadowContext>>;

    using ActorList = std::vector<Actor*>;

    using LevelRendererArea = ::GridArea<std::shared_ptr<RenderChunkInstanced>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong> mChunkQueueSize;
    ::ll::UntypedStorage<8, 408> mTerrainChunkQueueSize;
    ::ll::TypedStorage<8, 24, std::vector<OccluderFace>> mChunkOccluders;
    ::ll::TypedStorage<8, 24, ::ActorRenderCandidates> mActorRenderCandidates;
    ::ll::UntypedStorage<8, 48> mActorRenderQueue;
    ::ll::TypedStorage<8, 24, ::SortedMeshDrawList> mSortedMeshDrawList;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>> mRenderComponentRenderQueue;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>> mRenderComponentRenderAlphaQueue;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>> mRenderComponentShadowQueue;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> shadowVolumeBack;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> shadowVolumeFront;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> shadowOverlayMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> starsMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> skyPlaneMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> sunMoonMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> endSkyMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> cloudMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> wireframeMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mCubemapMaterial;
    ::ll::TypedStorage<8, 24, std::vector<mce::TexturePtr>> mCubemapTextures;
    ::ll::UntypedStorage<1, 24> mCubemapTexture;
    ::ll::TypedStorage<8, 8, ulong const> mAmbientSamplesDefaultSize;
    ::ll::TypedStorage<8, 56, std::optional<cg::ImageBuffer>> mSkyAmbientSamplesBuffer;
    ::ll::TypedStorage<8, 128, ::TerrainMaterialVariationManager> mTerrainMaterialVariationManager;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    ::ll::TypedStorage<4, 4, float> mLastTime;
    ::ll::TypedStorage<4, 4, float> mWaterLevel;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mFogControl;
    ::ll::TypedStorage<4, 4, float> mBaseFogEnd;
    ::ll::TypedStorage<4, 4, float> mBaseFogStart;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCameraLightIntensity;
    ::ll::TypedStorage<4, 8, ::LevelRendererCamera::FogBrightnessPair> mFogBrightnessPair;
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting> mCurrentDistanceFog;
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting> mLastTargetDistanceFog;
    ::ll::TypedStorage<4, 12, ::ResolvedFogVolumetricDensitySetting> mCurrentFogDensity;
    ::ll::TypedStorage<4, 32, ::ResolvedFogVolumetricCoefficientSetting> mAirFogCoefficient;
    ::ll::TypedStorage<4, 32, ::ResolvedFogVolumetricCoefficientSetting> mWaterFogCoefficient;
    ::ll::TypedStorage<4, 32, ::ResolvedFogVolumetricCoefficientSetting> mCloudFogCoefficient;
    ::ll::TypedStorage<4, 4, ::ResolvedFogVolumetricHenyeyGreensteinGSetting> mAirHenyeyGreensteinG;
    ::ll::TypedStorage<4, 4, ::ResolvedFogVolumetricHenyeyGreensteinGSetting> mWaterHenyeyGreensteinG;
    ::ll::TypedStorage<1, 1, bool> mFogWasUnderwaterLastCheck;
    ::ll::TypedStorage<1, 1, bool> mFogWasUnderLavaLastCheck;
    ::ll::TypedStorage<1, 1, bool> mFogWasUnderPowderSnowLastCheck;
    ::ll::TypedStorage<1, 1, bool> mBlendFogThisFrame;
    ::ll::TypedStorage<4, 4, float> mMobEffectFogLevel;
    ::ll::TypedStorage<8, 176, ::ParticleRenderData> mParticleRenderData;
    ::ll::TypedStorage<4, 4, float> mTransitionFogTime;
    ::ll::TypedStorage<1, 1, bool> mInTransitionFog;
    ::ll::TypedStorage<4, 4, float const> mRenderDistanceCloudFadeOutMultiplier;
    ::ll::TypedStorage<4, 4, float> mFakeHDR;
    ::ll::TypedStorage<4, 4, float> mAverageBrightness;
    ::ll::TypedStorage<4, 4, uint> mFrameID;
    ::ll::TypedStorage<4, 4, int> mViewAreaDistance;
    ::ll::TypedStorage<4, 4, float> mFarChunksDistance;
    ::ll::TypedStorage<4, 4, float> mRenderDistance;
    ::ll::TypedStorage<4, 4, float> mCullEndDistance;
    ::ll::TypedStorage<4, 4, int const> mMaxInflightChunks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GridArea<std::shared_ptr<RenderChunkInstanced>>>> mViewArea;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastFaceSortPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastFaceSortDir;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastDirtySortPos;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastNearbyFaceSortPos;
    ::ll::TypedStorage<4, 24, ::LevelRendererCamera::RenderChunkPosBounds> mLastFaceSortBounds;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastChunkResortPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mCameraTargetPos;
    ::ll::TypedStorage<4, 204, ::FrustumCuller> mFrustumCuller;
    ::ll::TypedStorage<1, 1, ::FrustumCullerType> mFrustumCullerType;
    ::ll::TypedStorage<8, 536, ::mce::Camera> mWorldSpaceCamera;
    ::ll::TypedStorage<8, 24, std::vector<Actor*>> mWaterHoleActorQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WeatherRenderer>> mWeatherRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeBlendingMapRenderer>> mBiomeBlendingMapRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkRenderObjectCollection>> mChunkRenderObjects;
    ::ll::TypedStorage<1, 1, bool> mCameraUnderWater;
    ::ll::TypedStorage<1, 1, bool> mCameraUnderLiquid;
    ::ll::TypedStorage<1, 1, bool> mCameraUnderPowderSnow;
    ::ll::TypedStorage<1, 1, bool> mCameraUnderLava;
    ::ll::TypedStorage<1, 1, bool> mCameraInRain;
    ::ll::TypedStorage<1, 1, bool> mShowSky;
    ::ll::TypedStorage<1, 1, bool> mIsCameraInCaptureMode;
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
    ::ll::UntypedStorage<1, 16> mViewRegion;
    ::ll::TypedStorage<8, 8, ::Dimension*> mDimension;
    ::ll::TypedStorage<2, 2, short> mCloudHeight;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&> mLevelRenderer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelCullerBase>> mLevelCuller;
    ::ll::TypedStorage<1, 1, ::LevelCullerType> mLastCullerType;
    ::ll::TypedStorage<1, 1, bool> mForceCulling;
    ::ll::TypedStorage<1, 1, bool> mRecullWhenNotBusy;
    ::ll::TypedStorage<4, 4, int> mViewAreaSide;
    ::ll::TypedStorage<2, 2, short> mViewAreaHeight;
    ::ll::TypedStorage<1, 1, bool> mViewAreaChanged;
    ::ll::TypedStorage<4, 4, float> mLastFogEnd;
    ::ll::TypedStorage<4, 4, float> mLastSunAngle;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastCameraDir;
    ::ll::TypedStorage<4, 16, std::optional<glm::vec<3, float, (glm::qualifier)0>>> mPrevCloudCenterPos;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mResourcePackManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>> mTempBlockActorList;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>> mPendingPermanentlyRenderedBlockActorRequests;
    ::ll::TypedStorage<8, 24, std::map<ChunkPos, std::unordered_set<BlockPos>>> mPermanentlyRenderedBlockActors;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelRendererCameraProxy>> mProxy;
    ::ll::TypedStorage<8, 8, double> mLastFrameTimeStart;
    ::ll::TypedStorage<8, 488, ::HistoricalFrameTimes> mHistoricalFrameTimes;
    ::ll::UntypedStorage<8, 16> mChunkFaceSortTaskHandle;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CameraAimAssistRenderer>> mCameraAimAssistRenderer;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCamera& operator=(LevelRendererCamera const&);
    LevelRendererCamera(LevelRendererCamera const&);
    LevelRendererCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererCamera();

    virtual ::LevelRendererCameraType getCameraType() const;

    virtual void addCameraListenerToRenderChunkCoordinator();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onDeviceLost();

    virtual void onLowMemory();

    virtual void initResources();

    virtual void frameUpdate(::ClientFrameUpdateContext&);

    virtual void tickLevelRendererCamera();

    virtual void tickRain();

    virtual void updateViewArea(::LevelRenderPreRenderUpdateParameters const&);

    virtual void callRenderNameTags(::ScreenContext&, ::ViewRenderObject const&, ::Font&);

    virtual ::NameTagRenderObjectCollection extractNameTags(::ScreenContext&) const;

    virtual void callRenderCracks(::BaseActorRenderContext&, ::ViewRenderObject const&);

    virtual ::CrackRenderObjectCollection extractCracks(::ScreenContext&) const;

    virtual void renderEntityEffects(::BaseActorRenderContext&);

    virtual void renderBlockEntities(::BaseActorRenderContext&, bool);

    virtual void setViewArea(::LevelRenderPreRenderUpdateParameters const&);

    virtual bool getForceFog(::Actor const&) const;

    virtual void setupFog(::ScreenContext&, float const);

    virtual float getAmbientBrightness() const;

    virtual void recalculateRenderDistance(float const);

    virtual void preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    virtual void render(::BaseActorRenderContext&, ::ViewRenderObject const&, ::IClientInstance&);

    virtual void postRenderUpdate();

    virtual void notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar);

    virtual void updateLevelCullerType(::LevelCullerType const) = 0;

    virtual void queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    virtual void _releaseRespectiveResources();

    virtual void setupViewArea();

    virtual ::FogDefinition::DistanceSettingType _getFogDistanceSettingType() const;

    virtual ::FogDefinition::DensitySettingType _getFogDensitySettingType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addToRenderChunkQueue(
        ::ChunkRenderObjectCollection&,
        ::TerrainMaterialVariationManager const&,
        ::TerrainLayer const&,
        ::TerrainLayerLOD const,
        ::RenderChunkInstanced const&,
        ulong,
        ::BlockPos const&
    );

    MCNAPI std::shared_ptr<LevelCullerBase>
           _createCuller(::LevelCullerType, std::weak_ptr<LevelRendererCamera>, ::LevelBuilder&);

    MCNAPI ::ResolvedFogVolumetricCoefficientSetting
        _getCurrentCoefficientFogSetting(::FogDefinition::CoefficientSettingType) const;

    MCNAPI ::ResolvedFogVolumetricHenyeyGreensteinGSetting
        _getCurrentHenyeyGreensteinGFogSetting(::FogDefinition::HenyeyGreensteinGSettingType) const;

    MCNAPI void _initCubemapTextures(::Dimension const&);

    MCNAPI void _insertBlockEntityIntoRenderQueue(::IVanillaRenderBlockActorComponent&, bool const);

    MCNAPI void _releaseResources();

    MCNAPI void _resortNearbyChunks(::Vec3 const&, ::GridArea<std::shared_ptr<RenderChunkInstanced>> const&);

    MCNAPI bool _shouldRenderLeashedEntity(::Actor*, ::Vec3);

    MCNAPI void _tryInsertBlockEntityIntoRenderQueues(
        ::IVanillaRenderBlockActorComponent*,
        std::map<ChunkPos, std::unordered_set<BlockPos>> const&
    );

    MCNAPI ::GridArea<std::shared_ptr<RenderChunkInstanced>>& _viewAreaMutable();

    MCNAPI bool cullerIsVisible(::Vec3 const&, float) const;

    MCNAPI ::LevelRendererCamera::RainState doRainUpdate();

    MCNAPI ::BiomeBlendingMapRenderer& getBiomeBlendingMapRenderer() const;

    MCNAPI ::Vec3 const& getCameraPos() const;

    MCNAPI ::Vec3 const& getCameraTargetPos() const;

    MCNAPI ::DimensionType getDimensionID() const;

    MCNAPI ::mce::Color getFogClearColor();

    MCNAPI ::mce::Color const& getFogColor() const;

    MCNAPI float getFogEndDistanceForRendering() const;

    MCNAPI ::LevelRenderer const& getLevelRenderer() const;

    MCNAPI ::RenderChunkInstanced* getOrCreateRenderChunkInstancedAt(::SubChunkPos const&);

    MCNAPI ::LevelRendererCameraProxy* getProxy();

    MCNAPI ::RenderChunkInstanced* getRenderChunkInstancedAt(::SubChunkPos const&) const;

    MCNAPI std::shared_ptr<RenderChunkInstanced> getRenderChunkInstancedAtShared(::SubChunkPos const&) const;

    MCNAPI ulong getRenderChunkInstancedBaseMemoryUsed();

    MCNAPI ulong getRenderChunkInstancedCount();

    MCNAPI ulong getRenderChunkInstancedDifferentGeoCount();

    MCNAPI ulong getRenderChunkInstancedEstimatedIndexMemoryUsed();

    MCNAPI bool isAABBVisible(::AABB const&, bool) const;

    MCNAPI bool isUnderLava() const;

    MCNAPI bool isUnderWater() const;

    MCNAPI void onViewRadiusChanged(bool);

    MCNAPI void preDimensionChanged(::Player&);

    MCNAPI void recaptureViewAreaDimensions();

    MCNAPI void renderChunkImmediateChanged(::SubChunkPos const&);

    MCNAPI void renderChunkVisibilityChanged(::RenderChunkShared&, bool);

    MCNAPI void
    renderSky(::ScreenContext&, ::ViewRenderObject const&, ::BaseSceneDirectionalLightRenderData const&) const;

    MCNAPI void resetChunkCullingData(::ChunkPos const&);

    MCNAPI void updateFarChunksDistance();

    MCNAPI void updatePerChunkFaceSortState(::Vec3 const&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LevelRendererCameraType $getCameraType() const;

    MCNAPI void $addCameraListenerToRenderChunkCoordinator();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onLowMemory();

    MCNAPI void $initResources();

    MCNAPI void $frameUpdate(::ClientFrameUpdateContext&);

    MCNAPI void $tickLevelRendererCamera();

    MCNAPI void $tickRain();

    MCNAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $callRenderNameTags(::ScreenContext&, ::ViewRenderObject const&, ::Font&);

    MCNAPI ::NameTagRenderObjectCollection $extractNameTags(::ScreenContext&) const;

    MCNAPI void $callRenderCracks(::BaseActorRenderContext&, ::ViewRenderObject const&);

    MCNAPI ::CrackRenderObjectCollection $extractCracks(::ScreenContext&) const;

    MCNAPI void $renderEntityEffects(::BaseActorRenderContext&);

    MCNAPI void $renderBlockEntities(::BaseActorRenderContext&, bool);

    MCNAPI void $setViewArea(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI bool $getForceFog(::Actor const&) const;

    MCNAPI void $setupFog(::ScreenContext&, float const);

    MCNAPI float $getAmbientBrightness() const;

    MCNAPI void $recalculateRenderDistance(float const);

    MCNAPI void $preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    MCNAPI void $render(::BaseActorRenderContext&, ::ViewRenderObject const&, ::IClientInstance&);

    MCNAPI void $postRenderUpdate();

    MCNAPI void $notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar);

    MCNAPI void $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $_releaseRespectiveResources();

    MCNAPI void $setupViewArea();

    MCNAPI ::FogDefinition::DistanceSettingType $_getFogDistanceSettingType() const;

    MCNAPI ::FogDefinition::DensitySettingType $_getFogDensitySettingType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
