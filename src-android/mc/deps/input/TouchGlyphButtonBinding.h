#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchGlyphButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    buttonName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 4, uint>            opacityBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<4, 4, float>           innerPaddingX;
    ::ll::TypedStorage<4, 4, float>           innerPaddingY;
    ::ll::TypedStorage<1, 1, bool>            passThrough;
    ::ll::TypedStorage<4, 4, int>             touchStateRequirement;
    ::ll::TypedStorage<4, 4, float>           glyphScale;
    ::ll::TypedStorage<1, 1, bool>            promiscuous;
    ::ll::TypedStorage<1, 1, bool>            extendButtonPressOutsideUntilReleased;
    ::ll::TypedStorage<8, 24, std::string>    iconPath;
    ::ll::TypedStorage<8, 24, std::string>    pressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchGlyphButtonBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TouchGlyphButtonBinding(::TouchGlyphButtonBinding const&);

    MCNAPI TouchGlyphButtonBinding(
        std::string const&,
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
        float,
        bool,
        bool,
        float,
        float
    );

    MCNAPI TouchGlyphButtonBinding(
        std::string const&,
        uint,
        uint,
        uint,
        std::string const&,
        std::string const&,
        ::ButtonColors const&,
        int,
        int,
        bool,
        int,
        float,
        bool,
        bool,
        float,
        float
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TouchGlyphButtonBinding const&);

    MCNAPI void* $ctor(
        std::string const&,
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
        float,
        bool,
        bool,
        float,
        float
    );

    MCNAPI void* $ctor(
        std::string const&,
        uint,
        uint,
        uint,
        std::string const&,
        std::string const&,
        ::ButtonColors const&,
        int,
        int,
        bool,
        int,
        float,
        bool,
        bool,
        float,
        float
    );
    // NOLINTEND
};
