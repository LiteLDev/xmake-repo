#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
// clang-format on

struct ActorDefinitionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                              mActor;
    ::ll::TypedStorage<8, 24, std::string const>                    mEvent;
    ::ll::TypedStorage<8, 8, std::vector<ActorDefinitionModifier>&> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionStartedEvent& operator=(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent();
};
