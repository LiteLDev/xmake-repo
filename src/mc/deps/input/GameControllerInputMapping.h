#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct GameControllerButtonBinding;
struct GameControllerStickBinding;
struct GameControllerStickDirectionToButtonBinding;
struct GameControllerStickToButtonBinding;
struct GameControllerTriggerBinding;
// clang-format on

struct GameControllerInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerButtonBinding>>        buttonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerStickBinding>>         stickBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerTriggerBinding>>       triggerBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerStickToButtonBinding>> stickToButtonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerStickDirectionToButtonBinding>>
                                  stickDirectionToButtonBindings;
    ::ll::TypedStorage<4, 4, int> turnStickId;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerInputMapping& operator=(GameControllerInputMapping const&);
    GameControllerInputMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerInputMapping(::GameControllerInputMapping const&);

    MCAPI ~GameControllerInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameControllerInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerInputMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
