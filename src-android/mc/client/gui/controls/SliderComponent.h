#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/OrientationType.h"
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
struct PointerMoveScreenEventData;
struct ScreenEvent;
// clang-format on

class SliderComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mSliderBoxControl;
    ::ll::TypedStorage<4, 4, uint>                      mTrackScrollButtonId;
    ::ll::TypedStorage<4, 4, uint>                      mSmallDecreaseButtonId;
    ::ll::TypedStorage<4, 4, uint>                      mSmallIncreaseButtonId;
    ::ll::TypedStorage<4, 4, uint>                      mSelectedButtonId;
    ::ll::TypedStorage<4, 4, uint>                      mDeselectedButtonId;
    ::ll::TypedStorage<1, 1, bool>                      mTrackActive;
    ::ll::TypedStorage<1, 1, bool>                      mDragActive;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>     mSliderDirection;
    ::ll::TypedStorage<1, 1, bool>                      mInverted;
    ::ll::TypedStorage<4, 4, float>                     mPercentage;
    ::ll::TypedStorage<4, 4, int>                       mCurrentStep;
    ::ll::TypedStorage<4, 4, int>                       mNumberSteps;
    ::ll::TypedStorage<4, 4, float>                     mSliderSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>>      mSliderTimeout;
    ::ll::UntypedStorage<8, 8>                          mLastRefreshTime;
    bool                                                mStepSlider    : 1;
    bool                                                mHover         : 1;
    bool                                                mSelectOnHover : 1;
    ::ll::TypedStorage<4, 4, uint>                      mSliderNameId;
    ::ll::TypedStorage<8, 24, std::string>              mSliderCollectionName;
    ::ll::TypedStorage<1, 1, ::ui::CardinalDirection>   mLastDirection;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mBackground;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mBackgroundHover;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mProgress;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mProgressHover;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mDefaultControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mHoverControl;
    ::ll::TypedStorage<8, 24, std::string>              mTTSSliderValue;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SliderComponent();

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
    MCNAPI void _createSteps();

    MCNAPI void _finalizeSliderBox();

    MCNAPI void _sendSliderChangeEvent(::ScreenInputContext&, bool);

    MCNAPI void _setSelected(bool);

    MCNAPI void _updateSliderBarProgress();

    MCNAPI void _updateSliderFromPosition(::glm::vec<2, float, (glm::qualifier)0> const&, bool);

    MCNAPI void _updateSliderFromStepSize(int);

    MCNAPI ::ui::OrientationType getSliderDirection() const;

    MCNAPI bool getSliderSelected() const;

    MCNAPI float getSliderTimeoutDefaultValue() const;

    MCNAPI float getSliderValue() const;

    MCNAPI void setNumberSteps(int);

    MCNAPI void setSliderTimeout(float);

    MCNAPI void setSliderValue(float);
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
