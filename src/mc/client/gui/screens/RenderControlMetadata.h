#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/BatchClippingState.h"
#include "mc/client/gui/screens/BatchVisualState.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct RenderControlMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>> control;
    ::ll::TypedStorage<4, 20, ::BatchClippingState>       clippingState;
    ::ll::TypedStorage<4, 8, ::BatchVisualState>          visualState;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControlMetadata& operator=(RenderControlMetadata const&);
    RenderControlMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderControlMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/BatchClippingState.h"
#include "mc/client/gui/screens/BatchVisualState.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct RenderControlMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> control;
    ::ll::TypedStorage<4, 20, ::BatchClippingState>           clippingState;
    ::ll::TypedStorage<4, 8, ::BatchVisualState>              visualState;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderControlMetadata {};
#endif // @header-generator platform
#endif // @header-generator platform
