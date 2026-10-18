#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchMoveAndTurnControlState.h"
#include "mc/deps/input/TouchPointResults.h"
#include "mc/deps/input/TouchState.h"
#include "mc/deps/input/TouchTurnControlState.h"
#include "mc/deps/input/TouchTurnState.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchControl;
class TouchMoveAndTurnInteractControl;
class TouchTurnInteractControl;
struct TouchControlConfig;
struct TouchGlyphButtonBinding;
struct TouchTapOrHoldGlyphButtonBinding;
struct TouchTextButtonBinding;
// clang-format on

class TouchControlSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::TouchPointResults>                        mTouchPointResults;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<TouchControl>>> mControls;
    ::ll::TypedStorage<8, 8, ::TouchTurnInteractControl*>                 mTurnInteractControl;
    ::ll::TypedStorage<8, 8, ::TouchMoveAndTurnInteractControl*>          mTouchMoveAndTurnInteractControl;
    ::ll::TypedStorage<4, 4, int>                                         mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                         mScreenHeight;
    ::ll::TypedStorage<8, 8, ulong>                                       mControlOptionEditorId;
    ::ll::TypedStorage<4, 4, ::TouchTurnState>                            mPrevState;
    ::ll::TypedStorage<8, 32, ::TouchTurnControlState>                    mPrevTouchTurnControlState;
    ::ll::TypedStorage<8, 152, ::TouchMoveAndTurnControlState>            mPrevTouchMoveAndTurnControlState;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<uint, int>>>          mActivePointers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addConditionalGuiPassthrough(::BindingFactory const&, uint, std::string const&, uint, bool);

    MCNAPI void addCustomZone(::BindingFactory const&, uint, uint);

    MCNAPI void addPointer(int, ::TouchState, float, float, bool, bool);

    MCNAPI void addTouchControlEditor(::BindingFactory const&, uint, uint, uint, uint);

    MCNAPI void clearControls(::InputEventQueue&);

    MCNAPI void clearPointers();

    MCNAPI void getTouchIdsWithFlags(std::vector<std::pair<int, int>>&);

    MCNAPI void render(::InputRenderContext&) const;

    MCNAPI void setWindowSize(int, int);

    MCNAPI void tick(::InputEventQueue&, int);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchMoveAndTurnControlState.h"
#include "mc/deps/input/TouchPointResults.h"
#include "mc/deps/input/TouchTurnControlState.h"
#include "mc/deps/input/TouchTurnState.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
class TouchControl;
class TouchMoveAndTurnInteractControl;
class TouchTurnInteractControl;
// clang-format on

class TouchControlSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::TouchPointResults>                              mTouchPointResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::TouchControl>>> mControls;
    ::ll::TypedStorage<8, 8, ::TouchTurnInteractControl*>                       mTurnInteractControl;
    ::ll::TypedStorage<8, 8, ::TouchMoveAndTurnInteractControl*>                mTouchMoveAndTurnInteractControl;
    ::ll::TypedStorage<4, 4, int>                                               mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                               mScreenHeight;
    ::ll::TypedStorage<8, 8, uint64>                                            mControlOptionEditorId;
    ::ll::TypedStorage<4, 4, ::TouchTurnState>                                  mPrevState;
    ::ll::TypedStorage<8, 32, ::TouchTurnControlState>                          mPrevTouchTurnControlState;
    ::ll::TypedStorage<8, 152, ::TouchMoveAndTurnControlState>                  mPrevTouchMoveAndTurnControlState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, int>>>            mActivePointers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addConditionalGuiPassthrough(
        ::BindingFactory const& bindingFactory,
        uint                    areaBindingName,
        ::std::string const&    buttonName,
        uint                    conditionName,
        bool                    consumeInput
    );

    MCAPI void addCustomZone(::BindingFactory const& bindingFactory, uint areaBindingName, uint conditionName);

    MCAPI void addTouchControlEditor(
        ::BindingFactory const& bindingFactory,
        uint                    areaBindingName,
        uint                    mainPanelAreaBindingName,
        uint                    subPanelAreaBindingName,
        uint                    conditionBindingName
    );

    MCAPI void clearControls(::InputEventQueue& eventQueue);

    MCAPI ~TouchControlSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TouchControlSet {};
#endif // @header-generator platform
#endif // @header-generator platform
