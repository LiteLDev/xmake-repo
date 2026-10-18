#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/controls/FocusContainerCustomData.h"
#include "mc/client/gui/controls/FocusNavigationMode.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/RecentFocusVector.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class FocusContainerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, ::RecentFocusVector> mRecentFocusList;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mLastFocusedControl;
    ::ll::TypedStorage<8, 40, std::unordered_map<ui::CardinalDirection, FocusNavigationMode>> mDirectionalFocusOverrides;
    ::ll::TypedStorage<8, 40, std::unordered_map<ui::CardinalDirection, std::vector<FocusContainerCustomData>>> mFocusContainerCustomOverrides;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<const UIControl>>> mSubFocusContainers;
    ::ll::TypedStorage<1, 1, bool> mUseLastFocus;
    ::ll::TypedStorage<1, 1, bool> mWrappingAllowed;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FocusContainerComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI const std::weak_ptr<const UIControl>* _findSubFocusContainer(std::shared_ptr<const UIControl>) const;

    MCNAPI ::FocusContainerComponent* _getParentFocusContainer();

    MCNAPI void addFocusContainerDataToDirection(::ui::CardinalDirection, ::FocusContainerCustomData const&);

    MCNAPI void addRecentFocusControl(std::weak_ptr<UIControl>);

    MCNAPI std::shared_ptr<UIControl> gainFocus(bool const);

    MCNAPI bool
    getFocusContainerDataFromDirection(::ui::CardinalDirection, std::vector<FocusContainerCustomData>&) const;

    MCNAPI std::string getFocusNavigationModeName(::ui::CardinalDirection const) const;

    MCNAPI std::shared_ptr<UIControl> getLastFocusedControl();

    MCNAPI std::string getLastFocusedControlName() const;

    MCNAPI std::shared_ptr<UIControl> getLastGoodFocusedControl(std::shared_ptr<UIControl>);

    MCNAPI bool getUseLastFocus() const;

    MCNAPI void initialize();

    MCNAPI bool isAncestorFocusContainer(::FocusContainerComponent&) const;

    MCNAPI bool isFocusNavigationModeContained(::ui::CardinalDirection const, ::FocusContainerComponent*) const;

    MCNAPI bool isFocusNavigationModeCustom(::ui::CardinalDirection const) const;

    MCNAPI bool isFocusNavigationModeStop(::ui::CardinalDirection const) const;

    MCNAPI bool isWrappingAllowed() const;

    MCNAPI void loseFocus(std::weak_ptr<UIControl>);

    MCNAPI void setFocusNavigationModeOverride(::ui::CardinalDirection const, std::string const&);

    MCNAPI void setLastFocusedControl(std::weak_ptr<UIControl>);

    MCNAPI void setUseLastFocus(bool);

    MCNAPI void setWrappingAllowed(bool);
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
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/controls/FocusNavigationMode.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/RecentFocusVector.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct FocusContainerCustomData;
// clang-format on

class FocusContainerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::RecentFocusVector>          mRecentFocusList;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mLastFocusedControl;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ui::CardinalDirection, ::FocusNavigationMode>>
        mDirectionalFocusOverrides;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ui::CardinalDirection, ::std::vector<::FocusContainerCustomData>>>
                                                                                 mFocusContainerCustomOverrides;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl const>>> mSubFocusContainers;
    ::ll::TypedStorage<1, 1, bool>                                               mUseLastFocus;
    ::ll::TypedStorage<1, 1, bool>                                               mWrappingAllowed;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FocusContainerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FocusContainerComponent(::UIControl& owner);

    MCAPI ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::weak_ptr<::UIControl const>>>>
    _findSubFocusContainer(::std::shared_ptr<::UIControl const> focusContainerControl) const;

    MCAPI ::FocusContainerComponent* _getParentFocusContainer();

    MCAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> weakControl);

    MCAPI ::std::string getFocusNavigationModeName(::ui::CardinalDirection dir) const;

    MCAPI ::std::shared_ptr<::UIControl> getLastFocusedControl();

    MCAPI ::std::string getLastFocusedControlName() const;

    MCAPI void initialize();

    MCAPI bool isAncestorFocusContainer(::FocusContainerComponent& focusContainerComp) const;

    MCAPI void loseFocus(::std::weak_ptr<::UIControl> lastControl);

    MCAPI void setFocusNavigationModeOverride(::ui::CardinalDirection dir, ::std::string const& str);

    MCAPI void setLastFocusedControl(::std::weak_ptr<::UIControl> control);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FocusContainerComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
