#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/MouseButtonBinding.h"

struct MouseInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MouseButtonBinding>> buttonBindings;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        wheelUpButtonNames;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        wheelDownButtonNames;
    ::ll::TypedStorage<1, 1, bool>                             invertYAxis;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MouseInputMapping();
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
struct MouseButtonBinding;
// clang-format on

struct MouseInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MouseButtonBinding>> buttonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        wheelUpButtonNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        wheelDownButtonNames;
    ::ll::TypedStorage<1, 1, bool>                                 invertYAxis;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MouseInputMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MouseInputMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
