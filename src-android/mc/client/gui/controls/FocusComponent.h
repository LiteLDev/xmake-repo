#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class FocusManager;
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class FocusComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::FocusManager*> mFocusManager;
    ::ll::TypedStorage<4, 4, int> mDefaultFocusPrecedence;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCapturedFocusPoint;
    ::ll::TypedStorage<8, 24, std::string> mFocusIdentifier;
    ::ll::TypedStorage<8, 40, std::unordered_map<ui::CardinalDirection, std::string>> mDirectionalFocusOverrides;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<ui::CardinalDirection, std::string>>> mNamedMappingLookupData;
    bool mFocusEnabled : 1;
    bool mFocusWrapEnabled : 1;
    bool mFocusPointCaptured : 1;
    bool mFocusMagnetEnabled : 1;
    bool mResetOnFocusLost : 1;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FocusComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FocusComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _resetDirectionalOverrides();

    MCNAPI bool checkFocusChangeOverride(::ui::CardinalDirection const, std::string const&) const;

    MCNAPI int getDefaultFocusPrecedence() const;

    MCNAPI bool getFocusEnabled() const;

    MCNAPI std::string const& getFocusIdentifier() const;

    MCNAPI bool getFocusMagnetEnabled() const;

    MCNAPI bool getFocusWrapEnabled() const;

    MCNAPI bool getResetOnFocusLost() const;

    MCNAPI bool hasFocusChangeOverride(::ui::CardinalDirection const) const;

    MCNAPI void initialize(::FocusManager&);

    MCNAPI void
    registerNewLookupMapEntry(std::string const&, std::unordered_map<ui::CardinalDirection, std::string> const&);

    MCNAPI void setDefaultFocusPrecedence(int);

    MCNAPI void setFocusChangeOverride(::ui::CardinalDirection const, std::string const&);

    MCNAPI void setFocusEnabled(bool);

    MCNAPI void setFocusIdentifier(std::string const&);

    MCNAPI void setFocusMagnetEnabled(bool);

    MCNAPI void setFocusWrapEnabled(bool);

    MCNAPI void setResetOnFocusLost(bool);
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

    MCNAPI ::ComponentReceiveActionType $receive(::ScreenEvent const&);

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
