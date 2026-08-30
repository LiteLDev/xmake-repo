#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class ActorEventResponse;
// clang-format on

struct ActorDefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>               mAddGroups;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>               mRemoveGroups;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, std::vector<const ActorEventResponse*>> mResponses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionModifier(::ActorDefinitionModifier const&);

    MCNAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionModifier const&);
    // NOLINTEND
};
