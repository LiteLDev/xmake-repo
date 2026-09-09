#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/LevelRendererCameraType.h"
#include "mc/client/renderer/game/BlockDestructInfo.h"
#include "mc/client/renderer/game/DeferredSound.h"
#include "mc/client/renderer/game/DirectionalLightRenderData.h"
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/client/renderer/game/PlayerRenderingParameters.h"
#include "mc/client/renderer/scripting/ServerGraphicsOverrideManager.h"
#include "mc/client/renderer/texture/TextureAtlasItem.h"
#include "mc/client/sound/ListenerState.h"
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/FogDefinition.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/dimension/DirectionalLightSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSoundIdentifier;
class AmbientSoundController;
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockSource;
class ClientFrameUpdateContext;
class CompoundTag;
class EntityContext;
class Font;
class IClientInstance;
class IRandom;
class Level;
class LevelAnimateTickHelper;
class LevelRenderer;
class Matrix;
class Mob;
class OptionRegistry;
class Player;
class Random;
class RenderChunkShared;
class ScreenContext;
class ServerSoundHandle;
class SoundMapping;
class SoundPlayerInterface;
class Tessellator;
class TextureAtlas;
class TextureTessellator;
class imguiSoundEventsListener;
struct ActorShadowRenderObjectCollection;
struct BreakingItemParticleData;
struct CloudRenderObject;
struct CrackRenderObject;
struct CrackRenderObjectCollection;
struct LevelRenderPreRenderUpdateParameters;
struct NameTagRenderObjectCollection;
struct PlaySoundOptions;
struct ResolvedItemIconInfo;
struct SkyRenderObject;
struct Sound;
struct SoundEventIdentifier;
struct TextureUVCoordinateSet;
struct ViewRenderData;
struct ViewRenderObject;
namespace ParticleSystem { class ParticleEmitter; }
namespace cg { class ImageBuffer; }
namespace mce { class Camera; }
namespace mce { class Mesh; }
namespace mce { struct TextureResourceService; }
namespace mce::framebuilder { struct SkyWeatherParameters; }
// clang-format on

class LevelRendererPlayer : public ::LevelRendererCameraListeners, public ::Bedrock::EnableNonOwnerReferences {
public:
    // LevelRendererPlayer inner types declare
    // clang-format off
    struct BiomeParticleKey;
    struct BiomeParticleKeyHash;
    struct SkyColorLerp;
    // clang-format on

