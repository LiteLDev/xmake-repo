#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/MolangScriptArg.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/response/ResponseParameterContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorRenderData;
#else // @header-generator platform
#endif // @header-generator platform
class AnimationComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseActorRenderContext;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class DataDrivenModel;
#else // @header-generator platform
#endif // @header-generator platform
class IBlockWorldGenAPI;
class ILevel;
class ItemStackBase;
class MolangVariableMap;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenModel;
#endif // @header-generator platform
namespace ParticleSystem { class ParticleEmitter; }
// clang-format on

class RenderParams {
public:
    // RenderParams inner types declare
    // clang-format off
    struct Flags;
    // clang-format on

    // RenderParams inner types define
    struct Flags {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mIsChild;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext*>          mBaseActorRenderContext;
    ::ll::TypedStorage<8, 8, ::MolangVariableMap*>               mVariables;
    ::ll::TypedStorage<8, 8, ::AnimationComponent*>              mAnimationComponent;
    ::ll::TypedStorage<8, 8, ::AnimationComponent*>              mRootAnimationComponent;
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenModel>>    mModel;
    ::ll::TypedStorage<4, 4, ::ResponseParameterContext>         mSourceContext;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mActor;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mOther;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mTarget;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mParent;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mBaby;
    ::ll::TypedStorage<8, 8, ::Actor*>                           mDamager;
    ::ll::TypedStorage<8, 8, ::ILevel*>                          mLevel;
    ::ll::TypedStorage<8, 8, ::ItemStackBase*>                   mItemStackBasePtr;
    ::ll::TypedStorage<8, 8, ::Block const*>                     mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mBlockPos;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                     mBlockSource;
    ::ll::TypedStorage<8, 8, ::ActorRenderData*>                 mActorRenderData;
    ::ll::TypedStorage<8, 8, ::ParticleSystem::ParticleEmitter*> mParticleEmitter;
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI*>               mBlockPlacementTarget;
    ::ll::TypedStorage<2, 2, ushort>                             mSubRenderLayerIndex;
    ::ll::UntypedStorage<8, 48>                                  mRandomFunction;
    ::ll::TypedStorage<4, 4, float>                              mCameraDistance;
    ::ll::TypedStorage<1, 1, ::ShadowContext>                    mShadowContext;
    ::ll::TypedStorage<4, 32, float[8]>                          mParams;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                 mThisValue;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                 mScratchValue;
    ::ll::TypedStorage<4, 4, float>                              mHeldItemScale;
    ::ll::TypedStorage<4, 4, ::RenderParams::Flags>              mFlags;
    ::ll::TypedStorage<4, 12, ::Vec3>                            mClickPos;
    ::ll::TypedStorage<4, 4, ::AttachableSlotIndex>              mSlotIndex;
    ::ll::UntypedStorage<1, 16>                                  mIsDitheringEnabled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext*>           mBaseActorRenderContext;
    ::ll::TypedStorage<8, 8, ::MolangVariableMap*>                mVariables;
    ::ll::TypedStorage<8, 8, ::AnimationComponent*>               mAnimationComponent;
    ::ll::TypedStorage<8, 8, ::AnimationComponent*>               mRootAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenModel>> mModel;
    ::ll::TypedStorage<4, 4, ::ResponseParameterContext>          mSourceContext;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mActor;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mOther;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mTarget;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mParent;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mBaby;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mDamager;
    ::ll::TypedStorage<8, 8, ::ILevel*>                           mLevel;
    ::ll::TypedStorage<8, 8, ::ItemStackBase*>                    mItemStackBasePtr;
    ::ll::TypedStorage<8, 8, ::Block const*>                      mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                         mBlockPos;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                      mBlockSource;
    ::ll::TypedStorage<8, 8, ::ActorRenderData*>                  mActorRenderData;
    ::ll::TypedStorage<8, 8, ::ParticleSystem::ParticleEmitter*>  mParticleEmitter;
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI*>                mBlockPlacementTarget;
    ::ll::TypedStorage<2, 2, ushort>                              mSubRenderLayerIndex;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>           mRandomFunction;
    ::ll::TypedStorage<4, 4, float>                               mCameraDistance;
    ::ll::TypedStorage<1, 1, ::ShadowContext>                     mShadowContext;
    ::ll::TypedStorage<4, 32, float[8]>                           mParams;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mThisValue;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mScratchValue;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mThisValue;
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mScratchValue;
#endif
    ::ll::TypedStorage<4, 4, float>                 mHeldItemScale;
    ::ll::TypedStorage<4, 4, ::RenderParams::Flags> mFlags;
    ::ll::TypedStorage<4, 12, ::Vec3>               mClickPos;
    ::ll::TypedStorage<4, 4, ::AttachableSlotIndex> mSlotIndex;
    ::ll::TypedStorage<1, 1, bool>                  mIsDitheringEnabled;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    RenderParams& operator=(RenderParams const&);
    RenderParams(RenderParams const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RenderParams& operator=(RenderParams const&) = default;
    RenderParams()                               = default;

#else // LL_PLAT_C
public:
    // prevent constructor by default
    RenderParams() = default;

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RenderParams();
#else // @header-generator platform
    MCAPI RenderParams(::RenderParams const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getActorTarget(::SharedTypes::Legacy::FilterSubject const) const;

    MCNAPI ::RenderParams& init(
        ::BaseActorRenderContext*,
        ::Actor*,
        ::AnimationComponent*,
        ::MolangVariableMap*,
        std::shared_ptr<DataDrivenModel>,
        float,
        float,
        bool
#else // @header-generator platform
    MCAPI ::RenderParams& init(
        ::BaseActorRenderContext*            baseActorRenderContext,
        ::Actor*                             actor,
        ::AnimationComponent*                animationComponent,
        ::MolangVariableMap*                 variableMap,
        ::std::shared_ptr<::DataDrivenModel> model,
        float                                frameAlpha,
        float                                modelScale,
        bool                                 isDitheringEnabled
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float& operator[](ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::RenderParams& operator=(::RenderParams const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDefaultRandomNumberFunction();

    MCNAPI ~RenderParams();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::RenderParams& getRenderParams(::Actor&);
#else // @header-generator platform
    MCAPI ~RenderParams();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::RenderParams const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
