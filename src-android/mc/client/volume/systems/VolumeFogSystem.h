#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class FogManager;
// clang-format on

class VolumeFogSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mFogManager;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeFogSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry&);
    // NOLINTEND
};
