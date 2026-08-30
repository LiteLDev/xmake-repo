#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class OnActorLeaveVolumeComponent;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct OnActorLeaveVolumeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DefinitionTrigger>> mTriggers;
    // NOLINTEND
};
