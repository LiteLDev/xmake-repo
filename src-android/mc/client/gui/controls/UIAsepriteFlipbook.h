#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAsepriteFlipbook : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTimeSoFar;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAsepriteFlipbook& operator=(UIAsepriteFlipbook const&);
    UIAsepriteFlipbook();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAsepriteFlipbook();

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
