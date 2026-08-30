#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/position_trackingdb/OperationBase.h"

namespace PositionTrackingDB {

class UpdateOperation : public ::PositionTrackingDB::OperationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>     mUpdatedPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    // NOLINTEND
};

} // namespace PositionTrackingDB
