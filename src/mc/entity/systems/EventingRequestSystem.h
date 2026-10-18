#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/EventingRequest.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class LevelComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
struct EventingRequest;
#else // @header-generator platform
#endif // @header-generator platform
struct EventingRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

class EventingRequestSystem {
public:
    // EventingRequestSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SystemView = ::ViewT<StrictEntityContext, EventingRequestQueueComponent, LevelComponent>;
#else // @header-generator platform
    using SystemView = ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent, ::LevelComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _eventingRequestSystem(::StrictEntityContext const&, ::EventingRequestQueueComponent&, ::LevelComponent&);
#else // @header-generator platform
    MCAPI static void _eventingRequestSystem(
        ::StrictEntityContext const&,
        ::EventingRequestQueueComponent& eventingRequestQueueComponent,
        ::LevelComponent&                levelComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
