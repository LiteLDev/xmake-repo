#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
// clang-format on

namespace RunInitializersSystem {

struct RunInitializers : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntitySystems&> mSystems;
    // NOLINTEND

public:
    // prevent constructor by default
    RunInitializers& operator=(RunInitializers const&);
    RunInitializers(RunInitializers const&);
    RunInitializers();
};

} // namespace RunInitializersSystem
