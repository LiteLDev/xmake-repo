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
struct HoverScreenEventData;
struct ScreenEvent;
// clang-format on

class TooltipTriggerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mHover;
    ::ll::TypedStorage<4, 4, uint>                      mTooltipTriggerNameId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mTopContentControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mBottomContentControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mAreaControl;
    ::ll::TypedStorage<8, 24, std::string>              mTextTTSBindingNameOrValue;
    // NOLINTEND

public:
    // prevent constructor by default
    TooltipTriggerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TooltipTriggerComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();

    virtual std::string const& getTextToSpeechComponentValue() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TooltipTriggerComponent(::UIControl&);

    MCNAPI void _updateControlVisibility();
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

class TooltipTriggerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mHover;
    ::ll::TypedStorage<4, 4, uint>                          mTooltipTriggerNameId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mTopContentControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mBottomContentControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mAreaControl;
    ::ll::TypedStorage<8, 32, ::std::string>                mTextTTSBindingNameOrValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TooltipTriggerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

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
    MCAPI void _updateControlVisibility();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND
};
#else // @header-generator platform
class TooltipTriggerComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
