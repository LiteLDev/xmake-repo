#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AttributesComponent;
struct MovementAttributesComponent;
struct TickingSystemWithInfo;
// clang-format on

struct UpdateAttributesSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AttributesComponent copyMovementAttributes(::AttributesComponent const&);

    MCNAPI static ::TickingSystemWithInfo createProcessRequestSystem();

    MCNAPI static ::TickingSystemWithInfo createUpdateSystem();

    MCNAPI static void updateMovementAttribute(::MovementAttributesComponent const&, ::MovementAttributesComponent&);
    // NOLINTEND
};
