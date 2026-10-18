#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class BlockSourceComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorComponent;
struct RemotePlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

struct FlagRemotePlayersForTickingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _tick(::StrictEntityContext const&, ::BlockSourceComponent const&, ::EntityModifier<ActorTickNeededComponent>);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
