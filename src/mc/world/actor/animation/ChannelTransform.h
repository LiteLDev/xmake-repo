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
#if defined(LL_PLAT_A) // @header-generator platform
class ChannelTransform_Float;
#else // @header-generator platform
#endif // @header-generator platform
class RenderParams;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ChannelTransform& operator=(ChannelTransform const&);
#else // @header-generator platform
#endif // @header-generator platform
    ChannelTransform();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChannelTransform(::ExpressionNode const&, int);
#else // @header-generator platform
    MCAPI ChannelTransform(::ExpressionNode const& expression, int axisIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneTransformType) const;
#else // @header-generator platform
    MCAPI void animate(
        ::RenderParams&     renderParams,
        ::BoneOrientation&  destBoneOrientation,
        float               scale,
        ::BoneTransformType boneTransformType
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ExpressionNode const&, int);
#else // @header-generator platform
    MCAPI void* $ctor(::ExpressionNode const& expression, int axisIndex);
#endif // @header-generator platform
    // NOLINTEND
};
