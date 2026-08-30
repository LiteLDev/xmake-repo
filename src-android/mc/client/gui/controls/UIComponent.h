#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIControl&> mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    UIComponent& operator=(UIComponent const&);
    UIComponent(UIComponent const&);
    UIComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UIComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const = 0;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void onNotifyChildAdded();

    virtual void onNotifyChildRemoved();

    virtual void onRemoved();

    virtual void onAdded();

    virtual void onVisibilityChanged(bool);

    virtual void onEnabledChanged(bool);

    virtual bool isRenderableComponent() const;

    virtual bool isCustomFrameUpdateComponent() const;

    virtual bool onLayoutChange();

    virtual void reset() = 0;

    virtual void reload(::UIComponent const&);

    virtual std::string const& getTextToSpeechComponentValue() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UIComponent(::UIControl&);

    MCNAPI ::UIControl const& getOwner() const;

    MCNAPI ::UIControl& getOwner();

    MCNAPI bool isLocked() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ComponentReceiveActionType $receive(::ScreenEvent const&);

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $onNotifyChildAdded();

    MCNAPI void $onNotifyChildRemoved();

    MCNAPI void $onRemoved();

    MCNAPI void $onAdded();

    MCNAPI void $onVisibilityChanged(bool);

    MCNAPI void $onEnabledChanged(bool);

    MCNAPI bool $isRenderableComponent() const;

    MCNAPI bool $isCustomFrameUpdateComponent() const;

    MCNAPI bool $onLayoutChange();

    MCNAPI void $reload(::UIComponent const&);

    MCNAPI std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
