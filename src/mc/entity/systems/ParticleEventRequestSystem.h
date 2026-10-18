#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/entity/components/ParticleEventRequest.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class LevelComponent;
class StrictEntityContext;
struct ParticleEventRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ParticleEventRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(::StrictEntityContext const&, ::LevelComponent&, ::ParticleEventRequestQueueComponent&);

    MCNAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct ParticleEventRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ParticleEventRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _tick(::StrictEntityContext const&, ::LevelComponent& level, ::ParticleEventRequestQueueComponent& requests);

    MCAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
#else // @header-generator platform
struct ParticleEventRequestSystem {};
#endif // @header-generator platform
#endif // @header-generator platform
