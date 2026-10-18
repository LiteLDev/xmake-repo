#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class StackPanelComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ui::OrientationType> mOrientation;
    ::ll::TypedStorage<4, 4, int>                   mFirstRenderedChild;
    ::ll::TypedStorage<1, 1, bool>                  mShouldUseChildAnchors;
    ::ll::TypedStorage<1, 1, bool>                  mShouldUsePriority;
    // NOLINTEND

public:
    // prevent constructor by default
    StackPanelComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StackPanelComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void onNotifyChildRemoved();

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ui::OrientationType getOrientation() const;

    MCNAPI bool getUseChildAnchors() const;

    MCNAPI bool getUsePriority() const;
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

    MCNAPI void $onNotifyChildRemoved();

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
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class StackPanelComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ui::OrientationType> mOrientation;
    ::ll::TypedStorage<4, 4, int>                   mFirstRenderedChild;
    ::ll::TypedStorage<1, 1, bool>                  mShouldUseChildAnchors;
    ::ll::TypedStorage<1, 1, bool>                  mShouldUsePriority;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StackPanelComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onNotifyChildRemoved() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCAPI void $onNotifyChildRemoved();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class StackPanelComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
