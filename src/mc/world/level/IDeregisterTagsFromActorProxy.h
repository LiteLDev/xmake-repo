#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IDeregisterTagsFromActorProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IDeregisterTagsFromActorProxy();
#else // @header-generator platform
    virtual ~IDeregisterTagsFromActorProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deregisterTagsFromActor(::Actor&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void deregisterTagsFromActor(::Actor& actor) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
