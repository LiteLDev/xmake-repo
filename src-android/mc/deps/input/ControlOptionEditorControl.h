#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchControlEditorState.h"

// auto generated forward declare list
// clang-format off
class ControlConfiguration;
class InputEventQueue;
class InputRenderContext;
class TouchPointResults;
// clang-format on

class ControlOptionEditorControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                   mWYSIWYGHUDState;
    ::ll::UntypedStorage<8, 48>                                                   mCondition;
    ::ll::UntypedStorage<8, 48>                                                   mMainPanelArea;
    ::ll::UntypedStorage<8, 48>                                                   mSubPanelArea;
    ::ll::TypedStorage<8, 24, std::vector<std::function<RectangleArea()>>>        mReservedAreas;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ControlConfiguration>>> mConfigurations;
    ::ll::TypedStorage<4, 4, ::TouchControlEditorState>                           mEditorState;
    ::ll::TypedStorage<4, 4, int>                                                 mActivePointer;
    ::ll::TypedStorage<8, 8, double>                                              mStartMoveTime;
    ::ll::TypedStorage<4, 4, float>                                               mStartX;
    ::ll::TypedStorage<4, 4, float>                                               mStartY;
    ::ll::TypedStorage<4, 4, uint>                                                mSelectedConfigId;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectAllPointer;
    ::ll::TypedStorage<4, 4, int>    mActiveInteractingWithScaleSliderPointer;
    ::ll::TypedStorage<8, 8, double> mLastBumpSoundTime;
    ::ll::UntypedStorage<1, 16>      mHasDoneInitialCollisionCheck;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlOptionEditorControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlOptionEditorControl();

    virtual void render(::InputRenderContext&) const;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ControlOptionEditorControl(
        std::function<float()>,
        std::function<RectangleArea()>,
        std::function<RectangleArea()>,
        std::function<RectangleArea()>,
        std::function<bool()>,
        std::vector<std::unique_ptr<ControlConfiguration>>,
        std::vector<std::function<RectangleArea()>> const&
    );

    MCNAPI int _getNumberOfActiveControlConfigurations() const;

    MCNAPI ::RectangleArea _getRectangleAreaOfConfiguration(::ControlConfiguration*) const;

    MCNAPI bool _isColliding(::RectangleArea const&, uint) const;

    MCNAPI void _pushControlsInsideSafeArea();

    MCNAPI void _setControlConfigurationActive(::InputEventQueue&, ::ControlConfiguration*, bool);

    MCNAPI void checkForOverlaps();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<float()>,
        std::function<RectangleArea()>,
        std::function<RectangleArea()>,
        std::function<RectangleArea()>,
        std::function<bool()>,
        std::vector<std::unique_ptr<ControlConfiguration>>,
        std::vector<std::function<RectangleArea()>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::InputRenderContext&) const;

    MCNAPI void $tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
