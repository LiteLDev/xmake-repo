#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/KeyboardKeyBinding.h"

struct KeyboardInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<KeyboardKeyBinding>>                          keyBindings;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_set<int>>> actionToKeyMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~KeyboardInputMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
