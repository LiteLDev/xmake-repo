#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ServerWaypoint.h"
#include "mc/world/ServerWaypointGroup.h"
#include "mc/world/WaypointGroup.h"

struct LocatorBarWaypointPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 120> mPayload;
    ::ll::UntypedStorage<8, 16>  mHandle;
    ::ll::UntypedStorage<1, 1>   mAction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ServerWaypoint::Payload>      mPayload;
    ::ll::TypedStorage<8, 16, ::WaypointGroup::WaypointHandle> mHandle;
    ::ll::TypedStorage<1, 1, ::ServerWaypointGroup::Action>    mAction;
#endif // @header-generator platform
    // NOLINTEND
};
