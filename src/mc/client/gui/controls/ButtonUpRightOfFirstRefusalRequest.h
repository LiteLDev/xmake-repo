#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct ButtonUpRightOfFirstRefusalRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                      buttonId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> control;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonUpRightOfFirstRefusalRequest& operator=(ButtonUpRightOfFirstRefusalRequest const&);
    ButtonUpRightOfFirstRefusalRequest(ButtonUpRightOfFirstRefusalRequest const&);
    ButtonUpRightOfFirstRefusalRequest();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct ButtonUpRightOfFirstRefusalRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                          buttonId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> control;
    // NOLINTEND
};
#else // @header-generator platform
struct ButtonUpRightOfFirstRefusalRequest {};
#endif // @header-generator platform
#endif // @header-generator platform
