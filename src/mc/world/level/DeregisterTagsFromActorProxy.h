#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IDeregisterTagsFromActorProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DeregisterTagsFromActorProxy : public ::IDeregisterTagsFromActorProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeregisterTagsFromActorProxy();
#else // @header-generator platform
    virtual ~DeregisterTagsFromActorProxy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deregisterTagsFromActor(::Actor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void deregisterTagsFromActor(::Actor& actor) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deregisterTagsFromActor(::Actor&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $deregisterTagsFromActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
