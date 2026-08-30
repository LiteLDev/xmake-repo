#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/controls/TextCharEventResult.h"
#include "mc/client/gui/screens/ControlCollectionChange.h"
#include "mc/client/gui/screens/ControlCollectionFlag.h"
#include "mc/client/gui/screens/GamepadCursorData.h"
#include "mc/client/gui/screens/OffscreenScrollAction.h"
#include "mc/client/gui/screens/ScreenEvent.h"
#include "mc/client/gui/screens/TextEditFocusedListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class CachedScenes;
class DataBindingComponent;
class FocusComponent;
class FocusManager;
class ITTSEventManager;
class InputComponent;
class KeyboardManager;
class LayoutManager;
class ScreenController;
class ScreenControllerProxy;
class ScreenInputContext;
class ScreenLoadTimeTracker;
class ScreenRenderBatch;
class ScreenSettings;
class ScreenViewProxy;
class SliderComponent;
class TaskGroup;
class TextEditComponent;
class UIAnimationController;
class UIControl;
class UIControlFactory;
class UIFrameUpdateContext;
class UIMeasureStrategy;
class UIPropertyBag;
class UIRenderContext;
class VisualTree;
struct TextCharEventData;
struct TouchPadTouchEventData;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
// clang-format on

class ScreenView {
public:
    // ScreenView inner types declare
    // clang-format off
    struct TouchPadData;
    struct DelayedCommand;
    // clang-format on

    // ScreenView inner types define
    enum class DelayedCommandLocation : int {
        DirtyVisualTree = 0,
        PostLayout      = 1,
    };

