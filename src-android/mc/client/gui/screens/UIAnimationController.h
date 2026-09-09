#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AnimationStatus.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ScreenEvent;
namespace mce { struct TimeStep; }
// clang-format on

class UIAnimationController {
public:
    // UIAnimationController inner types declare
    // clang-format off
    struct AnimationUIControlFunctionCallback;
    // clang-format on

    // UIAnimationController inner types define
    enum class tickType : int {
        Fixed  = 0,
        Render = 1,
    };

    struct AnimationUIControlFunctionCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> control;
        ::ll::UntypedStorage<8, 48>                         function;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnimationUIControlFunctionCallback& operator=(AnimationUIControlFunctionCallback const&);
        AnimationUIControlFunctionCallback(AnimationUIControlFunctionCallback const&);
        AnimationUIControlFunctionCallback();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AnimationUIControlFunctionCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using animationList_t = std::vector<UIAnimationController::AnimationUIControlFunctionCallback>;

    using animationFunction_t = std::function<ui::AnimationStatus(const mce::TimeStep&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<UIAnimationController::AnimationUIControlFunctionCallback>> animationListFixedTimestep;
    ::ll::TypedStorage<8, 24, std::vector<UIAnimationController::AnimationUIControlFunctionCallback>> animationListRenderTimestep;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::weak_ptr<UIControl> _getWeakFromPtr(::UIControl*);

    MCNAPI bool _tick(
        std::vector<UIAnimationController::AnimationUIControlFunctionCallback>&,
        ::mce::TimeStep const&,
        std::vector<ScreenEvent>&
    );

    MCNAPI ~UIAnimationController();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
