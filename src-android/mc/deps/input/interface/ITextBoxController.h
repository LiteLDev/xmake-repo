#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
struct TextBoxStateChange;
// clang-format on

class ITextBoxController : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITextBoxController() = default;

    virtual void setTextBoxState(int, ::TextBoxStateChange const&) = 0;

    virtual void onKeyboardDismissed(int) = 0;

    virtual std::unique_ptr<IGamefaceTextInputProxy> getTextInputProxy() = 0;
    // NOLINTEND
};
