#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/vanilla_components/VehicleInputIntentComponent.h"
#include "mc/entity/components_json_legacy/BuoyancyComponent.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace History {

struct NonPlayerComponents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::VehicleInputIntentComponent> mVehicleInputIntent;
    ::ll::TypedStorage<8, 56, ::BuoyancyComponent>           mBuoyancy;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkb77e40;
    ::ll::UntypedStorage<8, 56> mUnke31458;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NonPlayerComponents& operator=(NonPlayerComponents const&);
    NonPlayerComponents(NonPlayerComponents const&);
    NonPlayerComponents();
#endif // @header-generator platform
};

} // namespace History
