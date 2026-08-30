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
struct ButtonScreenEventData;
struct ControllerDirectionEventData;
struct HoverScreenEventData;
struct ScreenEvent;
// clang-format on

class ToggleComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mCheckedStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mUncheckedStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mCheckedHoverStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mUncheckedHoverStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mCheckedLockedStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mCheckedLockedHoverStateControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mUncheckedLockedStateControl;
    ::ll::UntypedStorage<8, 16>                         mUncheckedLockedHoverStateControl;
    bool                                                mChecked                   : 1;
    bool                                                mHover                     : 1;
    bool                                                mRadioToggleGroup          : 1;
    bool                                                mDefaultState              : 1;
    bool                                                mEnableDirectionalToggling : 1;
    ::ll::TypedStorage<8, 24, std::string>              mGridCollectionName;
    ::ll::TypedStorage<4, 4, uint>                      mToggleNameId;
    ::ll::TypedStorage<4, 4, uint>                      mToggleOnButtonId;
    ::ll::TypedStorage<4, 4, uint>                      mToggleOffButtonId;
    ::ll::TypedStorage<4, 4, int>                       mForcedIndex;
    ::ll::TypedStorage<4, 4, int>                       mDefaultGroupSelectedIndex;
    ::ll::TypedStorage<8, 24, std::string>              mTTSValueOn;
    ::ll::TypedStorage<8, 24, std::string>              mTTSValueOff;
    ::ll::TypedStorage<8, 24, std::string>              mDescriptiveText;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ToggleComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();

    virtual std::string const& getTextToSpeechComponentValue() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ToggleComponent(::UIControl&);

    MCNAPI void _setChecked(::ScreenInputContext&, bool, bool);

    MCNAPI void _updateControlVisibility();

    MCNAPI void _updateToggleGroupState(::VisualTree&, bool);

    MCNAPI std::weak_ptr<UIControl> getCheckedHoverStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getCheckedLockedHoverStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getCheckedLockedStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getCheckedStateControl() const;

    MCNAPI bool getEnableDirectionalToggling() const;

    MCNAPI int getGroupIndex() const;

    MCNAPI uint const& getToggleGroup() const;

    MCNAPI std::weak_ptr<UIControl> getUncheckedHoverStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getUncheckedLockedHoverStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getUncheckedLockedStateControl() const;

    MCNAPI std::weak_ptr<UIControl> getUncheckedStateControl() const;

    MCNAPI bool isChecked() const;

    MCNAPI bool isRadioToggleGroup() const;

    MCNAPI void resetHoverState();

    MCNAPI void setChecked(bool);

    MCNAPI void setForcedGroupIndex(int);
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

    MCNAPI void $reset();

    MCNAPI std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
