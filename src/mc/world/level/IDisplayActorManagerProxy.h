#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IDisplayActorManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDisplayActorManagerProxy() = default;

    virtual void initializeActor(::Actor&) const = 0;

    virtual void unregisterDisplayEntityFromDimension(::Actor const&) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IDisplayActorManagerProxy {};
#endif // @header-generator platform
