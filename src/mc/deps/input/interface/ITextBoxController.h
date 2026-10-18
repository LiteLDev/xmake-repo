#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ~ITextBoxController() /*override*/ = default;

    virtual void setTextBoxState(int controllerId, ::TextBoxStateChange const& stateChange) = 0;

    virtual void onKeyboardDismissed(int controllerId) = 0;

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ITextBoxController {};
#endif // @header-generator platform
#endif // @header-generator platform
