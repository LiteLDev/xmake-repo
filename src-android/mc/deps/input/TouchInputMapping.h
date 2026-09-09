#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchConditionalGuiPassthroughBinding.h"
#include "mc/deps/input/TouchGlyphButtonBinding.h"
#include "mc/deps/input/TouchTapOrHoldGlyphButtonBinding.h"
#include "mc/deps/input/TouchTextButtonBinding.h"
#include "mc/deps/input/TouchTurnInteractBinding.h"

struct TouchInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TouchTextButtonBinding>>                textButtonBindings;
    ::ll::TypedStorage<8, 24, std::vector<TouchGlyphButtonBinding>>               glyphButtonBindings;
    ::ll::TypedStorage<8, 24, std::vector<TouchTapOrHoldGlyphButtonBinding>>      tapOrHoldGlyphButtonBindings;
    ::ll::TypedStorage<8, 24, std::vector<TouchConditionalGuiPassthroughBinding>> conditionalGuiPassthroughBindings;
    ::ll::TypedStorage<8, 168, ::TouchTurnInteractBinding>                        turnInteractBinding;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                           pointerButtonNames;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                           classicPointerButtonNames;
    ::ll::TypedStorage<1, 1, bool>                                                invertYAxis;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TouchInputMapping();

    MCNAPI TouchInputMapping(::TouchInputMapping const&);

    MCNAPI ::TouchInputMapping& operator=(::TouchInputMapping const&);

    MCNAPI ~TouchInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::TouchInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
