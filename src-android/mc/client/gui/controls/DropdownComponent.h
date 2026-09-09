#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ScreenEvent;
struct ToggleChangeEventData;
// clang-format on

class DropdownComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                      mDropdownNameId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mContentControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mAreaControl;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropdownComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setDropdownAreaControl(std::weak_ptr<UIControl>);

    MCNAPI void setDropdownContentControl(std::weak_ptr<UIControl>);

    MCNAPI void setDropdownNameId(uint);
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

    MCNAPI ::ComponentReceiveActionType $receive(::ScreenEvent const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
