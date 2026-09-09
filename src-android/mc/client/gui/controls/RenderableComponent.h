#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LayoutComponent;
class UIControl;
class UIMeasureStrategy;
// clang-format on

class RenderableComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mSupportsLayoutOverride;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mMeasuredSize;
    ::ll::TypedStorage<4, 4, float>                                   mPropagatedAlpha;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderableComponent();

    virtual bool isRenderableComponent() const;

    virtual void reset();

    virtual void updateUI(::UIMeasureStrategy const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderableComponent(::UIControl&, bool);

    MCNAPI bool _hasDefaultHeightSizing() const;

    MCNAPI bool _hasDefaultSizing(::LayoutVariableType const) const;

    MCNAPI bool _hasDefaultWidthSizing() const;

    MCNAPI bool _hasMaxSize() const;

    MCNAPI bool _hasMinSize() const;

    MCNAPI void _updateLayoutSize();

    MCNAPI float getLayoutAxisOffsetOverride(::LayoutVariableType const) const;

    MCNAPI bool overridesLayoutAxisOffset(::LayoutVariableType const) const;

    MCNAPI void setPropagatedAlpha(float const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getUIMaterialName(::UIMaterialType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isRenderableComponent() const;

    MCNAPI void $reset();

    MCNAPI void $updateUI(::UIMeasureStrategy const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
