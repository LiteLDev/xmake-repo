#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/components/block_transformation_serializer/RotationBindingType.h"

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
};

} // namespace BlockTransformationSerializer
