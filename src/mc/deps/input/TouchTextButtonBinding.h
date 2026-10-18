#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchTextButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    buttonName;
    ::ll::TypedStorage<4, 4, uint>            pointBindingName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 4, uint>            opacityBindingName;
    ::ll::TypedStorage<4, 4, uint>            labelBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<1, 1, bool>            passThrough;
    ::ll::TypedStorage<4, 4, int>             touchStateRequirement;
    ::ll::TypedStorage<1, 1, bool>            extendButtonPressOutsideUntilReleased;
    ::ll::TypedStorage<8, 24, std::string>    iconPath;
    ::ll::TypedStorage<8, 24, std::string>    pressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTextButtonBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TouchTextButtonBinding(::TouchTextButtonBinding const&);

    MCNAPI TouchTextButtonBinding(
        std::string const&,
        uint,
        uint,
        uint,
        uint,
        uint,
        ::ButtonColors const&,
        int,
        int,
        int,
        int,
        bool,
        int,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TouchTextButtonBinding const&);

    MCNAPI void*
    $ctor(std::string const&, uint, uint, uint, uint, uint, ::ButtonColors const&, int, int, int, int, bool, int, bool);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchTextButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  buttonName;
    ::ll::TypedStorage<4, 4, uint>            pointBindingName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 4, uint>            opacityBindingName;
    ::ll::TypedStorage<4, 4, uint>            labelBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<1, 1, bool>            passThrough;
    ::ll::TypedStorage<4, 4, int>             touchStateRequirement;
    ::ll::TypedStorage<1, 1, bool>            extendButtonPressOutsideUntilReleased;
    ::ll::TypedStorage<8, 32, ::std::string>  iconPath;
    ::ll::TypedStorage<8, 32, ::std::string>  pressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTextButtonBinding& operator=(TouchTextButtonBinding const&);
    TouchTextButtonBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchTextButtonBinding(::TouchTextButtonBinding const&);

    MCAPI ~TouchTextButtonBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TouchTextButtonBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TouchTextButtonBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
