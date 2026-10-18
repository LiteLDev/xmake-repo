#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/actor/ActorEvent.h"

struct ActorEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>     mRuntimeId;
    ::ll::TypedStorage<1, 1, ::ActorEvent>         mEventId;
    ::ll::TypedStorage<4, 4, int>                  mData;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mFireAtPosition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>         mRuntimeId;
    ::ll::TypedStorage<1, 1, ::ActorEvent>             mEventId;
    ::ll::TypedStorage<4, 4, int>                      mData;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mFireAtPosition;
#endif // @header-generator platform
    // NOLINTEND
};
