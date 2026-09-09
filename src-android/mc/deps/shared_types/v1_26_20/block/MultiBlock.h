#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/Facing.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct MultiBlock {
public:
    // MultiBlock inner types define
    enum class EnabledState : uchar {
        MultiBlockParts = 0,
        _Count          = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                      mEnabledStates;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Facing> mDirection;
    ::ll::TypedStorage<1, 1, uchar>                 mPartCount;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
