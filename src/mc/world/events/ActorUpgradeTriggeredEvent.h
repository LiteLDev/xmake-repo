#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorUpgradeTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>           mActor;
    ::ll::TypedStorage<8, 24, std::string const> mUpgrade;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>             mActor;
    ::ll::TypedStorage<8, 32, ::std::string const> mUpgrade;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUpgradeTriggeredEvent& operator=(ActorUpgradeTriggeredEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorUpgradeTriggeredEvent(ActorUpgradeTriggeredEvent const&);
#endif // @header-generator platform
    ActorUpgradeTriggeredEvent();
};
