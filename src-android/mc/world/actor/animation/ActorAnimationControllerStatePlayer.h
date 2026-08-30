#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerState;
class ActorSkeletalAnimationPtr;
class AnimationComponent;
class AnimationValueCurveKeyFrame;
class ApplyAnimationContext;
class BoneOrientation;
class ExpressionNode;
class HashedString;
class RenderParams;
struct AnimationVisitor;
namespace Util { struct HashStringHashGreater; }
// clang-format on

class ActorAnimationControllerStatePlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorAnimationControllerPlayer&>                   mOwner;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerState>>     mControllerState;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationPlayer>>> mAnimationPlayers;
    ::ll::TypedStorage<4, 4, float>                                               mStateTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorAnimationControllerStatePlayer();

    virtual void applyToPose(::ApplyAnimationContext const&, ::RenderParams&, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&, float);

    virtual void resetAnimation();

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
    MCNAPI ActorAnimationControllerStatePlayer(
        ::HashedString const&,
        ::ActorAnimationControllerPlayer&,
        std::shared_ptr<ActorAnimationControllerState>,
        ::AnimationComponent&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
    );

    MCNAPI bool allAnimationsFinished() const;

    MCNAPI bool anyAnimationsFinished() const;

    MCNAPI float getStateTime() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString const&,
        ::ActorAnimationControllerPlayer&,
        std::shared_ptr<ActorAnimationControllerState>,
        ::AnimationComponent&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
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
    MCNAPI void $applyToPose(
        ::ApplyAnimationContext const&,
        ::RenderParams&,
        std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&,
        float
    );

    MCNAPI void $resetAnimation();

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
