#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionModifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorUpgradeEndedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                    mActor;
    ::ll::TypedStorage<8, 24, std::string const>                          mUpgrade;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionModifier> const> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUpgradeEndedEvent& operator=(ActorUpgradeEndedEvent const&);
    ActorUpgradeEndedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorUpgradeEndedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
