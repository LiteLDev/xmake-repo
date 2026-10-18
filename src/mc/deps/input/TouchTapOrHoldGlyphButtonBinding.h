#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchTapOrHoldGlyphButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    tapButtonName;
    ::ll::TypedStorage<8, 24, std::string>    holdButtonName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<4, 4, float>           glyphScale;
    ::ll::TypedStorage<8, 24, std::string>    iconPath;
    ::ll::TypedStorage<8, 24, std::string>    pressedIconPath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TouchTapOrHoldGlyphButtonBinding(::TouchTapOrHoldGlyphButtonBinding const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TouchTapOrHoldGlyphButtonBinding const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchTapOrHoldGlyphButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  tapButtonName;
    ::ll::TypedStorage<8, 32, ::std::string>  holdButtonName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<4, 4, float>           glyphScale;
    ::ll::TypedStorage<8, 32, ::std::string>  iconPath;
    ::ll::TypedStorage<8, 32, ::std::string>  pressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTapOrHoldGlyphButtonBinding& operator=(TouchTapOrHoldGlyphButtonBinding const&);
    TouchTapOrHoldGlyphButtonBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchTapOrHoldGlyphButtonBinding(::TouchTapOrHoldGlyphButtonBinding const&);

    MCAPI ~TouchTapOrHoldGlyphButtonBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TouchTapOrHoldGlyphButtonBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TouchTapOrHoldGlyphButtonBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
