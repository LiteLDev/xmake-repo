#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/KeyFrameTransform.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ExpressionNode;
class RenderParams;
struct BoneAnimationChannelPlayer;
namespace Json { class Value; }
// clang-format on

class BoneAnimationChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BoneTransformType>             mBoneTransformType;
    ::ll::TypedStorage<8, 24, std::vector<KeyFrameTransform>> mKeyFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel(BoneAnimationChannel const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneAnimationChannelPlayer*) const;
    // NOLINTEND
};
