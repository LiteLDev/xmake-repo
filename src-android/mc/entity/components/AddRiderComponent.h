#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct AddRiderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionIdentifier>> mPassengersTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    AddRiderComponent& operator=(AddRiderComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AddRiderComponent(::AddRiderComponent&&);

    MCNAPI void reloadComponent(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AddRiderComponent&&);
    // NOLINTEND
};
