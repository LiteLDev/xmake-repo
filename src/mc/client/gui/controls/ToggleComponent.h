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

class ToggleComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedLockedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedLockedHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedLockedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedLockedHoverStateControl;
    bool                                                    mChecked                   : 1;
    bool                                                    mHover                     : 1;
    bool                                                    mRadioToggleGroup          : 1;
    bool                                                    mDefaultState              : 1;
    bool                                                    mEnableDirectionalToggling : 1;
    ::ll::TypedStorage<8, 32, ::std::string>                mGridCollectionName;
    ::ll::TypedStorage<4, 4, uint>                          mToggleNameId;
    ::ll::TypedStorage<4, 4, uint>                          mToggleOnButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mToggleOffButtonId;
    ::ll::TypedStorage<4, 4, int>                           mForcedIndex;
    ::ll::TypedStorage<4, 4, int>                           mDefaultGroupSelectedIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                mTTSValueOn;
    ::ll::TypedStorage<8, 32, ::std::string>                mTTSValueOff;
    ::ll::TypedStorage<8, 32, ::std::string>                mDescriptiveText;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToggleComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ToggleComponent(::UIControl& owner);

    MCAPI void _setChecked(::ScreenInputContext& context, bool checked, bool toggledByButtonClick);

    MCAPI void _updateControlVisibility();

    MCAPI void _updateToggleGroupState(::VisualTree& visualTree, bool toggleState);

    MCAPI void resetDefaultState();

    MCAPI void setChecked(bool checked);

    MCAPI void setForcedGroupIndex(int forcedIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCAPI ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND
};
#else // @header-generator platform
class ToggleComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
