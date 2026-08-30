#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/DeprecatedBaseTrigger.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DeprecatedQueuedTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                             mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint>                                                             mDelayIntervalMaxTicks;
    ::ll::TypedStorage<1, 1, bool>                                                             mLooping;
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedBaseTrigger> mOnTimeDown;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
