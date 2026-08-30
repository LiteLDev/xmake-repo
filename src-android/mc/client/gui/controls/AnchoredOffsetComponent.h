#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class AnchoredOffsetComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLastParentRelativeOffsetValueX;
    ::ll::TypedStorage<4, 4, float> mLastParentRelativeOffsetValueY;
    // NOLINTEND

public:
    // prevent constructor by default
    AnchoredOffsetComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnchoredOffsetComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void updateLayoutFromPropertyValue();
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

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
