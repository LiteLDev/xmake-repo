#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class OnActorLeaveVolumeComponent;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct OnActorLeaveVolumeDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DefinitionTrigger>> mTriggers;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk7b4cfd;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OnActorLeaveVolumeDefinition& operator=(OnActorLeaveVolumeDefinition const&);
    OnActorLeaveVolumeDefinition(OnActorLeaveVolumeDefinition const&);
    OnActorLeaveVolumeDefinition();
#endif // @header-generator platform
};
