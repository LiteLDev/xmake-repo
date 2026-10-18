#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/DismountMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/components_json_legacy/RideableComponentData.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class Actor;
class ActorInteraction;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class InteractionResult;
class Player;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct SeatDescription;
namespace Util { struct HashStringHashGreater; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RideableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 152, ::RideableComponentData> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 168, ::RideableComponentData> mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RideableComponent& operator=(RideableComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RideableComponent();
#else // @header-generator platform
    MCAPI RideableComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool areSeatsFull(::Actor const&) const;
#else // @header-generator platform
    MCAPI bool canAddPassenger(::Actor const& vehicle, ::Actor& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canAddPassenger(::Actor const&, ::Actor&) const;
#else // @header-generator platform
    MCAPI bool getFirstAvailableSeatPosition(::Actor const& owner, ::Actor& potentialPassenger, ::Vec3& result) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool fitsInVehicle(::AABB const&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DismountMode getDismountMode() const;

    MCNAPI bool getFirstAvailableSeatPosition(::Actor const&, ::Actor&, ::Vec3&) const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&) const;

    MCNAPI std::string const& getOnRiderEnterEvent() const;

    MCNAPI std::string const& getOnRiderExitEvent() const;

    MCNAPI int getSeatCount() const;

    MCNAPI std::vector<SeatDescription> const& getSeats() const;

    MCNAPI bool pullInEntity(::Actor&, ::Actor&) const;
#else // @header-generator platform
    MCAPI bool pullInEntity(::Actor& vehicle, ::Actor& passenger) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
