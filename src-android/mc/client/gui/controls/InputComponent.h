#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ButtonHandleResult.h"
#include "mc/client/gui/controls/ButtonMappingInputModeCondition.h"
#include "mc/client/gui/controls/ButtonMappingType.h"
#include "mc/client/gui/controls/ScreenButtonMapping.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/ScreenEventScope.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
// clang-format on

class InputComponent : public ::UIComponent {
public:
    // InputComponent inner types declare
    // clang-format off
    struct ScreenHoverButtonMapping;
    struct PressStats;
    // clang-format on

    // InputComponent inner types define
    enum class PressType : int {
        Single = 0,
        Double = 1,
    };

    struct ScreenHoverButtonMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>               toButtonId;
        ::ll::TypedStorage<1, 1, ::ScreenEventScope> scope;
        // NOLINTEND
    };

    struct PressStats {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, int> pressCount;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> lastPressTime;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> position;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        PressStats& operator=(PressStats const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScreenButtonMapping>>                      mButtonMappings;
    ::ll::TypedStorage<8, 24, std::vector<InputComponent::ScreenHoverButtonMapping>> mHoverButtonMappings;
    ::ll::TypedStorage<1, 1, ::ScreenEventScope>                                     mRemappingMappingScope;
    ::ll::TypedStorage<1, 1, bool>                                                   mAlwaysHandlePointer;
    ::ll::TypedStorage<1, 1, bool>                                                   mAlwaysHandleControllerDirection;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasRemappingMapping;
    ::ll::TypedStorage<1, 1, bool>                                                   mAlwaysListensToInput;
    ::ll::TypedStorage<1, 1, bool>                                                   mModal;
    ::ll::TypedStorage<1, 1, bool>                                                   mInlineModal;
    ::ll::TypedStorage<1, 1, bool>                                                   mIgnoreHoverChange;
    ::ll::TypedStorage<1, 1, bool>                                                   mHoverEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                   mConsumeHoverEvents;
    ::ll::TypedStorage<1, 1, bool>                                                   mPreventsTouchControl;
    ::ll::TypedStorage<1, 1, bool>                                                   mGamepadDeflectionMode;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, InputComponent::PressStats>>  mPressStats;
    // NOLINTEND

public:
    // prevent constructor by default
    InputComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void onVisibilityChanged(bool);

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InputComponent::PressType
    _detectDoubleClick(uint, ::ButtonState, ::glm::vec<2, float, (glm::qualifier)0> const&, bool const);

    MCNAPI bool _getContentPanelHover(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI bool _sendButtonScreenEvent(
        ::ScreenInputContext&,
        ::ScreenButtonMapping const&,
        ::ButtonState const,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::VisualTree&,
        ::UIAnimationController&,
        ::InputMode const
    );

    MCNAPI bool _sendHoverScreenEvent(
        ::ScreenInputContext&,
        ::VisualTree&,
        ::UIAnimationController&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        bool
    );

    MCNAPI bool _shouldHandleControllerDirection(::DirectionId, ::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI bool _shouldHandleMapping(
        ::ScreenButtonMapping const&,
        ::InputComponent::PressType,
        uint,
        ::ButtonState,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::InputMode
    );

    MCNAPI bool _shouldHandlePressedMapping(
        ::ScreenButtonMapping const&,
        uint,
        ::ButtonState,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::InputMode
    );

    MCNAPI void addButtonMapping(
        uint const,
        uint const,
        ::ButtonMappingType const,
        ::ScreenEventScope const,
        bool const,
        bool const,
        bool const,
        bool const,
        bool const,
        ::ButtonMappingInputModeCondition const,
        bool const
    );

    MCNAPI void addHoverButtonMapping(uint, ::ScreenEventScope);

    MCNAPI void addRemappingMapping(::ScreenEventScope);

    MCNAPI bool canHandleDeselect(uint);

    MCNAPI void cleanUpAllButtonStates();

    MCNAPI void
    cleanUpButtonState(uint, ::ButtonState, ::glm::vec<2, float, (glm::qualifier)0> const&, ::InputMode, bool const);

    MCNAPI bool getAlwaysListensToInput() const;

    MCNAPI bool getGamepadDeflectionMode() const;

    MCNAPI bool getInlineModal() const;

    MCNAPI bool getModal() const;

    MCNAPI bool getPreventsTouchControls() const;

    MCNAPI ::ButtonHandleResult handleButtonEvent(
        ::VisualTree&,
        ::UIAnimationController&,
        ::ScreenInputContext&,
        uint,
        ::ButtonState,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::InputMode,
        bool const
    );

    MCNAPI bool handleControllerDirection(
        ::VisualTree&,
        ::UIAnimationController&,
        ::ScreenInputContext&,
        ::DirectionId,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        bool
    );

    MCNAPI bool handleFocusLocation(
        ::VisualTree&,
        ::UIAnimationController&,
        ::ScreenInputContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        bool
    );

    MCNAPI void handleInputModeChange(::VisualTree&, ::UIAnimationController&, ::ScreenInputContext&, ::InputMode);

    MCNAPI bool handlePointerLocation(
        ::VisualTree&,
        ::UIAnimationController&,
        ::ScreenInputContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        bool
    );

    MCNAPI bool isWithinClipRegion(::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI void setAlwaysHandleControllerDirection(bool);

    MCNAPI void setAlwaysHandlePointer(bool);

    MCNAPI void setAlwaysListensToInput(bool const);

    MCNAPI void setConsumeHoverEvents(bool);

    MCNAPI void setGamepadDeflectionMode(bool);

    MCNAPI void setHoverEnabled(bool);

    MCNAPI void setIgnoreHoverChange(bool);

    MCNAPI void setInlineModal(bool);

    MCNAPI void setModal(bool);

    MCNAPI void setPreventsTouchControls(bool);
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

    MCNAPI void $onVisibilityChanged(bool);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
