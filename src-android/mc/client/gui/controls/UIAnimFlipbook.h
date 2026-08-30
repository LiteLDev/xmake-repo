#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
