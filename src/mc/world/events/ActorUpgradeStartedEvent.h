#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
// clang-format on

struct ActorUpgradeStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                              mActor;
    ::ll::TypedStorage<8, 24, std::string const>                    mUpgrade;
    ::ll::TypedStorage<8, 8, std::vector<ActorDefinitionModifier>&> mDefinitionModifiers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                                  mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mUpgrade;
    ::ll::TypedStorage<8, 8, ::std::vector<::ActorDefinitionModifier>&> mDefinitionModifiers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUpgradeStartedEvent& operator=(ActorUpgradeStartedEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorUpgradeStartedEvent(ActorUpgradeStartedEvent const&);
#endif // @header-generator platform
    ActorUpgradeStartedEvent();
};
