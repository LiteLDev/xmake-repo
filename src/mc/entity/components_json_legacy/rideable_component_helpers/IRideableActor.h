#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
struct ActorUniqueID;
struct FamilyTypeDefinition;
namespace VehicleUtils { struct VehicleRootInfo; }
// clang-format on

#endif // @header-generator platform
namespace RideableComponentHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
class IRideableActor {};
#else // @header-generator platform
class IRideableActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRideableActor() = default;

    virtual ::ActorUniqueID const& getOrCreateUniqueID() const = 0;

    virtual ::EntityContext const& getEntity() const = 0;

    virtual ::FamilyTypeDefinition const* getFamilyTypeDefinition() const = 0;

    virtual bool isPaused() const = 0;

    virtual bool isAlive() const = 0;

    virtual bool canBeAddedAsPassenger(::RideableComponentHelpers::IRideableActor const&) const = 0;

    virtual ::VehicleUtils::VehicleRootInfo getVehicleRoot() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RideableComponentHelpers
