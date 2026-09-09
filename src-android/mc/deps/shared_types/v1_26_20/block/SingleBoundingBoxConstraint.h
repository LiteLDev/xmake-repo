#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/core/math/Vec3.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

class SingleBoundingBoxConstraint
: public ::cereal::ConstraintHandle<SharedTypes::v1_26_20::BlockDefinition::SingleBoundingBoxConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mMinBounds;
    ::ll::TypedStorage<4, 12, ::Vec3> mMaxBounds;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
