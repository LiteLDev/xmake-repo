#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimLayout : public ::UIAnim {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimLayout : public ::UIAnim {
#else // @header-generator platform
class UIAnimLayout {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // UIAnimLayout inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    UIAnimLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime) /*override*/;

    virtual void _reset(::UIControl& ownerControl) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIAnimLayout(::UIResolvedDef const& def, ::UIAnimLayout::ApplyTo applyTo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& def, ::UIAnimLayout::ApplyTo applyTo);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIAnim> $clone();

    MCAPI bool $tick(::UIControl& ownerControl, float const deltaTime);

    MCAPI void $_reset(::UIControl& ownerControl);
    // NOLINTEND
#else // @header-generator platform
    enum class ApplyTo : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
