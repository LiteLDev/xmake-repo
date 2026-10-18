#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#endif // @header-generator platform
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationControllerPtr.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerStatePlayer;
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
namespace Util { struct HashStringHashGreater; }
// clang-format on

class ActorAnimationControllerPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ActorAnimationControllerPtr> mAnimationControllerPtr;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mCurrStateIndex;
    ::ll::TypedStorage<4, 4, int> mLastStateIndex;
    ::ll::TypedStorage<4, 4, int> mNextStateIndex;
    ::ll::TypedStorage<4, 4, int> mBlendTransitionStateIndex;
    ::ll::TypedStorage<4, 4, float> mBlendTransitionTime;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationControllerStatePlayer>>> mAnimationControllerStatePlayers;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, HashedString> const*> mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, std::string> const*> mActorSoundEffectMap;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            mCurrStateIndex;
    ::ll::TypedStorage<4, 4, int>                            mLastStateIndex;
    ::ll::TypedStorage<4, 4, int>                            mNextStateIndex;
    ::ll::TypedStorage<4, 4, int>                            mBlendTransitionStateIndex;
    ::ll::TypedStorage<4, 4, float>                          mBlendTransitionTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationControllerStatePlayer>>>
        mAnimationControllerStatePlayers;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::std::string> const*>  mActorSoundEffectMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorAnimationControllerPlayer& operator=(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer(ActorAnimationControllerPlayer const&);
#else // @header-generator platform
#endif // @header-generator platform
    ActorAnimationControllerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorAnimationControllerPlayer();
#else // @header-generator platform
    virtual void applyToPose(
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
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
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& friendlyName) /*override*/;
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
    MCNAPI ActorAnimationControllerPlayer(
        ::HashedString const&,
        ::ActorAnimationControllerPtr const&,
        ::AnimationComponent&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
#else // @header-generator platform
    MCAPI ActorAnimationControllerPlayer(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPtr const&                       animationControllerPtr,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyStateAnimationToPose(
        ::ApplyAnimationContext const&,
        ::RenderParams&,
        std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&,
        float
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<::ActorAnimationControllerStatePlayer>
    getStatePlayer(::HashedString const& stateName, ::AnimationComponent& animationComponent, bool createIfMissing);
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ActorAnimationControllerStatePlayer>
           getStatePlayer(::HashedString const&, ::AnimationComponent&, bool);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void blendViaShortestPath(
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>> const&
            blendOutBoneOrientationsMap,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>> const&
              blendInBoneOrientationsMap,
        float blendInWeight,
        float blendWeight
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::HashedString const&,
        ::ActorAnimationControllerPtr const&,
        ::AnimationComponent&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPtr const&                       animationControllerPtr,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
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
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetAnimation();
#else // @header-generator platform
    MCAPI void $resetAnimation();
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
    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> $findAnimation(::HashedString const& friendlyName);
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
