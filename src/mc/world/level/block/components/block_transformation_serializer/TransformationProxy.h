#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/components/block_transformation_serializer/RotationBindingType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace BlockTransformationSerializer {

struct TransformationProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mTranslation;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mScaleValue;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mScalePivot;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mRotationPivot;
    ::ll::TypedStorage<4, 12, ::BlockTransformationSerializer::RotationBindingType> mRotation;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace BlockTransformationSerializer
