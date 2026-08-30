#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct BlockCollisionEvaluationQueueComponent {
public:
    // BlockCollisionEvaluationQueueComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // BlockCollisionEvaluationQueueComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPos;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockCollisionEvaluationQueueComponent::Data>> mToEvaluate;
    // NOLINTEND
};
