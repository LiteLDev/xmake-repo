#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct TransformationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mTranslation;
    ::ll::TypedStorage<4, 12, ::Vec3> mScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mScalePivot;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotationPivot;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
