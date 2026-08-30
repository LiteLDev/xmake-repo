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
    ::ll::TypedStorage<8, 40, ::HashedString const>   mFriendlyName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode const> mBlendExpression;
    ::ll::TypedStorage<1, 1, bool>                    mExpanded;
    ::ll::TypedStorage<1, 1, bool>                    mAnimationFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorAnimationPlayer();

    virtual void applyToPose(::ApplyAnimationContext const&, ::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&, float) = 0;

    virtual void resetAnimation() = 0;

    virtual void buildBoneToPartMapping(::AnimationComponent&);

    virtual void bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);

    virtual void bindSoundEffects(std::unordered_map<HashedString, std::string> const&);

    virtual bool hasAnimationFinished() const = 0;

    virtual std::shared_ptr<ActorAnimationPlayer> findAnimation(::HashedString const&) = 0;

    virtual ::ActorAnimationType getAnimationType() const = 0;

    virtual ::HashedString const& getRawName() const = 0;

    virtual void visit(::AnimationVisitor&&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $buildBoneToPartMapping(::AnimationComponent&);

    MCNAPI void $bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);

    MCNAPI void $bindSoundEffects(std::unordered_map<HashedString, std::string> const&);

    MCNAPI void $visit(::AnimationVisitor&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
