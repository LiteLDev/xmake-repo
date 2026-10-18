#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#endif // @header-generator platform
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"
#include "mc/world/actor/animation/ActorSkeletalAnimationPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/BoneAnimationPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class ApplyAnimationContext;
class BoneOrientation;
class ExpressionNode;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class RenderParams;
struct AnimationVisitor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BoneAnimationPlayer;
#endif // @header-generator platform
// clang-format on

class ActorSkeletalAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ActorSkeletalAnimationPtr>                                  mAnimationData;
    ::ll::TypedStorage<8, 24, std::vector<BoneAnimationPlayer>>                             mBoneAnimationPlayers;
    ::ll::TypedStorage<8, 40, std::unordered_map<SkeletalHierarchyIndex, std::vector<int>>> mBoneToPartMapping;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, HashedString> const*>         mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, std::string> const*>          mActorSoundEffectMap;
    ::ll::TypedStorage<4, 4, float>                                                         mAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                         mLastAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                         mStartDelay;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ActorSkeletalAnimationPtr>                                        mAnimationData;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoneAnimationPlayer>>                               mBoneAnimationPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<int>>> mBoneToPartMapping;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::std::string> const*>  mActorSoundEffectMap;
    ::ll::TypedStorage<4, 4, float>                                                       mAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                       mLastAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                       mStartDelay;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorSkeletalAnimationPlayer();
#else // @header-generator platform
    virtual void applyToPose(
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyToPose(::ApplyAnimationContext const&, ::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&, float);
#else // @header-generator platform
    virtual void resetAnimation() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetAnimation();
#else // @header-generator platform
    virtual void buildBoneToPartMapping(::AnimationComponent& animationComponent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void buildBoneToPartMapping(::AnimationComponent&);
#else // @header-generator platform
    virtual void bindParticleEffects(
        ::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);
#else // @header-generator platform
    virtual void
    bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void bindSoundEffects(std::unordered_map<HashedString, std::string> const&);
#else // @header-generator platform
    virtual bool hasAnimationFinished() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAnimationFinished() const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ActorAnimationPlayer> findAnimation(::HashedString const&);
#else // @header-generator platform
    virtual ::ActorAnimationType getAnimationType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorAnimationType getAnimationType() const;
#else // @header-generator platform
    virtual ::HashedString const& getRawName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HashedString const& getRawName() const;

    virtual void visit(::AnimationVisitor&&);
    // clang-format on
#else // @header-generator platform
    virtual void visit(::AnimationVisitor&& dispatcher) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorSkeletalAnimationPlayer(
        ::HashedString const&,
        ::ActorSkeletalAnimationPtr,
        ::AnimationComponent&,
        ::ExpressionNode const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ActorSkeletalAnimationPlayer(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _setDefaultPose(::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&) const;
#else // @header-generator platform
    MCAPI void _setDefaultPose(
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::HashedString const&, ::ActorSkeletalAnimationPtr, ::AnimationComponent&, ::ExpressionNode const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::HashedString const&       friendlyName,
        ::ActorSkeletalAnimationPtr animationData,
        ::AnimationComponent&       animationComponent,
        ::ExpressionNode const&     blendExpression
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyToPose(
        ::ApplyAnimationContext const&,
        ::RenderParams&,
        std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&,
        float
#else // @header-generator platform
    MCAPI void $applyToPose(
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetAnimation();
#else // @header-generator platform
    MCAPI void $resetAnimation();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildBoneToPartMapping(::AnimationComponent&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $buildBoneToPartMapping(::AnimationComponent& animationComponent);
#else // LL_PLAT_C
    MCAPI void $buildBoneToPartMapping(::AnimationComponent& animationComponent);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);
#else // @header-generator platform
    MCAPI void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $bindSoundEffects(std::unordered_map<HashedString, std::string> const&);
#else // @header-generator platform
    MCAPI void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAnimationFinished() const;
#else // @header-generator platform
    MCAPI bool $hasAnimationFinished() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ActorAnimationPlayer> $findAnimation(::HashedString const&);
#else // @header-generator platform
    MCFOLD ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorAnimationType $getAnimationType() const;
#else // @header-generator platform
    MCFOLD ::ActorAnimationType $getAnimationType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getRawName() const;
#else // @header-generator platform
    MCAPI ::HashedString const& $getRawName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $visit(::AnimationVisitor&&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $visit(::AnimationVisitor&& dispatcher);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
