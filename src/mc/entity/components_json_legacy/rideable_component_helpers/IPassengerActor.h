#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

#endif // @header-generator platform
namespace RideableComponentHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
class IPassengerActor {};
#else // @header-generator platform
class IPassengerActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPassengerActor() = default;

    virtual bool canBePulledIntoVehicle() const = 0;

    virtual bool isRiding() const = 0;

    virtual bool isLeashed() const = 0;

    virtual bool isUnderLeashHardDistance() const = 0;

    virtual ::AABB const& getAABB() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RideableComponentHelpers
