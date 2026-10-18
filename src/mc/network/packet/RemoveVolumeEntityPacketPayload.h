#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/world/level/dimension/DimensionType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RemoveVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::TypedStorage<4, 4, ::EntityNetId>   mEntityNetId;
    // NOLINTEND
};
