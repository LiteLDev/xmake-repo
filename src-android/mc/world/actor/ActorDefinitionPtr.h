#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionGroup;
// clang-format on

class ActorDefinitionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*> mGroup;
    ::ll::TypedStorage<8, 8, ::ActorDefinition*>      mPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorDefinitionPtr& operator=(::ActorDefinitionPtr const&);

    MCNAPI ~ActorDefinitionPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
