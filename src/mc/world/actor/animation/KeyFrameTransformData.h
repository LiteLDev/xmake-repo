#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/ChannelTransform.h"
#include "mc/world/actor/animation/ChannelTransformAxisType.h"
#include "mc/world/actor/animation/ChannelTransform_Float.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BoneOrientation;
#else // @header-generator platform
class ChannelTransform;
class ChannelTransform_Float;
#endif // @header-generator platform
class ExpressionNode;
#if defined(LL_PLAT_A) // @header-generator platform
class RenderParams;
class Vec3;
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class KeyFrameTransformData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ChannelTransform>>       mChannelTransforms;
    ::ll::TypedStorage<8, 24, std::vector<ChannelTransform_Float>> mChannelTransforms_Floats;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ChannelTransform>>       mChannelTransforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChannelTransform_Float>> mChannelTransforms_Floats;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addChannelTransform(::ExpressionNode const&, int);
#else // @header-generator platform
    MCAPI void addChannelTransform(::ExpressionNode const& expression, int axisIndex);
#endif // @header-generator platform
    // NOLINTEND
};
