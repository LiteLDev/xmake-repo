#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/AnimEvent.h"
#include "mc/client/gui/controls/AnimationTickResult.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/AnimationStatus.h"
#include "mc/client/gui/screens/ScreenEvent.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnim;
class UIAnimationController;
class UIControl;
class UIControlFactory;
class UIResolvedDef;
class VisualTree;
namespace mce { struct TimeStep; }
// clang-format on

class UIAnimationComponent : public ::UIComponent {
public:
    // UIAnimationComponent inner types declare
    // clang-format off
    struct NewAnimation;
    // clang-format on

    // UIAnimationComponent inner types define
    struct NewAnimation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<UIAnim>> newAnim;
        ::ll::TypedStorage<4, 4, float>                    lastAnimDuration;
        ::ll::TypedStorage<4, 4, float>                    lastAnimTime;
        // NOLINTEND

    public:
        // prevent constructor by default
        NewAnimation& operator=(NewAnimation const&);
        NewAnimation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NewAnimation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using AnimList = std::vector<std::shared_ptr<UIAnim>>;

    using AnimListIter = std::shared_ptr<UIAnim>*;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIAnim>>> mAnimList;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIAnim>>> mOriginalAnimList;
    ::ll::TypedStorage<8, 24, std::vector<ScreenEvent>> mNewScreenEvents;
    ::ll::TypedStorage<1, 1, bool> mTickAttached;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreatedTime;
    ::ll::TypedStorage<1, 1, bool> mRecievedFirstTick;
    ::ll::TypedStorage<1, 1, bool> mDisableFastForward;
    ::ll::TypedStorage<4, 4, uint> mResetId;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnimationComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UIAnimationComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addNextAnimation(
        ::UIAnim&,
        std::map<std::string, std::shared_ptr<UIAnim>>&,
        std::shared_ptr<UIAnim> const&,
        ::UIControlFactory&
    );

    MCNAPI ::ui::AnimationStatus _animationTick(::mce::TimeStep const&);

    MCNAPI std::shared_ptr<UIAnim> _createAnimation(::UIResolvedDef&, ::UIControlFactory&);

    MCNAPI void _resetAnimations();

    MCNAPI ::AnimationTickResult _tickUIAnim(::UIAnim*, std::vector<UIAnimationComponent::NewAnimation>&, float);

    MCNAPI ::UIAnim* addAnimation(std::string const&, ::UIResolvedDef&, ::UIControlFactory&);

    MCNAPI void collectScreenEvents(::AnimEvent, std::vector<ScreenEvent>&);

    MCNAPI void handleScreenEvent(::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI bool hasAnimationWithEndEventId(uint) const;

    MCNAPI bool hasAnimationWithPlayAndEndEventIds(uint, uint) const;

    MCNAPI bool isEventListener() const;

    MCNAPI void updateProperties();
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
