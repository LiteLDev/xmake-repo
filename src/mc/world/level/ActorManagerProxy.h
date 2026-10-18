#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IActorManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActorManagerProxy : public ::IActorManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeActor(::Actor&);
#else // @header-generator platform
    virtual void removeActor(::Actor& actor) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeActor(::Actor&);
#else // @header-generator platform
    MCNAPI void $removeActor(::Actor& actor);


#endif // @header-generator platform
    // NOLINTEND
};
