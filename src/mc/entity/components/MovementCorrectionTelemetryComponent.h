#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

struct MovementCorrectionTelemetryComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ActorType>         mActorType;
    ::ll::TypedStorage<8, 24, std::vector<float>> mDivergences;
    ::ll::TypedStorage<4, 4, int>                 mTickCount;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ActorType>           mActorType;
    ::ll::TypedStorage<8, 24, ::std::vector<float>> mDivergences;
    ::ll::TypedStorage<4, 4, int>                   mTickCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MovementCorrectionTelemetryComponent& operator=(MovementCorrectionTelemetryComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
