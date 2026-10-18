#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Vec3;
// clang-format on

class ActorEventBroadcaster {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void broadcastActorEvent(::Actor&, ::ActorEvent, int, ::Dimension&, std::optional<Vec3> const&) const;
    // NOLINTEND
};
#else // @header-generator platform
class ActorEventBroadcaster {};
#endif // @header-generator platform
