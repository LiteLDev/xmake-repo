#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct HoverScreenEventData;
struct PointerMoveScreenEventData;
struct ScreenEvent;
// clang-format on

class SelectionWheelComponent : public ::UIComponent {
public:
    // SelectionWheelComponent inner types declare
    // clang-format off
    struct ButtonInteractionInfo;
    // clang-format on

    // SelectionWheelComponent inner types define
    enum class SelectionWheelIterateDir : uchar {
        Left  = 0,
        Right = 1,
    };

    struct ButtonInteractionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mHoverSlice;
        ::ll::TypedStorage<4, 4, uint>  mButtonEventName;
        ::ll::TypedStorage<1, 1, bool>  mIsInteracted;
        ::ll::TypedStorage<1, 1, bool>  mIsSlotButtonPressed;
        // NOLINTEND

    public:
        // prevent constructor by default
        ButtonInteractionInfo();
    };

    using HoverSliceType = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>              mWeakScreenControl;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<UIControl>>> mStateControls;
    ::ll::TypedStorage<1, 1, bool>                                   mConsumeEvents;
    ::ll::TypedStorage<8, 8, ulong>                                  mSliceCount;
    ::ll::TypedStorage<8, 8, ulong>                                  mHoverSlice;
    ::ll::TypedStorage<8, 8, ulong>                                  mLastValidHoverSlice;
    ::ll::TypedStorage<4, 4, float>                                  mInnerRadius;
    ::ll::TypedStorage<4, 4, float>                                  mOuterRadius;
    ::ll::TypedStorage<4, 4, uint>                                   mAnalogButtonNameId;
    ::ll::TypedStorage<4, 4, uint>                                   mSelectButtonNameId;
    ::ll::TypedStorage<4, 4, uint>                                   mHoverButtonNameId;
    ::ll::TypedStorage<4, 4, uint>                                   mIterateLeftNameId;
    ::ll::TypedStorage<4, 4, uint>                                   mIterateRightNameId;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                     mSelectSlotNameIds;
    ::ll::TypedStorage<4, 4, ::InputMode>                            mInputMode;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionWheelComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SelectionWheelComponent();

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
    MCNAPI explicit SelectionWheelComponent(::UIControl&);

    MCNAPI void _updateControlVisibility();

    MCNAPI ::InputMode getInputMode() const;

    MCNAPI void setInputMode(::InputMode const&);
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
