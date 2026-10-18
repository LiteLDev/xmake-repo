#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IAddDisplayActorEntityProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAddDisplayActorEntityProxy();

    virtual void initializeActor(::Actor&) const = 0;

    virtual void registerDisplayEntityToDimension(::Actor const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class IAddDisplayActorEntityProxy {};
#endif // @header-generator platform
