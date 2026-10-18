#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mDefaultStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mPressedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mLockedStateControl;
    ::ll::TypedStorage<1, 1, bool>                          mPressed;
    ::ll::TypedStorage<1, 1, bool>                          mConsumeEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ButtonComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual void onEnabledChanged(bool enabled) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updateControlVisibility();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCAPI void $onVisibilityChanged(bool visible);

    MCAPI void $onEnabledChanged(bool enabled);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ButtonComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
