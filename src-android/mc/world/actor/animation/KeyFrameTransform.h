#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/KeyFrameLerpMode.h"
#include "mc/world/actor/animation/KeyFrameTransformData.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ExpressionNode;
class RenderParams;
class Vec3;
namespace Json { class Value; }
// clang-format on

class KeyFrameTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<KeyFrameTransformData>> mPrePost;
    ::ll::TypedStorage<8, 16, ::KeyFrameLerpMode>                 mLerpMode;
    ::ll::TypedStorage<4, 4, float>                               mKeyFrameTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&);
    KeyFrameTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneTransformType) const;

    MCNAPI ~KeyFrameTransform();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    computeCubicPolynomial(::KeyFrameTransform*, ::KeyFrameTransform&, ::KeyFrameTransform&, ::KeyFrameTransform*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
