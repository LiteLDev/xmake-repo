#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/ActorAnimationEvent.h"
#include "mc/world/actor/animation/ActorParticleEffectEvent.h"
#include "mc/world/actor/animation/ActorSoundEffectEvent.h"
#include "mc/world/actor/animation/AnimationLoopMode.h"
#include "mc/world/actor/animation/BoneAnimation.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace Json { class Value; }
// clang-format on

class ActorSkeletalAnimation {
public:
    // ActorSkeletalAnimation inner types declare
    // clang-format off
    struct Expressions;
    // clang-format on

    // ActorSkeletalAnimation inner types define
    struct Expressions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ExpressionNode&> mBlendWeight;
        ::ll::TypedStorage<8, 8, ::ExpressionNode&> mStartDelayExpr;
        ::ll::TypedStorage<8, 8, ::ExpressionNode&> mLoopDelayExpr;
        ::ll::TypedStorage<8, 8, ::ExpressionNode&> mAnimTimeUpdate;
        // NOLINTEND

    public:
        // prevent constructor by default
        Expressions& operator=(Expressions const&);
        Expressions(Expressions const&);
        Expressions();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                        mName;
    ::ll::TypedStorage<4, 4, float>                                  mAnimationLength;
    ::ll::TypedStorage<4, 4, ::AnimationLoopMode>                    mLoopMode;
    ::ll::TypedStorage<1, 1, bool>                                   mOverridePreviousAnimation;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                      mBlendWeight;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                      mStartDelayExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                      mLoopDelayExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                      mAnimTimeUpdate;
    ::ll::TypedStorage<8, 24, std::vector<BoneAnimation>>            mBoneAnimations;
    ::ll::TypedStorage<8, 24, std::vector<ActorParticleEffectEvent>> mParticleEffectEvents;
    ::ll::TypedStorage<8, 24, std::vector<ActorSoundEffectEvent>>    mSoundEffectEvents;
    ::ll::TypedStorage<8, 24, std::vector<ActorAnimationEvent>>      mEvents;
    ::ll::TypedStorage<8, 24, std::string>                           mSourceFilePathWithExtension;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSkeletalAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BoneAnimation& addBoneAnimation(std::string const&);

    MCNAPI float getAnimationLength() const;

    MCNAPI std::vector<BoneAnimation> const& getBoneAnimations() const;

    MCNAPI std::vector<ActorParticleEffectEvent> const& getParticleEffectEvents() const;

    MCNAPI ::AnimationLoopMode loopMode() const;

    MCNAPI ~ActorSkeletalAnimation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
