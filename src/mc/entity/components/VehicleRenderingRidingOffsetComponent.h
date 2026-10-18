#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/RenderingRidingOffsetInfo.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct RenderingRidingOffsetInfo;
// clang-format on
#endif // @header-generator platform

struct VehicleRenderingRidingOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RenderingRidingOffsetInfo>> mOffsetsInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderingRidingOffsetInfo>> mOffsetsInfo;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    VehicleRenderingRidingOffsetComponent& operator=(VehicleRenderingRidingOffsetComponent const&);
    VehicleRenderingRidingOffsetComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