    // LevelRendererPlayer inner types define
    struct BiomeParticleKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mEffect;
        ::ll::TypedStorage<4, 16, ::mce::Color>   mColor;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeParticleKey& operator=(BiomeParticleKey const&);
        BiomeParticleKey(BiomeParticleKey const&);
        BiomeParticleKey();
    };

    struct BiomeParticleKeyHash {};

    struct SkyColorLerp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> mStartColor;
        ::ll::TypedStorage<4, 16, ::mce::Color> mTargetColor;
        ::ll::TypedStorage<4, 16, ::mce::Color> mCurrentColor;
        ::ll::TypedStorage<4, 4, float>         mTime;
        // NOLINTEND
    };

    using DeferredSoundList = std::vector<DeferredSound>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const>                                      WATER_VISION_QUICK_TIME;
    ::ll::TypedStorage<4, 4, float const>                                      WATER_VISION_MAX_TIME;
    ::ll::TypedStorage<4, 4, float const>                                      WATER_VISION_QUICK_PERCENT;
    ::ll::TypedStorage<8, 16, std::weak_ptr<cg::ImageBuffer>>                  mCloudsImage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<mce::Mesh>>>         mCloudMeshes;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<mce::Mesh>>>         mCloudMeshesCurrentlyTessellating;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Tessellator>>                     mCloudTessellator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureTessellator>>              mCloudTextureTessellator;
    ::ll::TypedStorage<1, 1, bool>                                             mUpdatingClouds;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastCloudUpdatePosition;
    ::ll::TypedStorage<1, 1, uchar>                                            mLastCloudSide;
    ::ll::TypedStorage<4, 4, int>                                              mLastCloudMeshSize;
    ::ll::TypedStorage<4, 4, int>                                              mLastCloudGridSize;
    ::ll::TypedStorage<4, 336, std::array<DirectionalLightRenderData, 3>>      mDirectionalLightRenderData;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, ulong>>             mRecordSoundMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockDestructInfo>> mDestroyingBlockList;
    ::ll::TypedStorage<8, 8, double>                                           mLastDestroyRenderTime;
    ::ll::TypedStorage<4, 4, float>                                            mFov;
    ::ll::TypedStorage<4, 4, float>                                            mOFov;
    ::ll::TypedStorage<4, 280, ::PlayerRenderingParameters>                    mRenderingParameters;
    ::ll::TypedStorage<4, 4, float>                                            thirdDistance;
    ::ll::TypedStorage<4, 4, float>                                            thirdDistanceO;
    ::ll::TypedStorage<4, 4, float>                                            thirdRotation;
    ::ll::TypedStorage<4, 4, float>                                            thirdRotationO;
    ::ll::TypedStorage<4, 4, float>                                            thirdTilt;
    ::ll::TypedStorage<4, 4, float>                                            thirdTiltO;
    ::ll::TypedStorage<4, 4, float>                                            cameraRoll;
    ::ll::TypedStorage<4, 4, float>                                            cameraRollO;
    ::ll::TypedStorage<4, 4, float>                                            currentCameraDist;
    ::ll::TypedStorage<4, 4, float>                                            prevHeightOffset;
    ::ll::TypedStorage<4, 4, float>                                            mHeightOffsetAdjustment;
    ::ll::TypedStorage<4, 4, float>                                            mUnderwaterVisionTime;
    ::ll::TypedStorage<4, 4, float>                                            mUnderwaterVisionTimePrevious;
    ::ll::TypedStorage<4, 4, float>                                            mUnderwaterVisionClarity;
    ::ll::TypedStorage<4, 4, float>                                            mUnderwaterVisionScale;
    ::ll::TypedStorage<4, 4, float>                                            mUnderwaterLightLevel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              selectionBlockEntityOverlayMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              selectionBlockEntityOverlayColorMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              selectionOverlayMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              selectionOpaqueMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              selectionTwoSidedMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              cracksOverlayMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              cracksOverlayAlphaTestMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              cracksOverlayBlockEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                              mOutlineSelectionMaterial;
    ::ll::TypedStorage<8, 8, ::SoundMapping const&>                            mSounds;
    ::ll::TypedStorage<8, 24, std::vector<DeferredSound>>                      mDeferredSounds;
    ::ll::TypedStorage<8, 64, ::TextureAtlasItem>                              uvBreakBlockItem;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                               mClientInstance;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                                 mLocalUser;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&>                                 mLevelRenderer;
    ::ll::UntypedStorage<8, 24>                                                mSoundPlayer;
    ::ll::TypedStorage<8, 8, ::Level&>                                         mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AmbientSoundController>>          mAmbientSoundController;
    ::ll::TypedStorage<4, 48, ::ListenerState>                                 mListenerState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mCameraForward;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mCameraUp;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLastListenerPos;
    ::ll::TypedStorage<8, 8, double>                                           mLastListenerUpdateTime;
    ::ll::UntypedStorage<8, 40>                                                mBiomeTintedParticleEffects;
    ::ll::TypedStorage<4, 56, std::optional<LevelRendererPlayer::SkyColorLerp>> mSkyColorLerp;
    ::ll::TypedStorage<4, 4, int>                                               mRainSoundTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mOnLevelSoundEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mOnLevelSoundEventWithVolumeAndPitch;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mOnStopLevelSoundEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mOnStopAllLevelSoundsEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mOnStopMusicEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mSubtitlesOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                              mSubtitlesEnabled;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelAnimateTickHelper>>           mLevelAnimateTickHelper;
    ::ll::UntypedStorage<8, 88>                                                 mOnSoundPlayed;
    ::ll::TypedStorage<8, 2104, ::ServerGraphicsOverrideManager>                mScriptGraphicsOverrideManager;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererPlayer& operator=(LevelRendererPlayer const&);
    LevelRendererPlayer(LevelRendererPlayer const&);
    LevelRendererPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelRendererPlayer();

    virtual ::LevelRendererCameraType getCameraType() const;

    virtual void addCameraListenerToRenderChunkCoordinator();

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

    virtual bool getForceFog(::Actor const&) const;

    virtual void setupFog(::ScreenContext&, float const);

    virtual void recalculateRenderDistance(float const);

    virtual void preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    virtual void notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar);

    virtual void queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    virtual void _releaseRespectiveResources();

    virtual ::FogDefinition::DistanceSettingType _getFogDistanceSettingType() const;

    virtual ::FogDefinition::DensitySettingType _getFogDensitySettingType() const;

    virtual void onWillChangeDimension(::Player&);

    virtual void onDimensionChanged(::Player&);

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    virtual void addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    virtual void addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    virtual float getUnderwaterVisionClarity();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _addTerrainEffect(::HashedString const&, ::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void _crack(::BlockSource&, ::Block const&, ::BlockPos const&, uchar);

    MCNAPI void _renderHighlightSelection(
        ::BaseActorRenderContext&,
        ::BlockSource&,
        ::Block const&,
        ::BlockPos const&,
        bool,
        bool const
    ) const;

    MCNAPI void
    _renderOutlineSelection(::BaseActorRenderContext&, ::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Sound const& _retrieveActorSoundWithFallback(
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::ActorSoundIdentifier const&
    );

    MCNAPI void _spawnSmokeParticles(::ParticleType, ::Vec3 const&, int);

    MCNAPI bool blockCanHaveCracksOverlay(::Block const&) const;

    MCNAPI bool blockCanHaveSelectionOverlay(::Block const&) const;

    MCNAPI void bobHurt(::Matrix&, float);

    MCNAPI void bobView(::Matrix&, float);

    MCNAPI void clearDestroyProgress();

    MCNAPI ::CrackRenderObject
    createCrackRenderObject(::ScreenContext&, ::BlockSource&, ::Block const&, ::BlockPos const&, float) const;

    MCNAPI ::ViewRenderObject createViewRenderObject(::ScreenContext&, ::SubClientId);

    MCNAPI void emitGrowthParticles(::Vec3 const&);

    MCNAPI void ensureItemInHandRenderingParametersInitialized(::mce::Camera&);

    MCNAPI ::DirectionalLightRenderData getActiveDirectionalLight() const;

    MCNAPI float getFov(float, bool) const;

    MCNAPI float getFovWithoutGameplay() const;

    MCNAPI ::ListenerState const& getListenerState() const;

    MCNAPI ::Bedrock::PubSub::Connector<
        void(const std::string&, std::optional<std::string>, const Vec3&, float, const Vec3&, const Vec3&, bool)>&
    getOnSoundPlayedConnector();

    MCNAPI float getProjectionAspectRatio() const;

    MCNAPI ::PlayerRenderingParameters const& getRenderingParameters() const;

    MCNAPI ::ServerGraphicsOverrideManager& getScriptGraphicsOverrideManager();

    MCNAPI float getUnderWaterVisionScale() const;

    MCNAPI void insertFrameParameters();

    MCNAPI void playDeferredSound(std::string const&, ::Vec3 const&, float, float);

    MCNAPI void
    playSound(std::string const&, ::Vec3 const&, float, float, bool, std::optional<ServerSoundHandle>) const;

    MCNAPI void reinit(::gsl::not_null<Bedrock::NonOwnerPointer<const TextureAtlas>> const&);

    MCNAPI void removeDestroyBlock(::BlockPos const&);

    MCNAPI void renderHitSelect(::BaseActorRenderContext&, ::BlockSource&, ::BlockPos const&, bool const) const;

    MCNAPI void setItemInHandRenderingParameters(::mce::Camera&);

    MCNAPI void setupCamera(::mce::Camera&, float const);

    MCNAPI void stopMusic();

    MCNAPI void stopRecord(::Vec3 const&);

    MCNAPI void stopSound(std::string const&);

    MCNAPI void stopSounds();

    MCNAPI void tryReassignSoundEventToVariant(::SharedTypes::Legacy::LevelSoundEvent&, ::Vec3 const&);

    MCNAPI void tryReassignSoundToFallback(
        ::SharedTypes::Legacy::LevelSoundEvent&,
        ::Sound&,
        ::ActorSoundIdentifier const&,
        std::string const&,
        ::Random&
    );

    MCNAPI void updateDestroyBlock(::BlockPos const&, float);

    MCNAPI void updateDestroyProgress();

    MCNAPI void updateListenerState(float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getActorShadowOffset(::EntityContext const&);

    MCNAPI static ::TextureUVCoordinateSet getDestructionParticlesTexture(::IRandom&, ::Block const&);

    MCNAPI static float getNightVisionScale(::Mob const&, float);
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

    MCNAPI bool $getForceFog(::Actor const&) const;

    MCNAPI void $setupFog(::ScreenContext&, float const);

    MCNAPI void $recalculateRenderDistance(float const);

    MCNAPI void $preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    MCNAPI void $notifyGeoChangedForAffectedEntities(::RenderChunkShared&, uchar);

    MCNAPI void $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $_releaseRespectiveResources();

    MCNAPI ::FogDefinition::DistanceSettingType $_getFogDistanceSettingType() const;

    MCNAPI ::FogDefinition::DensitySettingType $_getFogDensitySettingType() const;

    MCNAPI void $onWillChangeDimension(::Player&);

    MCNAPI void $onDimensionChanged(::Player&);

    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCNAPI void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCNAPI void
    $addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    MCNAPI float $getUnderwaterVisionClarity();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
