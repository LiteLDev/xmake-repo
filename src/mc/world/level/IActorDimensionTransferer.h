#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class IDimension;
class PortalForcer;
class Vec3;
struct DimensionType;
// clang-format on

class IActorDimensionTransferer {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IActorDimensionTransferer() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupActorForTransfer(::Actor&) = 0;
#else // @header-generator platform
    virtual void setupActorForTransfer(::Actor& actor) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 findTargetPositionAndSetPosition(::Actor&, ::DimensionType, ::DimensionType, ::IDimension const&, ::PortalForcer const&, std::optional<Vec3> const&) = 0;
#else // @header-generator platform
    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&                       actor,
        ::DimensionType                toId,
        ::DimensionType                fromId,
        ::IDimension const&            toDimension,
        ::PortalForcer const&          portalForcer,
        ::std::optional<::Vec3> const& actorPosition
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferActor(::Actor&, ::Dimension&, ::Vec3 const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
