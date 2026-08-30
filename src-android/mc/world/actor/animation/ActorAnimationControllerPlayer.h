#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class HashedString;
class RenderParams;
struct AnimationVisitor;
namespace Util { struct HashStringHashGreater; }
// clang-format on

class ActorAnimationControllerPlayer : public ::ActorAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::ActorAnimationControllerPtr> mAnimationControllerPtr;
    ::ll::TypedStorage<4, 4, int> mCurrStateIndex;
    ::ll::TypedStorage<4, 4, int> mLastStateIndex;
    ::ll::TypedStorage<4, 4, int> mNextStateIndex;
    ::ll::TypedStorage<4, 4, int> mBlendTransitionStateIndex;
    ::ll::TypedStorage<4, 4, float> mBlendTransitionTime;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationControllerStatePlayer>>> mAnimationControllerStatePlayers;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, HashedString> const*> mActorParticleEffectMap;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, std::string> const*> mActorSoundEffectMap;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerPlayer& operator=(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorAnimationControllerPlayer();

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
    MCNAPI ActorAnimationControllerPlayer(
        ::HashedString const&,
        ::ActorAnimationControllerPtr const&,
        ::AnimationComponent&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
    );

    MCNAPI void applyStateAnimationToPose(
        ::ApplyAnimationContext const&,
        ::RenderParams&,
        std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>&,
        float
    );

    MCNAPI std::shared_ptr<ActorAnimationControllerStatePlayer>
           getStatePlayer(::HashedString const&, ::AnimationComponent&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString const&,
        ::ActorAnimationControllerPtr const&,
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
