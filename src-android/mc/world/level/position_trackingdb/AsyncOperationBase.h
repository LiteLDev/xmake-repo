#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/position_trackingdb/OperationBase.h"

namespace PositionTrackingDB {

class AsyncOperationBase : public ::PositionTrackingDB::OperationBase {
public:
    // AsyncOperationBase inner types define
    enum class InternalState : int {
        Init     = 0,
        Tick     = 1,
        Quit     = 2,
        Complete = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PositionTrackingDB::AsyncOperationBase::InternalState> mInternalState;
    ::ll::TypedStorage<1, 1, bool>                                                    mErrored;
    // NOLINTEND
};

} // namespace PositionTrackingDB
