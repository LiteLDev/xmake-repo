#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/screens/AnimationStatus.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ScreenEvent;
namespace mce { struct TimeStep; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/screens/AnimationStatus.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ScreenEvent;
namespace mce { struct TimeStep; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class UIAnimationController {
public:
    // UIAnimationController inner types declare
    // clang-format off
    struct AnimationUIControlFunctionCallback;
    // clang-format on

    // UIAnimationController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class tickType : int {
        Fixed  = 0,
        Render = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class tickType : int {
        Fixed  = 0,
        Render = 1,
    };
#else // @header-generator platform
    enum class tickType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct AnimationUIControlFunctionCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                                   control;
        ::ll::TypedStorage<8, 64, ::std::function<::ui::AnimationStatus(::mce::TimeStep const&)>> function;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AnimationUIControlFunctionCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using animationFunction_t = ::std::function<::ui::AnimationStatus(::mce::TimeStep const&)>;

    using animationList_t = ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>>
        animationListFixedTimestep;
    ::ll::TypedStorage<8, 24, ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>>
        animationListRenderTimestep;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tick(
        ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>& animationList,
        ::mce::TimeStep const&                                                      timeStep,
        ::std::vector<::ScreenEvent>&                                               screenEvents
    );

    MCAPI void clearAnimationLists();
    // NOLINTEND
#else // @header-generator platform
    struct AnimationUIControlFunctionCallback {};
#endif // @header-generator platform
#endif // @header-generator platform
};
