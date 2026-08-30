#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
struct WasInLavaFlagComponent;
// clang-format on

struct InLavaSensingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doInLavaSensing(
        ::StrictEntityContext const&,
        ::UpdateWaterStateRequestComponent const&,
        ::EntityModifier<WasInLavaFlagComponent>
    );
    // NOLINTEND
};
