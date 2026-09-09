#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct NameAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mNameFilters;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnNamed;
    // NOLINTEND

public:
    // prevent constructor by default
    NameAction& operator=(NameAction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addNameFilterByName(std::string const&);

    MCNAPI ~NameAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
