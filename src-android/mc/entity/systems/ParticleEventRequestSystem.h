#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
