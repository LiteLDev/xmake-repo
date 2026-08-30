#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TextAlignment.h"

struct TextMeasureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const>               fontSize;
    ::ll::TypedStorage<4, 4, float const>               linePadding;
    ::ll::TypedStorage<1, 1, bool const>                renderShadow;
    ::ll::TypedStorage<1, 1, bool const>                showColorSymbol;
    ::ll::TypedStorage<1, 1, bool const>                hideHyphen;
    ::ll::TypedStorage<4, 4, ::ui::TextAlignment const> alignment;
    // NOLINTEND

public:
    // prevent constructor by default
    TextMeasureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextMeasureData(float, float, bool, bool, bool, ::ui::TextAlignment);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, float, bool, bool, bool, ::ui::TextAlignment);
    // NOLINTEND
};
