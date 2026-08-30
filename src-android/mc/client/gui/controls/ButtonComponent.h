#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class ButtonComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mDefaultStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mHoverStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mPressedStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mLockedStateControl;
    ::ll::TypedStorage<1, 1, bool>                      mPressed;
    ::ll::TypedStorage<1, 1, bool>                      mConsumeEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ButtonComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void onVisibilityChanged(bool);

    virtual void onEnabledChanged(bool);

    virtual void reset();

    virtual void reload(::UIComponent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateControlVisibility();

    MCNAPI std::weak_ptr<UIControl> getDefaultStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getHoverStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getLockedStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getPressedStateControl() const;

    MCNAPI void setConsumeEvents(bool);

    MCNAPI void setDefaultStateControl(std::weak_ptr<UIControl>);

    MCNAPI void setHoverStateControl(std::weak_ptr<UIControl>);

    MCNAPI void setLockedStateControl(std::weak_ptr<UIControl>);

    MCNAPI void setPressedStateControl(std::weak_ptr<UIControl>);
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

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $onVisibilityChanged(bool);

    MCNAPI void $onEnabledChanged(bool);

    MCNAPI void $reset();

    MCNAPI void $reload(::UIComponent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
