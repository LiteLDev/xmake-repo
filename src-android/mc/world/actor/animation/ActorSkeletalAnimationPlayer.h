#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"
#include "mc/world/actor/animation/ActorSkeletalAnimationPtr.h"
#include "mc/world/actor/animation/BoneAnimationPlayer.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class ApplyAnimationContext;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
struct AnimationVisitor;
// clang-format on

class ActorSkeletalAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ActorSkeletalAnimationPtr>                                  mAnimationData;
    ::ll::TypedStorage<8, 24, std::vector<BoneAnimationPlayer>>                             mBoneAnimationPlayers;
    ::ll::TypedStorage<8, 40, std::unordered_map<SkeletalHierarchyIndex, std::vector<int>>> mBoneToPartMapping;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, HashedString> const*>         mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, std::string> const*>          mActorSoundEffectMap;
    ::ll::TypedStorage<4, 4, float>                                                         mAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                         mLastAnimTime;
    ::ll::TypedStorage<4, 4, float>                                                         mStartDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorSkeletalAnimationPlayer();

    virtual void applyToPose(::ApplyAnimationContext const&, ::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&, float);

    virtual void resetAnimation();

    virtual void buildBoneToPartMapping(::AnimationComponent&);

    virtual void bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);

    virtual void bindSoundEffects(std::unordered_map<HashedString, std::string> const&);

    virtual bool hasAnimationFinished() const;

    virtual std::shared_ptr<ActorAnimationPlayer> findAnimation(::HashedString const&);

    virtual ::ActorAnimationType getAnimationType() const;

    virtual ::HashedString const& getRawName() const;

    virtual void visit(::AnimationVisitor&&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSkeletalAnimationPlayer(
        ::HashedString const&,
        ::ActorSkeletalAnimationPtr,
        ::AnimationComponent&,
        ::ExpressionNode const&
    );

    MCNAPI void
    _setDefaultPose(::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::HashedString const&, ::ActorSkeletalAnimationPtr, ::AnimationComponent&, ::ExpressionNode const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyToPose(
        ::ApplyAnimationContext const&,
        ::RenderParams&,
        std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&,
        float
    );

    MCNAPI void $resetAnimation();

    MCNAPI void $buildBoneToPartMapping(::AnimationComponent&);

    MCNAPI void $bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);

    MCNAPI void $bindSoundEffects(std::unordered_map<HashedString, std::string> const&);

    MCNAPI bool $hasAnimationFinished() const;

    MCNAPI std::shared_ptr<ActorAnimationPlayer> $findAnimation(::HashedString const&);

    MCNAPI ::ActorAnimationType $getAnimationType() const;

    MCNAPI ::HashedString const& $getRawName() const;

    MCNAPI void $visit(::AnimationVisitor&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
