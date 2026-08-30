#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntitiesInsideVolumeComponent;
class EntityContext;
class EntityRegistry;
class ILevel;
class VolumeBoundsComponent;
// clang-format on

class EntityExitVolumeSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityExitVolumeSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry&);
    // NOLINTEND
};
