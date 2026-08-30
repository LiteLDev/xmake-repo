#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimLayout : public ::UIAnim {
public:
    // UIAnimLayout inner types define
    enum class ApplyTo : int {
        Offset = 0,
        Size   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UIAnimLayout::ApplyTo> mApplyTo;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mInterpolatedOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mFromOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mToOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnimLayout& operator=(UIAnimLayout const&);
    UIAnimLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnimLayout();

    virtual std::shared_ptr<UIAnim> clone();

    virtual bool tick(::UIControl&, float const);

    virtual void _reset(::UIControl&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIAnimLayout(::UIResolvedDef const&, ::UIAnimLayout::ApplyTo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIResolvedDef const&, ::UIAnimLayout::ApplyTo);
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

    MCNAPI bool $tick(::UIControl&, float const);

    MCNAPI void $_reset(::UIControl&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
