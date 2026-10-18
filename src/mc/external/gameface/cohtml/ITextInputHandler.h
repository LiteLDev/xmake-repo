#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class IInputProxy; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class ITextInputHandler {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ITextInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITextInputHandler() = default;

    virtual void OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection);

    virtual void OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    );

    virtual void OnFocus(::cohtml::IInputProxy* proxy);

    virtual void OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND
};
#else // @header-generator platform
class ITextInputHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
