#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/ActorBindInfo.h"
#include "mc/client/particlesystem/particle/CommonParticle.h"
#include "mc/client/particlesystem/particle/ComponentAccessParticleEmitter.h"
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class BlockType;
class ClientFrameUpdateContext;
class Dimension;
class ExpressionNode;
class ParticleRenderData;
class ParticleSystemEngine;
class WeakEntityRef;
struct ActorUniqueID;
struct BrightnessPair;
namespace LightPropagation { class LightVolumeManager; }
namespace ParticleSystem { class ParticleEffect; }
namespace ParticleSystem { class ParticleEmitter; }
namespace ParticleSystem { class ParticleEvent; }
namespace ParticleSystem { class ParticleEventNode; }
namespace ParticleSystem { class ParticleVisualEffectEvent; }
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/ActorBindInfo.h"
#include "mc/client/particlesystem/particle/ComponentAccessParticleEmitter.h"
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ClientFrameUpdateContext;
class Dimension;
class ExpressionNode;
class ParticleRenderData;
class ParticleSystemEngine;
class WeakEntityRef;
struct ActorUniqueID;
struct BrightnessPair;
namespace LightPropagation { class LightVolumeManager; }
namespace ParticleSystem { class ParticleEffect; }
namespace ParticleSystem { class ParticleEmitter; }
namespace ParticleSystem { class ParticleEventNode; }
namespace ParticleSystem { struct CommonParticle; }
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class ParticleEmitterActual : public ::ParticleSystem::ComponentAccessParticleEmitter {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleEmitterActual : public ::ParticleSystem::ComponentAccessParticleEmitter {
#else // @header-generator platform
class ParticleEmitterActual {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ParticleEmitterActual inner types declare
    // clang-format off
    struct AABBCacheElement;
    // clang-format on

    // ParticleEmitterActual inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct AABBCacheElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<AABB>> mAABBList;
        ::ll::TypedStorage<4, 4, uint>               mLastAccessedFrame;
        // NOLINTEND

    public:
        // prevent constructor by default
        AABBCacheElement& operator=(AABBCacheElement const&);
        AABBCacheElement(AABBCacheElement const&);
        AABBCacheElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::HashedString> mEffectName;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ParticleSystem::ParticleEffect>> mEffectDataWeakPtr;
    ::ll::TypedStorage<8, 24, std::vector<ParticleSystem::CommonParticle>> mParticles;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mEmitterCurrentLoopAge;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mSleepDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mEmissionDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTickDeltaTimeAccumulator;
    ::ll::TypedStorage<4, 4, float> mEmitterCurrentTravelDistance;
    ::ll::TypedStorage<4, 12, ::Vec3> mEmitterPosition;
    ::ll::TypedStorage<4, 12, ::Vec3> mEmitterWorldPosition;
    ::ll::TypedStorage<4, 12, ::Vec3> mEmitterLastWorldPosition;
    ::ll::UntypedStorage<4, 12> mEmitterWorldVelocity;
    uint mEnableRender : 1;
    uint mEnableUpdate : 1;
    uint mManualParticleEmission : 1;
    uint mIsValid : 1;
    uint mEmitterExpired : 1;
    uint mFirstUpdate : 1;
    uint mUseActorPosition : 1;
    uint mUseActorRotation : 1;
    uint mUseEmitterVelocity : 1;
    uint mBlockListInitialized : 1;
    uint mAreParticlesFromActorButWorldRelative : 1;
    ::ll::TypedStorage<4, 4, int> mEmitterDynamicsFrameCounter;
    ::ll::TypedStorage<4, 4, int> mParticlesDynamicsFrameCounter;
    ::ll::TypedStorage<4, 4, int> mEmitterRenderingFrameCounter;
    ::ll::TypedStorage<4, 4, int> mParticlesRenderingFrameCounter;
    ::ll::TypedStorage<4, 4, int> mNumberOfFramesToInterpolate;
    ::ll::UntypedStorage<8, 496> mRenderParams;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap> mMolangVariableMap;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mEmitterLifetimeVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mEmitterAgeVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mEmitterEntityScaleVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mParticleLifetimeMolangVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mParticleAgeMolangVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mParticleRandom1VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mParticleRandom2VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mParticleRandom3VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mParticleRandom4VariableIndex;
    ::ll::TypedStorage<4, 64, ::Matrix> mEmitterTransform;
    ::ll::TypedStorage<8, 80, ::ParticleSystem::ActorBindInfo> mActorBindInfo;
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    ::ll::TypedStorage<4, 4, float> mCullingBufferDistance;
    ::ll::TypedStorage<8, 8, ulong> mMaxNumParticles;
    ::ll::TypedStorage<8, 8, ulong> mNumParticlesEmitted;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMaterial;
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs> mTexture;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>> mMERSUniforms;
    ::ll::TypedStorage<8, 8, std::array<std::array<mce::Color, 16>, 16> const&> mLightTextureData;
    ::ll::UntypedStorage<4, 4> mFaceCameraMode;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mBlockSource;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*>> mBlocksToCheckAgainst;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, ParticleSystem::ParticleEmitterActual::AABBCacheElement>> mAABBCache;
    ::ll::TypedStorage<4, 4, uint> mCurrentCacheFrame;
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mCollisionAabbList;
    ::ll::UntypedStorage<8, 24> mCollisionSweepList;
    ::ll::TypedStorage<8, 8, ::ParticleSystemEngine&> mParticleSystemEngine;
    ::ll::UntypedStorage<8, 48> mSpawnedParticleEmitterList;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEmitterActual& operator=(ParticleEmitterActual const&);
    ParticleEmitterActual(ParticleEmitterActual const&);
    ParticleEmitterActual();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleEmitterActual();

    virtual void setActorBindInfo(::Actor*, ::HashedString const&, ::Vec3 const&);

    virtual void setActorBindInfo(::WeakEntityRef, ::HashedString const&, ::Vec3 const&);

    virtual void setActorBindInfo(::Dimension*, ::ActorUniqueID, ::HashedString const&, ::Vec3 const&);

    virtual void setEnableUpdate(bool);

    virtual void setEnableRender(bool);

    virtual void runInitializationScript(::ExpressionNode const&);

    virtual void onBlockChanged(::BlockPos const&);

    virtual void expire();

    virtual void emitParticleManually(::Vec3 const&, ::Vec3 const&, float const);

    virtual bool isValid() const;

    virtual bool isManualEmitter() const;

    virtual bool expirationRequested() const;

    virtual bool hasExpired() const;

    virtual ::AABB const& getAABB() const;

    virtual ::HashedString const& getEffectName() const;

    virtual ulong getParticleCount() const;

    virtual ulong getEffectEmitterCount() const;

    virtual ulong getEffectParticleCount() const;

    virtual ulong getTotalEmitterCount() const;

    virtual ulong getTotalParticleCount() const;

    virtual ::Vec3 const& getLastCameraPosition() const;

    virtual void tick(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, float const);

    virtual void frameUpdate(::ClientFrameUpdateContext&);

    virtual void extractForRendering(::ParticleRenderData&, float);

    virtual void setManualParticleEmission(bool);

    virtual ::ParticleSystem::ActorBindInfo getActorBindInfo() const;

    virtual ::Vec3 const& getPosition() const;

    virtual ::Matrix const& getTransform() const;

    virtual ::Vec3 const& getWorldPosition() const;

    virtual ::Vec3 const& getWorldVelocity() const;

    virtual void setMaxNumParticles(ulong);

    virtual ulong getMaxNumParticles() const;

    virtual ulong getNumParticles() const;

    virtual ulong getNumParticlesEmitted() const;

    virtual void setActorFrameOfReference(bool, bool, bool);

    virtual void setEmissionDuration(float);

    virtual void setSleepDuration(float);

    virtual void setFacing(::HashedString const&);

    virtual bool blockListInitialized();

    virtual void initializeBlockList(::buffer_span<std::string>);

    virtual bool blockAtPositionIsInList(::BlockPos const&);

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const&) const;

    virtual std::pair<BrightnessPair, BlockPos> getBrightestNeighbor(::BlockPos const&, ::ParticleSystem::CommonParticle const&) const;

    virtual bool getVisibilityAtBlock(::BlockPos const&) const;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const&) const;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const&) const;

    virtual std::vector<AABB> const& getCollisionShapesForBlockPosition(::BlockPos const&);

    virtual std::vector<AABB>& getCollisionAabbList();

    virtual std::vector<ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>& getCollisionSweepList();

    virtual void fireEvent(::HashedString const&, ::Matrix const&, ::Vec3 const&);

    virtual void fireEvent(::HashedString const&, ::Vec3 const&, ::Vec3 const&);

    virtual bool getUseActorPosition() const;

    virtual bool getUseActorRotation() const;

    virtual void getParticleWorldPositionAndVelocity(::ParticleSystem::CommonParticle&, ::Vec3&, ::Vec3&);

    virtual bool getAreParticlesFromActorButWorldRelative() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _computeActorTransformAndReturnIfAttachedToLocator(float, ::Matrix&, bool, bool) const;

    MCNAPI void _createEmitterFromEvent(::ParticleSystem::ParticleVisualEffectEvent const&, ::Matrix const&);

    MCNAPI void
    _emitNewParticle(::ParticleSystem::ParticleEffect const&, ::Vec3 const&, ::Vec3 const&, float const, float const);

    MCNAPI void _executeEventNode(
        ::ParticleSystem::ParticleEventNode const&,
        ::HashedString const&,
        ::Matrix const&,
        ::Vec3 const&
    );

    MCNAPI ::mce::Color _getLightColorForParticle(
        ::ParticleSystem::CommonParticle const&,
        std::shared_ptr<const LightPropagation::LightVolumeManager>
    ) const;

    MCNAPI std::shared_ptr<ParticleSystem::ParticleEffect> _lockEffect();

    MCNAPI bool _prepareEmitterRenderParams();

    MCNAPI void
    _prepareParticleForRendering(::ParticleSystem::ParticleEffect const&, ::ParticleSystem::CommonParticle&);

    MCNAPI void _prepareParticlesForRendering(bool);

    MCNAPI void _resetParticleEffectProperties(bool);

    MCNAPI void _setGracefullyExpire();

    MCNAPI void
    _updateRenderParamsForParticle(::ParticleSystem::ParticleEffect const&, ::ParticleSystem::CommonParticle const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color& mParticleInitialColor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setActorBindInfo(::Actor*, ::HashedString const&, ::Vec3 const&);

    MCNAPI void $setActorBindInfo(::WeakEntityRef, ::HashedString const&, ::Vec3 const&);

    MCNAPI void $setActorBindInfo(::Dimension*, ::ActorUniqueID, ::HashedString const&, ::Vec3 const&);

    MCNAPI void $setEnableUpdate(bool);

    MCNAPI void $setEnableRender(bool);

    MCNAPI void $runInitializationScript(::ExpressionNode const&);

    MCNAPI void $onBlockChanged(::BlockPos const&);

    MCNAPI void $expire();

    MCNAPI void $emitParticleManually(::Vec3 const&, ::Vec3 const&, float const);

    MCNAPI bool $isValid() const;

    MCNAPI bool $isManualEmitter() const;

    MCNAPI bool $expirationRequested() const;

    MCNAPI bool $hasExpired() const;

    MCNAPI ::AABB const& $getAABB() const;

    MCNAPI ::HashedString const& $getEffectName() const;

    MCNAPI ulong $getParticleCount() const;

    MCNAPI ulong $getEffectEmitterCount() const;

    MCNAPI ulong $getEffectParticleCount() const;

    MCNAPI ulong $getTotalEmitterCount() const;

    MCNAPI ulong $getTotalParticleCount() const;

    MCNAPI ::Vec3 const& $getLastCameraPosition() const;

    MCNAPI void $tick(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&, float const);

    MCNAPI void $frameUpdate(::ClientFrameUpdateContext&);

    MCNAPI void $extractForRendering(::ParticleRenderData&, float);

    MCNAPI void $setManualParticleEmission(bool);

    MCNAPI ::ParticleSystem::ActorBindInfo $getActorBindInfo() const;

    MCNAPI ::Vec3 const& $getPosition() const;

    MCNAPI ::Matrix const& $getTransform() const;

    MCNAPI ::Vec3 const& $getWorldPosition() const;

    MCNAPI ::Vec3 const& $getWorldVelocity() const;

    MCNAPI void $setMaxNumParticles(ulong);

    MCNAPI ulong $getMaxNumParticles() const;

    MCNAPI ulong $getNumParticles() const;

    MCNAPI ulong $getNumParticlesEmitted() const;

    MCNAPI void $setActorFrameOfReference(bool, bool, bool);

    MCNAPI void $setEmissionDuration(float);

    MCNAPI void $setSleepDuration(float);

    MCNAPI void $setFacing(::HashedString const&);

    MCNAPI bool $blockListInitialized();

    MCNAPI void $initializeBlockList(::buffer_span<std::string>);

    MCNAPI bool $blockAtPositionIsInList(::BlockPos const&);

    MCNAPI ::BrightnessPair $getBrightnessPairAtBlock(::BlockPos const&) const;

    MCNAPI std::pair<BrightnessPair, BlockPos>
           $getBrightestNeighbor(::BlockPos const&, ::ParticleSystem::CommonParticle const&) const;

    MCNAPI bool $getVisibilityAtBlock(::BlockPos const&) const;

    MCNAPI ::mce::Color $getGameplayLightForParticle(::ParticleSystem::CommonParticle const&) const;

    MCNAPI ::BrightnessPair $getBrightnessPairForParticle(::ParticleSystem::CommonParticle const&) const;

    MCNAPI std::vector<AABB> const& $getCollisionShapesForBlockPosition(::BlockPos const&);

    MCNAPI std::vector<AABB>& $getCollisionAabbList();

    MCNAPI std::vector<ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>& $getCollisionSweepList();

    MCNAPI void $fireEvent(::HashedString const&, ::Matrix const&, ::Vec3 const&);

    MCNAPI void $fireEvent(::HashedString const&, ::Vec3 const&, ::Vec3 const&);

    MCNAPI bool $getUseActorPosition() const;

    MCNAPI bool $getUseActorRotation() const;

    MCNAPI void $getParticleWorldPositionAndVelocity(::ParticleSystem::CommonParticle&, ::Vec3&, ::Vec3&);

    MCNAPI bool $getAreParticlesFromActorButWorldRelative() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct AABBCacheElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mAABBList;
        ::ll::TypedStorage<4, 4, uint>                   mLastAccessedFrame;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                    mEffectName;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ParticleSystem::ParticleEffect>> mEffectDataWeakPtr;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::CommonParticle>>   mParticles;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mEmitterCurrentLoopAge;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mSleepDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mEmissionDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mTickDeltaTimeAccumulator;
    ::ll::TypedStorage<4, 4, float>                                              mEmitterCurrentTravelDistance;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterWorldPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterLastWorldPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterWorldVelocity;
    uint                                                                         mEnableRender           : 1;
    uint                                                                         mEnableUpdate           : 1;
    uint                                                                         mManualParticleEmission : 1;
    uint                                                                         mIsValid                : 1;
    uint                                                                         mEmitterExpired         : 1;
    uint                                                                         mFirstUpdate            : 1;
    uint                                                                         mUseActorPosition       : 1;
    uint                                                                         mUseActorRotation       : 1;
    uint                                                                         mUseEmitterVelocity     : 1;
    uint                                                                         mBlockListInitialized   : 1;
    uint                                                          mAreParticlesFromActorButWorldRelative : 1;
    ::ll::TypedStorage<4, 4, int>                                 mEmitterDynamicsFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mParticlesDynamicsFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mEmitterRenderingFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mParticlesRenderingFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mNumberOfFramesToInterpolate;
    ::ll::TypedStorage<8, 520, ::RenderParams>                    mRenderParams;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>                mMolangVariableMap;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mEmitterLifetimeVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mEmitterAgeVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mEmitterEntityScaleVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleLifetimeMolangVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleAgeMolangVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom1VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom2VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom3VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom4VariableIndex;
    ::ll::TypedStorage<4, 64, ::Matrix>                           mEmitterTransform;
    ::ll::TypedStorage<8, 88, ::ParticleSystem::ActorBindInfo>    mActorBindInfo;
    ::ll::TypedStorage<4, 24, ::AABB>                             mAABB;
    ::ll::TypedStorage<4, 4, float>                               mCullingBufferDistance;
    ::ll::TypedStorage<8, 8, uint64>                              mMaxNumParticles;
    ::ll::TypedStorage<8, 8, uint64>                              mNumParticlesEmitted;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                 mMaterial;
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                  mTexture;
    ::ll::TypedStorage<4, 20, ::std::optional<::MERSUniformData>> mMERSUniforms;
    ::ll::TypedStorage<8, 8, ::std::array<::std::array<::mce::Color, 16>, 16> const&>  mLightTextureData;
    ::ll::TypedStorage<4, 4, ::ParticleRenderData::FaceCameraMode>                     mFaceCameraMode;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                           mBlockSource;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*>>                mBlocksToCheckAgainst;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::ParticleSystem::ParticleEmitterActual::AABBCacheElement>>
                                                     mAABBCache;
    ::ll::TypedStorage<4, 4, uint>                   mCurrentCacheFrame;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mCollisionAabbList;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>>
                                                      mCollisionSweepList;
    ::ll::TypedStorage<8, 8, ::ParticleSystemEngine&> mParticleSystemEngine;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>>>
        mSpawnedParticleEmitterList;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEmitterActual& operator=(ParticleEmitterActual const&);
    ParticleEmitterActual(ParticleEmitterActual const&);
    ParticleEmitterActual();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleEmitterActual() /*override*/ = default;

    virtual void setActorBindInfo(
        ::Dimension*          dimension,
        ::ActorUniqueID       actorId,
        ::HashedString const& locator,
        ::Vec3 const&         offset
    ) /*override*/;

    virtual void
    setActorBindInfo(::WeakEntityRef actorRef, ::HashedString const& locator, ::Vec3 const& offset) /*override*/;

    virtual void setActorBindInfo(::Actor* actor, ::HashedString const& locator, ::Vec3 const& offset) /*override*/;

    virtual void setEnableUpdate(bool enable) /*override*/;

    virtual void setEnableRender(bool enable) /*override*/;

    virtual void runInitializationScript(::ExpressionNode const& initializationScript) /*override*/;

    virtual void onBlockChanged(::BlockPos const& blockPosition) /*override*/;

    virtual void expire() /*override*/;

    virtual bool isValid() const /*override*/;

    virtual bool isManualEmitter() const /*override*/;

    virtual bool expirationRequested() const /*override*/;

    virtual bool hasExpired() const /*override*/;

    virtual ::AABB const& getAABB() const /*override*/;

    virtual ::HashedString const& getEffectName() const /*override*/;

    virtual uint64 getParticleCount() const /*override*/;

    virtual uint64 getEffectEmitterCount() const /*override*/;

    virtual uint64 getEffectParticleCount() const /*override*/;

    virtual uint64 getTotalEmitterCount() const /*override*/;

    virtual uint64 getTotalParticleCount() const /*override*/;

    virtual ::Vec3 const& getLastCameraPosition() const /*override*/;

    virtual bool getAreParticlesFromActorButWorldRelative() const /*override*/;

    virtual void tick(::std::chrono::nanoseconds const& dtIn, float const a) /*override*/;

    virtual void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext) /*override*/;

    virtual void extractForRendering(::ParticleRenderData& particleRenderData, float a) /*override*/;

    virtual void setManualParticleEmission(bool manualParticleEmission) /*override*/;

    virtual void
    emitParticleManually(::Vec3 const& particlePosition, ::Vec3 const& velocityAdd, float const scaleMult) /*override*/;

    virtual ::ParticleSystem::ActorBindInfo getActorBindInfo() const /*override*/;

    virtual ::Vec3 const& getPosition() const /*override*/;

    virtual ::Matrix const& getTransform() const /*override*/;

    virtual ::Vec3 const& getWorldPosition() const /*override*/;

    virtual ::Vec3 const& getWorldVelocity() const /*override*/;

    virtual void setMaxNumParticles(uint64 num) /*override*/;

    virtual uint64 getMaxNumParticles() const /*override*/;

    virtual uint64 getNumParticles() const /*override*/;

    virtual uint64 getNumParticlesEmitted() const /*override*/;

    virtual void
    setActorFrameOfReference(bool useActorPosition, bool useActorRotation, bool useEmitterVelocity) /*override*/;

    virtual void setEmissionDuration(float activeTime) /*override*/;

    virtual void setSleepDuration(float sleepTime) /*override*/;

    virtual void setFacing(::HashedString const& facing) /*override*/;

    virtual bool blockListInitialized() /*override*/;

    virtual void initializeBlockList(::buffer_span<::std::string> blockList) /*override*/;

    virtual bool blockAtPositionIsInList(::BlockPos const& blockPos) /*override*/;

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const& blockPosition) const /*override*/;

    virtual ::std::pair<::BrightnessPair, ::BlockPos>
    getBrightestNeighbor(::BlockPos const& blockPosition, ::ParticleSystem::CommonParticle const& particle) const
        /*override*/;

    virtual bool getVisibilityAtBlock(::BlockPos const& blockPosition) const /*override*/;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const& particle) const
        /*override*/;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const& particle) const
        /*override*/;

    virtual ::std::vector<::AABB> const&
    getCollisionShapesForBlockPosition(::BlockPos const& blockPosition) /*override*/;

    virtual ::std::vector<::AABB>& getCollisionAabbList() /*override*/;

    virtual ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>&
    getCollisionSweepList() /*override*/;

    virtual void
    fireEvent(::HashedString const& eventName, ::Vec3 const& position, ::Vec3 const& velocity) /*override*/;

    virtual void
    fireEvent(::HashedString const& eventName, ::Matrix const& transform, ::Vec3 const& velocity) /*override*/;

    virtual bool getUseActorPosition() const /*override*/;

    virtual bool getUseActorRotation() const /*override*/;

    virtual void getParticleWorldPositionAndVelocity(
        ::ParticleSystem::CommonParticle& particle,
        ::Vec3&                           particleWorldPosition,
        ::Vec3&                           particleWorldVelocity
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _computeActorTransformAndReturnIfAttachedToLocator(
        float     a,
        ::Matrix& actorTransform,
        bool      useActorPosition,
        bool      useActorRotation
    ) const;

    MCAPI void _emitNewParticle(
        ::ParticleSystem::ParticleEffect const& effect,
        ::Vec3 const&                           particleOriginOffset,
        ::Vec3 const&                           velocityAdd,
        float const                             scale,
        float const                             a
    );

    MCAPI void _executeEventNode(
        ::ParticleSystem::ParticleEventNode const& eventNode,
        ::HashedString const&                      eventName,
        ::Matrix const&                            transform,
        ::Vec3 const&                              velocity
    );

    MCAPI ::mce::Color _getLightColorForParticle(
        ::ParticleSystem::CommonParticle const&                         particle,
        ::std::shared_ptr<::LightPropagation::LightVolumeManager const> lightVolumeManager
    ) const;

    MCAPI ::std::shared_ptr<::ParticleSystem::ParticleEffect> _lockEffect();

    MCAPI bool _prepareEmitterRenderParams();

    MCAPI void _prepareParticleForRendering(
        ::ParticleSystem::ParticleEffect const& effect,
        ::ParticleSystem::CommonParticle&       particle
    );

    MCAPI void _prepareParticlesForRendering(bool particlesRenderFrame);

    MCAPI void _resetParticleEffectProperties(bool firstTime);

    MCAPI void _setGracefullyExpire();

    MCAPI void _updateRenderParamsForParticle(
        ::ParticleSystem::ParticleEffect const& effect,
        ::ParticleSystem::CommonParticle const& particle
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color& mParticleInitialColor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setActorBindInfo(
        ::Dimension*          dimension,
        ::ActorUniqueID       actorId,
        ::HashedString const& locator,
        ::Vec3 const&         offset
    );

    MCAPI void $setActorBindInfo(::WeakEntityRef actorRef, ::HashedString const& locator, ::Vec3 const& offset);

    MCAPI void $setActorBindInfo(::Actor* actor, ::HashedString const& locator, ::Vec3 const& offset);

    MCAPI void $setEnableUpdate(bool enable);

    MCAPI void $setEnableRender(bool enable);

    MCAPI void $runInitializationScript(::ExpressionNode const& initializationScript);

    MCAPI void $onBlockChanged(::BlockPos const& blockPosition);

    MCAPI void $expire();

    MCAPI bool $isValid() const;

    MCAPI bool $isManualEmitter() const;

    MCAPI bool $expirationRequested() const;

    MCAPI bool $hasExpired() const;

    MCAPI ::AABB const& $getAABB() const;

    MCFOLD ::HashedString const& $getEffectName() const;

    MCAPI uint64 $getParticleCount() const;

    MCAPI uint64 $getEffectEmitterCount() const;

    MCAPI uint64 $getEffectParticleCount() const;

    MCAPI uint64 $getTotalEmitterCount() const;

    MCAPI uint64 $getTotalParticleCount() const;

    MCAPI ::Vec3 const& $getLastCameraPosition() const;

    MCAPI bool $getAreParticlesFromActorButWorldRelative() const;

    MCAPI void $tick(::std::chrono::nanoseconds const& dtIn, float const a);

    MCAPI void $frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext);

    MCAPI void $extractForRendering(::ParticleRenderData& particleRenderData, float a);

    MCAPI void $setManualParticleEmission(bool manualParticleEmission);

    MCAPI void $emitParticleManually(::Vec3 const& particlePosition, ::Vec3 const& velocityAdd, float const scaleMult);

    MCAPI ::ParticleSystem::ActorBindInfo $getActorBindInfo() const;

    MCAPI ::Vec3 const& $getPosition() const;

    MCAPI ::Matrix const& $getTransform() const;

    MCAPI ::Vec3 const& $getWorldPosition() const;

    MCFOLD ::Vec3 const& $getWorldVelocity() const;

    MCAPI void $setMaxNumParticles(uint64 num);

    MCFOLD uint64 $getMaxNumParticles() const;

    MCAPI uint64 $getNumParticles() const;

    MCFOLD uint64 $getNumParticlesEmitted() const;

    MCAPI void $setActorFrameOfReference(bool useActorPosition, bool useActorRotation, bool useEmitterVelocity);

    MCAPI void $setEmissionDuration(float activeTime);

    MCAPI void $setSleepDuration(float sleepTime);

    MCAPI void $setFacing(::HashedString const& facing);

    MCAPI bool $blockListInitialized();

    MCAPI void $initializeBlockList(::buffer_span<::std::string> blockList);

    MCAPI bool $blockAtPositionIsInList(::BlockPos const& blockPos);

    MCAPI ::BrightnessPair $getBrightnessPairAtBlock(::BlockPos const& blockPosition) const;

    MCAPI ::std::pair<::BrightnessPair, ::BlockPos>
    $getBrightestNeighbor(::BlockPos const& blockPosition, ::ParticleSystem::CommonParticle const& particle) const;

    MCAPI bool $getVisibilityAtBlock(::BlockPos const& blockPosition) const;

    MCAPI ::mce::Color $getGameplayLightForParticle(::ParticleSystem::CommonParticle const& particle) const;

    MCAPI ::BrightnessPair $getBrightnessPairForParticle(::ParticleSystem::CommonParticle const& particle) const;

    MCAPI ::std::vector<::AABB> const& $getCollisionShapesForBlockPosition(::BlockPos const& blockPosition);

    MCAPI ::std::vector<::AABB>& $getCollisionAabbList();

    MCAPI ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>& $getCollisionSweepList();

    MCAPI void $fireEvent(::HashedString const& eventName, ::Vec3 const& position, ::Vec3 const& velocity);

    MCAPI void $fireEvent(::HashedString const& eventName, ::Matrix const& transform, ::Vec3 const& velocity);

    MCAPI bool $getUseActorPosition() const;

    MCAPI bool $getUseActorRotation() const;

    MCAPI void $getParticleWorldPositionAndVelocity(
        ::ParticleSystem::CommonParticle& particle,
        ::Vec3&                           particleWorldPosition,
        ::Vec3&                           particleWorldVelocity
    );
    // NOLINTEND
#else // @header-generator platform
    struct AABBCacheElement {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem
