#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/ChannelTransform.h"
#include "mc/world/actor/animation/ChannelTransformAxisType.h"
#include "mc/world/actor/animation/ChannelTransform_Float.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ExpressionNode;
class RenderParams;
class Vec3;
namespace Json { class Value; }
// clang-format on

class KeyFrameTransformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ChannelTransform>>       mChannelTransforms;
    ::ll::TypedStorage<8, 24, std::vector<ChannelTransform_Float>> mChannelTransforms_Floats;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addChannelTransform(::ExpressionNode const&, int);
    // NOLINTEND
};
