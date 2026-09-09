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

class SliderBoxComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mHover;
    ::ll::TypedStorage<1, 1, bool>                      mSelected;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mSliderControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mDefaultControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mHoverControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mIndentControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mLockedControl;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderBoxComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SliderBoxComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void updateControlVisibility();
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

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
