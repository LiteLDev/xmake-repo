#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"

struct AllowedAnywhereConsume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mOpenContainerNetId;
    ::ll::TypedStorage<1, 1, uchar>                mMinSlot;
    ::ll::TypedStorage<1, 1, uchar>                mMaxSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowedAnywhereConsume();
};
