#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class DayCycleEventComponent;
class EntityRegistry;
class LevelComponent;
struct LevelDayCycleEvent;
// clang-format on

class DayCycleEventSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayCycleEventSystem() = default;

    virtual void tick(::EntityRegistry&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
