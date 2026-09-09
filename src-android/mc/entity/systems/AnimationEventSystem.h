#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/entity/components/AnimationEventType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityRegistry;
// clang-format on

class AnimationEventSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry&);
    // NOLINTEND
};
