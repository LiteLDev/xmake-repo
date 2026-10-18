#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/animation/ActorAnimationBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/ActorAnimationControllerStateTransition.h"
#include "mc/world/actor/animation/ActorAnimationEvent.h"
#include "mc/world/actor/animation/ActorParticleEffect.h"
#include "mc/world/actor/animation/ActorSoundEffect.h"
#include "mc/world/actor/animation/AnimationValueCurveKeyFrame.h"
#include "mc/world/actor/animation/StateAnimationVariable.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorAnimationController;
class RenderParams;
namespace Json { class Value; }
#else // @header-generator platform
class ActorAnimationControllerStateTransition;
class ActorAnimationEvent;
class ActorParticleEffect;
class ActorSoundEffect;
class AnimationValueCurveKeyFrame;
class ExpressionNode;
class StateAnimationVariable;
#endif // @header-generator platform
// clang-format on

class ActorAnimationControllerState : public ::ActorAnimationBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                                       mName;
    ::ll::TypedStorage<8, 24, std::vector<StateAnimationVariable>>                  mVariables;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<HashedString, ExpressionNode>>> mAnimations;
    ::ll::TypedStorage<8, 24, std::vector<ActorParticleEffect>>                     mParticleEffects;
    ::ll::TypedStorage<8, 48, std::vector<ActorAnimationEvent>[2]>                  mEvents;
    ::ll::TypedStorage<8, 24, std::vector<ActorAnimationControllerStateTransition>> mTransitions;
    ::ll::TypedStorage<8, 24, std::vector<ActorSoundEffect>>                        mSoundEffects;
    ::ll::TypedStorage<1, 1, bool>                                                  mBlendViaShortestPath;
    ::ll::TypedStorage<8, 24, std::vector<AnimationValueCurveKeyFrame>>             mBlendTransitionKeyFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setBlendTransitionTime(float);
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                               mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::StateAnimationVariable>>                      mVariables;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::HashedString, ::ExpressionNode>>> mAnimations;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorParticleEffect>>                         mParticleEffects;
    ::ll::TypedStorage<8, 48, ::std::vector<::ActorAnimationEvent>[2]>                      mEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorAnimationControllerStateTransition>>     mTransitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorSoundEffect>>                            mSoundEffects;
    ::ll::TypedStorage<1, 1, bool>                                                          mBlendViaShortestPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationValueCurveKeyFrame>>                 mBlendTransitionKeyFrames;
#endif // @header-generator platform
    // NOLINTEND
};
