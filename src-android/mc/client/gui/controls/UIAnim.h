#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnimationType.h"
#include "mc/client/gui/controls/AnimEvent.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
class UIResolvedDef;
struct ScreenEvent;
// clang-format on

class UIAnim {
public:
    // UIAnim inner types define
    enum class State : int {
        Running          = 0,
        Waiting          = 1,
        WaitingForRender = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ui::AnimationType>            mAnimType;
    ::ll::TypedStorage<4, 4, float>                          mTime;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)> mEase;
    ::ll::TypedStorage<4, 4, ::UIAnim::State>                mState;
    ::ll::TypedStorage<4, 4, uint>                           mAnimEndEventId;
    ::ll::TypedStorage<4, 4, uint>                           mPlayEventId;
    ::ll::TypedStorage<4, 4, uint>                           mResetEventId;
    ::ll::TypedStorage<4, 4, float>                          mDuration;
    ::ll::TypedStorage<8, 24, std::string>                   mName;
    ::ll::TypedStorage<8, 24, std::string>                   mNext;
    ::ll::TypedStorage<8, 24, std::string>                   mDestroyControlAtEnd;
    ::ll::TypedStorage<1, 1, bool>                           mResettable;
    ::ll::TypedStorage<1, 1, bool>                           mWaitUntilRenderedToPlay;
    ::ll::TypedStorage<1, 1, bool>                           mRendered;
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIAnim>>       mNextAnim;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnim& operator=(UIAnim const&);
    UIAnim();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnim();

    virtual std::shared_ptr<UIAnim> clone();

    virtual char const* getInitialValueKey() const;

    virtual bool tick(::UIControl&, float const);

    virtual void updateProperties(::UIAnimationComponent&);

    virtual void onResourcesLoaded(::UIAnimationComponent&);

    virtual void _reset(::UIControl&);

    virtual void _play();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIAnim(::UIAnim const&);

    MCNAPI UIAnim(::ui::AnimationType, ::UIResolvedDef const&);

    MCNAPI void destroy();

    MCNAPI bool hasEndEventId(uint) const;

    MCNAPI bool hasPlayEventId(uint) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIAnim const&);

    MCNAPI void* $ctor(::ui::AnimationType, ::UIResolvedDef const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UIAnim> $clone();

    MCNAPI char const* $getInitialValueKey() const;

    MCNAPI bool $tick(::UIControl&, float const);

    MCNAPI void $updateProperties(::UIAnimationComponent&);

    MCNAPI void $onResourcesLoaded(::UIAnimationComponent&);

    MCNAPI void $_reset(::UIControl&);

    MCNAPI void $_play();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
