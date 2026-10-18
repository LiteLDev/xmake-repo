#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchControlEditorState.h"

// auto generated forward declare list
// clang-format off
class ControlConfiguration;
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class ControlOptionEditorControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                                 mWYSIWYGHUDState;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                  mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                       mMainPanelArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                       mSubPanelArea;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::RectangleArea()>>>        mReservedAreas;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ControlConfiguration>>> mConfigurations;
    ::ll::TypedStorage<4, 4, ::TouchControlEditorState>                                 mEditorState;
    ::ll::TypedStorage<4, 4, int>                                                       mActivePointer;
    ::ll::TypedStorage<8, 8, double>                                                    mStartMoveTime;
    ::ll::TypedStorage<4, 4, float>                                                     mStartX;
    ::ll::TypedStorage<4, 4, float>                                                     mStartY;
    ::ll::TypedStorage<4, 4, uint>                                                      mSelectedConfigId;
    ::ll::TypedStorage<4, 4, int>                                                       mSelectAllPointer;
    ::ll::TypedStorage<4, 4, int>    mActiveInteractingWithScaleSliderPointer;
    ::ll::TypedStorage<8, 8, double> mLastBumpSoundTime;
    ::ll::TypedStorage<1, 1, bool>   mHasDoneInitialCollisionCheck;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlOptionEditorControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ControlOptionEditorControl(
        ::std::function<float()>                                 wysiwygState,
        ::std::function<::RectangleArea()>                       area,
        ::std::function<::RectangleArea()>                       mainPanelArea,
        ::std::function<::RectangleArea()>                       subPanelArea,
        ::std::function<bool()>                                  condition,
        ::std::vector<::std::unique_ptr<::ControlConfiguration>> controlConfigurations,
        ::std::vector<::std::function<::RectangleArea()>> const& reservedAreas
    );

    MCAPI int _getNumberOfActiveControlConfigurations() const;

    MCAPI ::RectangleArea _getRectangleAreaOfConfiguration(::ControlConfiguration* cc) const;

    MCAPI bool _isColliding(::RectangleArea const& rect, uint excludedId) const;

    MCAPI void _playBumpingSound(::InputEventQueue& eventQueue);

    MCAPI void _pushControlsInsideSafeArea();

    MCAPI void _setControlConfigurationActive(::InputEventQueue& eventQueue, ::ControlConfiguration* cc, bool active);

    MCAPI void checkForOverlaps();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<float()>                                 wysiwygState,
        ::std::function<::RectangleArea()>                       area,
        ::std::function<::RectangleArea()>                       mainPanelArea,
        ::std::function<::RectangleArea()>                       subPanelArea,
        ::std::function<bool()>                                  condition,
        ::std::vector<::std::unique_ptr<::ControlConfiguration>> controlConfigurations,
        ::std::vector<::std::function<::RectangleArea()>> const& reservedAreas
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND
};
#else // @header-generator platform
class ControlOptionEditorControl {};
#endif // @header-generator platform
#endif // @header-generator platform
