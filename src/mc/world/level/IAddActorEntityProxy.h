#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IAddActorEntityProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IAddActorEntityProxy();
#else // @header-generator platform
    virtual ~IAddActorEntityProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeActor(::Actor&) = 0;
#else // @header-generator platform
    virtual void initializeActor(::Actor& actor) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadActor(::Actor&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void reloadActor(::Actor& actor) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
