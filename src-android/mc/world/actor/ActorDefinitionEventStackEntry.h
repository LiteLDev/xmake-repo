#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEventStackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mEventName;
    ::ll::TypedStorage<8, 24, std::string> mEntityNameTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionEventStackEntry& operator=(ActorDefinitionEventStackEntry const&);
    ActorDefinitionEventStackEntry(ActorDefinitionEventStackEntry const&);
    ActorDefinitionEventStackEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ActorDefinitionEventStackEntry const&) const;

    MCNAPI ~ActorDefinitionEventStackEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
