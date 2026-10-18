#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class SpriteComponent;
class UIAnimationComponent;
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimFlipbook : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                 mAnimationTime;
    ::ll::TypedStorage<4, 4, float>                 mCurrentFrame;
    ::ll::TypedStorage<4, 4, float>                 mFPS;
    ::ll::TypedStorage<4, 4, int>                   mFrameCount;
    ::ll::TypedStorage<4, 4, float>                 mFrameStep;
    ::ll::TypedStorage<1, 1, bool>                  mReverse;
    ::ll::TypedStorage<1, 1, bool>                  mReversible;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType> mFlipOrientation;
    ::ll::TypedStorage<1, 1, bool>                  mLooping;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnimFlipbook& operator=(UIAnimFlipbook const&);
    UIAnimFlipbook();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnimFlipbook();

    virtual std::shared_ptr<UIAnim> clone();

    virtual char const* getInitialValueKey() const;

    virtual bool tick(::UIControl&, float const);

    virtual void onResourcesLoaded(::UIAnimationComponent&);

    virtual void _reset(::UIControl&);
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

    MCNAPI void $onResourcesLoaded(::UIAnimationComponent&);

    MCNAPI void $_reset(::UIControl&);
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
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
// clang-format on

class UIAnimFlipbook : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                 mAnimationTime;
    ::ll::TypedStorage<4, 4, float>                 mCurrentFrame;
    ::ll::TypedStorage<4, 4, float>                 mFPS;
    ::ll::TypedStorage<4, 4, int>                   mFrameCount;
    ::ll::TypedStorage<4, 4, float>                 mFrameStep;
    ::ll::TypedStorage<1, 1, bool>                  mReverse;
    ::ll::TypedStorage<1, 1, bool>                  mReversible;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType> mFlipOrientation;
    ::ll::TypedStorage<1, 1, bool>                  mLooping;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual char const* getInitialValueKey() const /*override*/;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime) /*override*/;

    virtual void onResourcesLoaded(::UIAnimationComponent& animComponent) /*override*/;

    virtual void _reset(::UIControl& ownerControl) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIAnim> $clone();

    MCAPI char const* $getInitialValueKey() const;

    MCAPI bool $tick(::UIControl& ownerControl, float const deltaTime);

    MCAPI void $onResourcesLoaded(::UIAnimationComponent& animComponent);

    MCAPI void $_reset(::UIControl& ownerControl);
    // NOLINTEND
};
#else // @header-generator platform
class UIAnimFlipbook {};
#endif // @header-generator platform
#endif // @header-generator platform
