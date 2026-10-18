#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct KeyboardKeyBinding;
// clang-format on

struct KeyboardInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::KeyboardKeyBinding>>                            keyBindings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_set<int>>> actionToKeyMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~KeyboardInputMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct KeyboardInputMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
