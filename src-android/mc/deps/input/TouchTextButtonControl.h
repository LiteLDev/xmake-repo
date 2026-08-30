#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchGlyphButtonControl.h"

// auto generated forward declare list
// clang-format off
class InputRenderContext;
struct ButtonColors;
// clang-format on

class TouchTextButtonControl : public ::TouchGlyphButtonControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                       mPosition;
    ::ll::UntypedStorage<8, 48>                                       mArea;
    ::ll::UntypedStorage<8, 48>                                       mLabel;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCurrentPosition;
    ::ll::UntypedStorage<4, 24>                                       mCurrentRect;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTextButtonControl(TouchTextButtonControl const&);
    TouchTextButtonControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTextButtonControl();

    virtual void render(::InputRenderContext&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::InputRenderContext&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
