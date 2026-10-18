#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

#endif // @header-generator platform
namespace RideableComponentHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
class IActorWrapper {};
#else // @header-generator platform
class IActorWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorWrapper() = default;

    virtual ::Actor& getWrappedObject() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RideableComponentHelpers