    struct TouchPadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                     mTouchId;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPreviousPosition;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCurrentPosition;
        // NOLINTEND
    };

    struct DelayedCommand {
    public:
        // DelayedCommand inner types define
        using Result = std::pair<ui::DirtyFlag, bool>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mAction;
        ::ll::UntypedStorage<4, 16> location;
        // NOLINTEND
    };

    using duration_sec = std::chrono::duration<float, std::ratio<1, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mLastTime;
    ::ll::TypedStorage<4, 4, float> mTickTime;
    ::ll::TypedStorage<8, 8, double> mLastRawJoystickEventTime;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mSize;
    ::ll::TypedStorage<4, 4, int> mMenuUpButtonId;
    ::ll::TypedStorage<4, 4, int> mMenuDownButtonId;
    ::ll::TypedStorage<4, 4, int> mMenuLeftButtonId;
    ::ll::TypedStorage<4, 4, int> mMenuRightButtonId;
    ::ll::TypedStorage<4, 4, int> mMenuTabLeftButtonId;
    ::ll::TypedStorage<4, 4, int> mMenuTabRightButtonId;
    ::ll::TypedStorage<4, 8, std::array<uint, 2>> mPointerButtonIds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScreenController>> mController;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VisualTree>> mVisualTree;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mAlwaysBindControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mInputControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mScrollViewControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mOutOfModalScopeScrollViewControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mAnimationControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mFactoryControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mTextEditBoxControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mAlwaysListeningInputControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mRenderableControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mFlyingItemRendererControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mSliderControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mCustomRendererControls;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mCustomFrameUpdateControls;
    ::ll::TypedStorage<8, 24, std::map<std::vector<std::shared_ptr<UIControl>>*, std::vector<std::shared_ptr<UIControl>>>> mControlsToRemove;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenRenderBatch>> mRootRenderBatch;
    ::ll::TypedStorage<8, 8, std::unique_ptr<UIAnimationController>> mAnimationController;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::vector<std::weak_ptr<UIControl>>>> mReservedButtonUpEvents;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mSelectedControl;
    ::ll::TypedStorage<4, 4, ::InputMode> mInputMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LayoutManager>> mLayoutManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FocusManager>> mFocusManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<1, 1, bool> mTextToSpeechEnabled;
    ::ll::TypedStorage<8, 24, std::string> mTTSSectionHeader;
    ::ll::TypedStorage<4, 4, float> mCurrentSliderValue;
    ::ll::TypedStorage<1, 1, bool> mIsGUIScaleSlider;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, ui::CardinalDirection>> mControllerStickDirections;
    ::ll::TypedStorage<4, 4, int> mControllerLastMoved;
    ::ll::TypedStorage<4, 4, int> mCursorTick;
    ::ll::TypedStorage<4, 4, float const> mControllerXThreshold;
    ::ll::TypedStorage<4, 4, float const> mControllerYThreshold;
    ::ll::TypedStorage<4, 72, ::glm::vec<2, float, (glm::qualifier)0>[9]> mControllerStickValues;
    ::ll::TypedStorage<4, 8, ::GamepadCursorData> mGamepadCursorData;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mGamepadCursorPosition;
    ::ll::TypedStorage<1, 1, bool> mHasSetInitialPosition;
    ::ll::TypedStorage<1, 1, bool> mGamepadCursorFocusModeEnabled;
    ::ll::TypedStorage<1, 1, bool> mGamepadCursorMagnetEnabled;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mGamepadMagnetControl;
    ::ll::TypedStorage<4, 4, float> mGamepadMoveTime;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mGamepadTrackedDirection;
    ::ll::TypedStorage<1, 1, bool> mGamepadHasTapped;
    ::ll::TypedStorage<4, 20, ::ScreenView::TouchPadData> mTouchPadData;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPointerLocationPrevious;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPointInTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCurrentTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTimeAccumulator;
    ::ll::TypedStorage<4, 4, std::chrono::duration<float, std::ratio<1, 1>> const> mFixedAnimationUpdateRate;
    ::ll::TypedStorage<4, 4, float> mKeyboardHeight;
    ::ll::TypedStorage<1, 1, bool> mShouldShowKeyboard;
    ::ll::TypedStorage<1, 1, bool> mInitKeyboard;
    ::ll::TypedStorage<4, 4, float> mCurrentObfuscateTime;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&> mKeyboardManager;
    ::ll::TypedStorage<8, 24, std::vector<RectangleArea>> mInputAreas;
    ::ll::TypedStorage<8, 8, ::UIMeasureStrategy&> mMeasureStrategy;
    ::ll::TypedStorage<1, 1, bool> mCanMoveFocus;
    ::ll::TypedStorage<1, 1, ::FocusImpact> mNextFocusAction;
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControlFactory>> mControlFactory;
    ::ll::TypedStorage<8, 48, std::queue<ScreenEvent, std::deque<ScreenEvent>>> mAnimationEvents;
    ::ll::TypedStorage<8, 48, std::queue<ScreenEvent, std::deque<ScreenEvent>>> mCustomRendererEvents;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mStartLocation;
    ::ll::TypedStorage<4, 4, float> mTimeUntilNextPointerHeldEvent;
    ::ll::TypedStorage<4, 4, float> mDelayBetweenEachPointerHeldEvent;
    ::ll::TypedStorage<1, 1, bool> mShouldSendPointerHeldEvents;
    ::ll::TypedStorage<8, 24, std::vector<ScreenView::DelayedCommand>> mDelayedCommands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenViewProxy>> mProxy;
    ::ll::TypedStorage<8, 48, std::queue<std::string, std::deque<std::string>>> mQueuedTextChange;
    ::ll::TypedStorage<1, 1, bool> mIsExiting;
    ::ll::TypedStorage<1, 1, bool> mIsEntering;
    ::ll::TypedStorage<1, 1, bool> mIsInitialized;
    ::ll::TypedStorage<1, 1, bool> mHasFocus;
    ::ll::TypedStorage<1, 1, bool> mHasHadFocus;
    ::ll::TypedStorage<1, 1, bool> mIsTerminating;
    ::ll::TypedStorage<1, 1, bool> mDirectionalButtonWasPressed;
    ::ll::TypedStorage<1, 1, bool> mDelayedFocusRefresh;
    ::ll::TypedStorage<1, 1, ::TextEditFocusedListener> mTextEditFocusedListener;
    ::ll::UntypedStorage<8, 24> mScreenLoadTimeTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFocusChangeSub;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenView& operator=(ScreenView const&);
    ScreenView(ScreenView const&);
    ScreenView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _adjustScrollToControl(::UIControl&);

    MCNAPI void _adjustScrollToFocusedControl(::UIControl&, bool, bool);

    MCNAPI void _advanceToNextTab(bool);

    MCNAPI void _bindData(bool);

    MCNAPI void _changeInputControlCollection(::UIControl&, ::ControlCollectionChange, bool const);

    MCNAPI void _debugRenderControl(::UIRenderContext&, ::UIControl const&) const;

    MCNAPI void _debugRenderFocusControl(::UIRenderContext&, ::UIControl const&, std::vector<const UIControl*>&) const;

    MCNAPI void _deselectControl(bool, bool);

    MCNAPI void _executeDelayedCommands(::ScreenView::DelayedCommandLocation);

    MCNAPI void _fireSelectedStateChangeEvent(::TextEditComponent const&, bool);

    MCNAPI void _fireTextChangedEvent(bool, ::TextCharEventResult, uint, int, ::UIPropertyBag*);

    MCNAPI void _focusChangeCallback(std::weak_ptr<UIControl>, std::weak_ptr<UIControl>);

    MCNAPI void _forwardEventToAnimationControls(::ScreenEvent const&);

    MCNAPI std::shared_ptr<UIControl> _getGamepadCursorFocusedControl() const;

    MCNAPI ::ScreenSettings const* _getScreenComponent() const;

    MCNAPI void _handleDirtyVisualTree(bool, bool);

    MCNAPI void _handlePointerLocation(::glm::vec<2, float, (glm::qualifier)0> const&, ::FocusImpact, bool, bool);

    MCNAPI void _handleStickScrolling(::DirectionId);

    MCNAPI bool _isFocusEnabled(std::shared_ptr<UIControl> const&) const;

    MCNAPI bool _isFocusMagnetEnabled(std::shared_ptr<UIControl> const&) const;

    MCNAPI bool _isFocusable(::FocusComponent const&) const;

    MCNAPI void _passViewCommand();

    MCNAPI void _processControllerDirection(::DirectionId);

    MCNAPI void _processEvents(::ScreenInputContext&);

    MCNAPI void _queueTextToSpeechIfEnabled(std::shared_ptr<UIControl>, bool, bool);

    MCNAPI void _queueTextToSpeechTextboxCharacter(std::string const&);

    MCNAPI void _resetButtonState(::UIControl&);

    MCNAPI void _resetFocusedControl();

    MCNAPI void _resetInputControl(::UIControl&, ::InputComponent* const, bool const);

    MCNAPI void _scrollToGridItem(::UIControl*, int, int);

    MCNAPI void _selectControl(::UIControl&, bool);

    MCNAPI void
    _selectNextFocusObject(::ui::CardinalDirection, bool, ::glm::vec<2, float, (glm::qualifier)0> const, bool);

    MCNAPI void _sendScrollEvent(::UIControl&, float) const;

    MCNAPI void _setGamepadCursorFocusMode(bool);

    MCNAPI void _setKeyboardHeight(float);

    MCNAPI void _setupControlFactoryCallbacks();

    MCNAPI void _switchTabToTargetIndex(std::vector<std::shared_ptr<UIControl>>&, int);

    MCNAPI bool _updateControlCollections(bool);

    MCNAPI void _updateFocusActivationState();

    MCNAPI void _updateFocusControl(bool, bool, bool, bool);

    MCNAPI void _updateInputAreas();

    MCNAPI void _updateKeyboardVisibility();

    MCNAPI void cleanInputComponents();

    MCNAPI std::string getRoute() const;

    MCNAPI std::string getScreenName() const;

    MCNAPI void handleButtonEvent(uint, ::ButtonState, ::FocusImpact);

    MCNAPI bool handlePointerLocation(::glm::vec<2, float, (glm::qualifier)0> const&, bool, ::FocusImpact);

    MCNAPI bool isGamepadDeflectionModeEnabled() const;

    MCNAPI void render(::UIRenderContext&);

    MCNAPI void resize();

    MCNAPI void setInitialized();

    MCNAPI void swapVisualTree(std::unique_ptr<VisualTree>&&);

    MCNAPI ~ScreenView();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _shouldBindChildren(bool, ::UIControl&, ::DataBindingComponent&);

    MCNAPI static bool isDebugRendering();

    MCNAPI static bool isDebuggingFocus();

    MCNAPI static void setDebugFocus(bool);

    MCNAPI static void setDebugRendering(bool);

    MCNAPI static ::Bedrock::PubSub::Subscription subscribeForDebugChanges(std::function<void()>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::PubSub::
        Publisher<void(), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>&
        mDebugChangePublisher();

    MCNAPI static bool& sIsDebuggingFocus();

    MCNAPI static bool& sRenderDebugControls();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
