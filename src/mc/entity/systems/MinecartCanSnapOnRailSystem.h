#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
struct InterpolateMovementNeededComponent;
struct RailMovementComponent;
#endif // @header-generator platform
struct SnapOnRailComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

struct MinecartCanSnapOnRailSystem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // MinecartCanSnapOnRailSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::RailMovementComponent>,
        ::StateVectorComponent const>;

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _checkCanSnapOnRail(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&,
        ::EntityModifier<SnapOnRailComponent>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void _checkCanSnapOnRail(
        ::StrictEntityContext const&            context,
        ::StateVectorComponent const&           stateVectorComponent,
        ::EntityModifier<::SnapOnRailComponent> mod,
        ::IConstBlockSource const&              constBlockSource
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
