#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchGlyphButtonControl.h"

// auto generated forward declare list
// clang-format off
class InputRenderContext;
// clang-format on

class TouchTextButtonControl : public ::TouchGlyphButtonControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::glm::vec2()>>         mPosition;
    ::ll::TypedStorage<8, 64, ::std::function<void(::RectangleArea)>> mArea;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>       mLabel;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                             mCurrentPosition;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                        mCurrentRect;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTextButtonControl() /*override*/ = default;

    virtual void render(::InputRenderContext& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND
};
#else // @header-generator platform
class TouchTextButtonControl {};
#endif // @header-generator platform
#endif // @header-generator platform
