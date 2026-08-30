#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/RenderingRidingOffsetInfo.h"

struct VehicleRenderingRidingOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RenderingRidingOffsetInfo>> mOffsetsInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    VehicleRenderingRidingOffsetComponent& operator=(VehicleRenderingRidingOffsetComponent const&);
    VehicleRenderingRidingOffsetComponent();
};
