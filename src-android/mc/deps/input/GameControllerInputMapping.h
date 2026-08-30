#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/GameControllerButtonBinding.h"
#include "mc/deps/input/GameControllerStickBinding.h"
#include "mc/deps/input/GameControllerStickDirectionToButtonBinding.h"
#include "mc/deps/input/GameControllerStickToButtonBinding.h"
#include "mc/deps/input/GameControllerTriggerBinding.h"

struct GameControllerInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GameControllerButtonBinding>>                 buttonBindings;
    ::ll::TypedStorage<8, 24, std::vector<GameControllerStickBinding>>                  stickBindings;
    ::ll::TypedStorage<8, 24, std::vector<GameControllerTriggerBinding>>                triggerBindings;
    ::ll::TypedStorage<8, 24, std::vector<GameControllerStickToButtonBinding>>          stickToButtonBindings;
    ::ll::TypedStorage<8, 24, std::vector<GameControllerStickDirectionToButtonBinding>> stickDirectionToButtonBindings;
    ::ll::TypedStorage<4, 4, int>                                                       turnStickId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameControllerInputMapping(::GameControllerInputMapping const&);

    MCNAPI ~GameControllerInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameControllerInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
