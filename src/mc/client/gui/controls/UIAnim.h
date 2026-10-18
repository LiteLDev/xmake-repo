#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/AnimationType.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
class UIResolvedDef;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class UIAnim {
public:
    // UIAnim inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 32, ::std::string>                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mNext;
    ::ll::TypedStorage<8, 32, ::std::string>                 mDestroyControlAtEnd;
    ::ll::TypedStorage<1, 1, bool>                           mResettable;
    ::ll::TypedStorage<1, 1, bool>                           mWaitUntilRenderedToPlay;
    ::ll::TypedStorage<1, 1, bool>                           mRendered;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIAnim>>   mNextAnim;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnim();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnim() = default;

    virtual ::std::shared_ptr<::UIAnim> clone();

    virtual char const* getInitialValueKey() const;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime);

    virtual void updateProperties(::UIAnimationComponent& animComponent);

    virtual void onResourcesLoaded(::UIAnimationComponent& animComponent);

    virtual void _reset(::UIControl& ownerControl);

    virtual void _play();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIAnim(::ui::AnimationType animType, ::UIResolvedDef const& def);

    MCAPI bool _hasEndEventId(uint id, ::std::set<void const*>& otherAnimations) const;

    MCAPI bool _hasPlayEventId(uint playEventId, ::std::set<void const*>& otherAnimations) const;

    MCAPI void destroy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ui::AnimationType animType, ::UIResolvedDef const& def);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIAnim> $clone();

    MCAPI char const* $getInitialValueKey() const;

    MCAPI bool $tick(::UIControl& ownerControl, float const deltaTime);

    MCAPI void $updateProperties(::UIAnimationComponent& animComponent);

    MCAPI void $onResourcesLoaded(::UIAnimationComponent& animComponent);

    MCAPI void $_reset(::UIControl& ownerControl);

    MCAPI void $_play();
    // NOLINTEND
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
