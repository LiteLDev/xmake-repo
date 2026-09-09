#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/animation/BoneAnimationChannel.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/actor/animation/BoneTransformType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class RenderParams;
struct BoneAnimationPlayer;
namespace Json { class Value; }
// clang-format on

class BoneAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                    mBoneName;
    ::ll::TypedStorage<8, 24, std::vector<BoneAnimationChannel>> mAnimationChannels;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>        mRotationRelativeMode;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimation& operator=(BoneAnimation const&);
    BoneAnimation(BoneAnimation const&);
    BoneAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneAnimationPlayer*) const;

    MCNAPI std::vector<BoneAnimationChannel> const& getAnimationChannels() const;
    // NOLINTEND
};
