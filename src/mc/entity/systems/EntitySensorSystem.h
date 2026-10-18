#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySensorComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorTickedComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct CurrentTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class EntitySensorSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static void _tickEntitySensorComponent(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&        actorOwnerComponent,
        ::EntitySensorComponent&      entitySensorComponent,
        ::CurrentTickComponent const& currentTickComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
