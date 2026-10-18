#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/molang/MolangVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerState;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorSkeletalAnimationPtr;
#else // @header-generator platform
#endif // @header-generator platform
class AnimationComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class AnimationValueCurveKeyFrame;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorAnimationControllerPlayer&>                   mOwner;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerState>>     mControllerState;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationPlayer>>> mAnimationPlayers;
    ::ll::TypedStorage<4, 4, float>                                               mStateTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorAnimationControllerPlayer&>                         mOwner;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationControllerState>>       mControllerState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationPlayer>>> mAnimationPlayers;
    ::ll::TypedStorage<4, 4, float>                                                     mStateTime;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorAnimationControllerStatePlayer();
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
    virtual void bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void bindParticleEffects(std::unordered_map<HashedString, HashedString> const&);
#else // @header-generator platform
    virtual void bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const&) /*override*/;
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ActorAnimationControllerStatePlayer(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPlayer&                          owner,
        ::std::shared_ptr<::ActorAnimationControllerState>         animationControllerState,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::HashedString const&                                      friendlyName,
        ::ActorAnimationControllerPlayer&                          owner,
        ::std::shared_ptr<::ActorAnimationControllerState>         animationControllerState,
        ::AnimationComponent&                                      animationComponent,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
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
    MCFOLD void $bindParticleEffects(::std::unordered_map<::HashedString, ::HashedString> const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $bindSoundEffects(std::unordered_map<HashedString, std::string> const&);
#else // @header-generator platform
    MCFOLD void $bindSoundEffects(::std::unordered_map<::HashedString, ::std::string> const&);
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
    MCFOLD ::HashedString const& $getRawName() const;
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
