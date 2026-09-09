#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementPosition {
public:
    // PlacementPosition inner types define
    enum class EnabledState : uchar {
        BlockFace    = 0,
        VerticalHalf = 1,
        _Count       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mEnabledStates;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
