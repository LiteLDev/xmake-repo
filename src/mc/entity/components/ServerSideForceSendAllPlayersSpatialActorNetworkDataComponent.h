#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ForceSendSpatialDataValue.h"

struct ServerSideForceSendAllPlayersSpatialActorNetworkDataComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mForceValue;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ForceSendSpatialDataValue> mForceValue;
#endif // @header-generator platform
    // NOLINTEND
};
