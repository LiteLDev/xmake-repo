#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/ChannelTransformAxisType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ChannelTransform_Float;
class RenderParams;
namespace Json { class Value; }
// clang-format on

class ChannelTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]>       mXYZ;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mAxis;
    ::ll::TypedStorage<4, 4, ::ChannelTransformAxisType> mTransformDataType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChannelTransform& operator=(ChannelTransform const&);
    ChannelTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChannelTransform(::ExpressionNode const&, int);

    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneTransformType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExpressionNode const&, int);
    // NOLINTEND
};
