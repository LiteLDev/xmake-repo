#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DismountMode.h"
#include "mc/entity/components_json_legacy/RideableComponentData.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorInteraction;
class HashedString;
class InteractionResult;
class Player;
class Vec3;
struct SeatDescription;
namespace Util { struct HashStringHashGreater; }
// clang-format on

class RideableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::RideableComponentData> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponent& operator=(RideableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RideableComponent();

    MCNAPI bool areSeatsFull(::Actor const&) const;

    MCNAPI bool canAddPassenger(::Actor const&, ::Actor&) const;

    MCNAPI bool fitsInVehicle(::AABB const&) const;

    MCNAPI ::DismountMode getDismountMode() const;

    MCNAPI bool getFirstAvailableSeatPosition(::Actor const&, ::Actor&, ::Vec3&) const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&) const;

    MCNAPI std::string const& getOnRiderEnterEvent() const;

    MCNAPI std::string const& getOnRiderExitEvent() const;

    MCNAPI int getSeatCount() const;

    MCNAPI std::vector<SeatDescription> const& getSeats() const;

    MCNAPI bool pullInEntity(::Actor&, ::Actor&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
