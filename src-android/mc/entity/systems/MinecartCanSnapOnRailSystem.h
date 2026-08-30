#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
struct SnapOnRailComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

struct MinecartCanSnapOnRailSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _checkCanSnapOnRail(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&,
        ::EntityModifier<SnapOnRailComponent>,
        ::IConstBlockSource const&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
