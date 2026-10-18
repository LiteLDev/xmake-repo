#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class ApplyAnimationContext;
class BoneOrientation;
class RenderParams;
struct AnimationVisitor;
// clang-format on

class ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString const>   mFriendlyName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString const>   mFriendlyName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode const> mBlendExpression;
    ::ll::TypedStorage<1, 1, bool>                    mExpanded;
    ::ll::TypedStorage<1, 1, bool>                    mAnimationFinished;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorAnimationPlayer();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorAnimationPlayer();
#else // @header-generator platform
    virtual ~ActorAnimationPlayer() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyToPose(::ApplyAnimationContext const&, ::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&, float) = 0;
#else // @header-generator platform
    virtual void applyToPose(
        ::ApplyAnimationContext const&                                                    applyContext,
        ::RenderParams&                                                                   renderParams,
        ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    ) = 0;
#endif // @header-generator platform

    virtual void resetAnimation() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void buildBoneToPartMapping(::AnimationComponent&);
#else // @header-generator platform
    virtual void buildBoneToPartMapping(::AnimationComponent& animationComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);
#else // @header-generator platform
    virtual void
    bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void bindSoundEffects(std::unordered_map<HashedString, std::string> const&);
#else // @header-generator platform
    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);
#endif // @header-generator platform

    virtual bool hasAnimationFinished() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ActorAnimationPlayer> findAnimation(::HashedString const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& friendlyName) = 0;
#endif // @header-generator platform

    virtual ::ActorAnimationType getAnimationType() const = 0;

    virtual ::HashedString const& getRawName() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void visit(::AnimationVisitor&&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void visit(::AnimationVisitor&& dispatcher);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildBoneToPartMapping(::AnimationComponent&);
#else // @header-generator platform
    MCFOLD void $buildBoneToPartMapping(::AnimationComponent& animationComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);
#else // @header-generator platform
    MCFOLD void
    $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const& actorParticleEffectMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $bindSoundEffects(std::unordered_map<HashedString, std::string> const&);
#else // @header-generator platform
    MCFOLD void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const& actorSoundEffectMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $visit(::AnimationVisitor&&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $visit(::AnimationVisitor&& dispatcher);
#else // LL_PLAT_C
    MCFOLD void $visit(::AnimationVisitor&& dispatcher);
#endif
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
