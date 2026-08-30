#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/BaseCyclingComponent.h"

// auto generated forward declare list
// clang-format off
class TextComponent;
class UIComponent;
class UIControl;
// clang-format on

class TextCyclingComponent : public ::BaseCyclingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mTextLabels;
    // NOLINTEND

public:
    // prevent constructor by default
    TextCyclingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextCyclingComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void _updateSubPage();

    virtual void _postCreate();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $_updateSubPage();

    MCNAPI void $_postCreate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
