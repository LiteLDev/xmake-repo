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
    // clang-format off
    virtual ~IActorDimensionTransferer() = default;

    virtual void setupActorForTransfer(::Actor&) = 0;

    virtual ::Vec3 findTargetPositionAndSetPosition(::Actor&, ::DimensionType, ::DimensionType, ::IDimension const&, ::PortalForcer const&, std::optional<Vec3> const&) = 0;

    virtual void transferActor(::Actor&, ::Dimension&, ::Vec3 const&) = 0;
    // clang-format on
    // NOLINTEND
};
