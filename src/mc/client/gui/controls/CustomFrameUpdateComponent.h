#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIFrameUpdateContext;
// clang-format on

class CustomFrameUpdateComponent : public ::UIComponent {
public:
    // prevent constructor by default
    CustomFrameUpdateComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomFrameUpdateComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual bool isCustomFrameUpdateComponent() const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void frameUpdate(::UIFrameUpdateContext&, ::UIControl&);
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

    MCNAPI bool $isCustomFrameUpdateComponent() const;

    MCNAPI void $reset();
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
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class CustomFrameUpdateComponent : public ::UIComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomFrameUpdateComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual bool isCustomFrameUpdateComponent() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCFOLD bool $isCustomFrameUpdateComponent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class CustomFrameUpdateComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
