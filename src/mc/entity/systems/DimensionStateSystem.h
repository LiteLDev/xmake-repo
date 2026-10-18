#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/entity/components/DimensionStateComponent.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class DimensionStateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isDimensionReady(::EntityContext const&);

    MCNAPI static bool isDimensionReady(::WeakRef<EntityContext>);

    MCNAPI static void setDimensionState(::EntityContext&, ::DimensionStateComponent::DimensionState);

    MCNAPI static void setLoadIntoDimensionTimeout(
        ::EntityContext&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
    // NOLINTEND
};
#else // @header-generator platform
class DimensionStateSystem {};
#endif // @header-generator platform
