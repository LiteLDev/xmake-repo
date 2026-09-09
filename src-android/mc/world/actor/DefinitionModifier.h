#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EventResponse;
// clang-format on

struct DefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, std::vector<const EventResponse*>> mResponses;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionModifier& operator=(DefinitionModifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefinitionModifier(::DefinitionModifier const&);

    MCNAPI ~DefinitionModifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DefinitionModifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
