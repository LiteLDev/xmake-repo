#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class BindingFactoryMap;
class ButtonChordTracker;
class ButtonRepeater;
class IClientInstance;
class IMinecraftGame;
class InputDeviceMapper;
class InputEventQueue;
class InputMappingFactoryMap;
class InputRenderContext;
struct ButtonEventData;
struct ClearPointerLocationWithIdEventData;
struct ControlOptionEventData;
struct ControllerIDtoClientMap;
struct DirectionEventData;
struct InputMapping;
struct NumberOfEnabledControlOptionsEventData;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
struct RawInputEventData;
struct TextCharEventData;
struct TouchPadTouchEventData;
namespace Input::Debug { class ISplitscreenRedirect; }
// clang-format on

class InputHandler {
public:
    // InputHandler inner types declare
    // clang-format off
    struct InputHandlerState;
    // clang-format on

    // InputHandler inner types define
    struct InputHandlerState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InputMode>               mCurrentInputMode;
        ::ll::TypedStorage<4, 4, ::InputBindingMode>        mCurrentBindingMode;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mInputMappingStack;
        ::ll::TypedStorage<8, 40, std::unordered_set<uint>> mButtonsDown;
        ::ll::TypedStorage<8, 40, std::unordered_set<int>>  mTriggeredChordsSources;
        ::ll::TypedStorage<4, 4, int>                       mCurrentChordSource;
        ::ll::TypedStorage<1, 1, bool>                      mSuspendInput;
        ::ll::TypedStorage<1, 1, bool>                      mSuspendDirectionalInput;
        ::ll::TypedStorage<1, 1, bool>                      mDisableInput;
        // NOLINTEND

    public:
        // prevent constructor by default
        InputHandlerState& operator=(InputHandlerState const&);
        InputHandlerState(InputHandlerState const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InputHandlerState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using InputModeHandlers = std::vector<std::function<void(InputMode, IClientInstance&)>>;

    using ButtonHandlerMap = std::multimap<uint, std::pair<bool, std::function<void(FocusImpact, IClientInstance&)>>>;

    using TextCharHandlers = std::vector<std::function<void(const std::string&, FocusImpact, IClientInstance&)>>;

    using PointerLocationHandlers =
        std::vector<std::function<void(const PointerLocationEventData&, FocusImpact, IClientInstance&)>>;

    using PointerLocationWithIdHandlers =
        std::vector<std::function<void(const PointerLocationWithIdEventData&, IClientInstance&)>>;

    using ClearPointerLocationWithIdHandlers =
        std::vector<std::function<void(const ClearPointerLocationWithIdEventData&, IClientInstance&)>>;

    using ClearPointerLocationsHandlers = std::vector<std::function<void(IClientInstance&)>>;

    using DirectionHandlerMap =
        std::multimap<DirectionId, std::function<void(float, float, FocusImpact, IClientInstance&)>>;

    using AnyInputHandler = std::function<void(IClientInstance&)>;

    using RawInputHandler = std::function<void(int, RawInputType, ButtonState, bool, IClientInstance&)>;

    using AddClientHandler = std::function<void(IMinecraftGame*, int, bool)>;

    using ChangeUserHandler = std::function<void(IMinecraftGame*, int, bool)>;

    using ControllerConnectionStateChangeHandler = std::function<void(IClientInstance&, bool, int)>;

    using TouchPadHandlers =
        std::vector<std::function<void(const TouchPadTouchEventData&, FocusImpact, IClientInstance&)>>;

    using PointerLocationWithIdHandlersMap =
        std::map<uint, std::function<void(const PointerLocationWithIdEventData&, IClientInstance&)>>;

    using ControlOptionHandlers = std::vector<std::function<void(const ControlOptionEventData&, IClientInstance&)>>;

    using NumberOfEnabledControlOptionsHandlers =
        std::vector<std::function<void(const NumberOfEnabledControlOptionsEventData&, IClientInstance&)>>;

    using OverlappingControlsHandlers =
        std::vector<std::function<void(const OverlappingControlsEventData&, IClientInstance&)>>;

    using PotentialOverlappingControlsHandlers = std::vector<std::function<void(IClientInstance&)>>;

    using InputModeHandler = std::function<void(InputMode, IClientInstance&)>;

    using ButtonPressHandler = std::function<void(FocusImpact, IClientInstance&)>;

    using TextCharHandler = std::function<void(const std::string&, FocusImpact, IClientInstance&)>;

    using PointerLocationHandler = std::function<void(const PointerLocationEventData&, FocusImpact, IClientInstance&)>;

    using PointerLocationWithIdHandler = std::function<void(const PointerLocationWithIdEventData&, IClientInstance&)>;

    using ClearPointerLocationWithIdHandler =
        std::function<void(const ClearPointerLocationWithIdEventData&, IClientInstance&)>;

    using ClearPointerLocationsHandler = std::function<void(IClientInstance&)>;

    using DirectionHandler = std::function<void(float, float, FocusImpact, IClientInstance&)>;

    using TouchPadTouchHandler = std::function<void(const TouchPadTouchEventData&, FocusImpact, IClientInstance&)>;

    using ControlOptionHandler = std::function<void(const ControlOptionEventData&, IClientInstance&)>;

    using NumberOfEnabledControlOptionsHandler =
        std::function<void(const NumberOfEnabledControlOptionsEventData&, IClientInstance&)>;

    using OverlappingControlsHandler = std::function<void(const OverlappingControlsEventData&, IClientInstance&)>;

    using PotentialOverlappingControlsHandler = std::function<void(IClientInstance&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (InputMode, IClientInstance&)>>> mInputModeHandlers;
    ::ll::TypedStorage<8, 24, std::multimap<uint, std::pair<bool, std::function<void (FocusImpact, IClientInstance&)>>>> mButtonDownHandlerMap;
    ::ll::TypedStorage<8, 24, std::multimap<uint, std::pair<bool, std::function<void (FocusImpact, IClientInstance&)>>>> mButtonUpHandlerMap;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const std::string&, FocusImpact, IClientInstance&)>>> mTextCharHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const PointerLocationEventData&, FocusImpact, IClientInstance&)>>> mPointerLocationHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const PointerLocationWithIdEventData&, IClientInstance&)>>> mPointerLocationWithIdHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const ClearPointerLocationWithIdEventData&, IClientInstance&)>>> mClearPointerLocationWithIdHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (IClientInstance&)>>> mClearPointerLocationsHandlers;
    ::ll::UntypedStorage<8, 32> mDirectionHandlerMap;
    ::ll::UntypedStorage<8, 48> mAnyInputHandler;
    ::ll::UntypedStorage<8, 48> mRawInputHandler;
    ::ll::UntypedStorage<8, 48> mAddClientHandler;
    ::ll::UntypedStorage<8, 48> mChangeUserHandler;
    ::ll::UntypedStorage<8, 48> mControllerConnectionStateChangeHandler;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const TouchPadTouchEventData&, FocusImpact, IClientInstance&)>>> mTouchPadHandlers;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<void (const PointerLocationWithIdEventData&, IClientInstance&)>>> mCustomZoneHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const ControlOptionEventData&, IClientInstance&)>>> mControlOptionHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const NumberOfEnabledControlOptionsEventData&, IClientInstance&)>>> mNumberOfEnabledControlOptionsHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (const OverlappingControlsEventData&, IClientInstance&)>>> mOverlappingControlsHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void (IClientInstance&)>>> mPotentialOverlappingControlsHandlers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InputEventQueue>> mInputEventQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ButtonChordTracker>> mChordTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ButtonRepeater>> mButtonRepeater;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<InputDeviceMapper>>> mInputDeviceMappers;
    ::ll::TypedStorage<8, 8, ::BindingFactoryMap&> mBindingFactoryMap;
    ::ll::TypedStorage<8, 8, ::InputMappingFactoryMap&> mInputMappingFactoryMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, InputHandler::InputHandlerState>> mPerIdState;
    ::ll::TypedStorage<4, 4, int> mPrimaryGameControllerId;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    InputHandler& operator=(InputHandler const&);
    InputHandler(InputHandler const&);
    InputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputHandler(
        ::BindingFactoryMap&,
        ::InputMappingFactoryMap&,
        ::InputMode,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
    );

    MCNAPI void _handleMappingChange(::InputMapping const*, ::InputMapping const*, int);

    MCNAPI void changeControllerId(int, int);

    MCNAPI void clearInputDeviceQueues();

    MCNAPI void clearInputDeviceQueuesForFrame();

    MCNAPI void clearInputMapping(int);

    MCNAPI void clearInvalidDownKeys(int);

    MCNAPI std::string const& getCurrentInputMapping(int) const;

    MCNAPI ::InputMode getCurrentInputMode(int) const;

    MCNAPI void initNewControllerIdOwner(int, ::InputMode);

    MCNAPI void popInputMapping(int);

    MCNAPI void pushInputMapping(std::string const&, int);

    MCNAPI void refreshInputMapping(int);

    MCNAPI void registerAddClientHandler(std::function<void(IMinecraftGame*, int, bool)>);

    MCNAPI void registerAnyInputHandler(std::function<void(IClientInstance&)>);

    MCNAPI void registerButtonDownHandler(std::string, std::function<void(FocusImpact, IClientInstance&)>, bool);

    MCNAPI void registerButtonUpHandler(std::string, std::function<void(FocusImpact, IClientInstance&)>, bool);

    MCNAPI void registerChangeUserHandler(std::function<void(IMinecraftGame*, int, bool)>);

    MCNAPI void registerClearPointerLocationWithIdHandler(
        std::function<void(const ClearPointerLocationWithIdEventData&, IClientInstance&)>
    );

    MCNAPI void registerClearPointerLocationsHandler(std::function<void(IClientInstance&)>);

    MCNAPI void registerControlOptionHandler(std::function<void(const ControlOptionEventData&, IClientInstance&)>);

    MCNAPI void registerControllerConnectionStateChangeHandler(std::function<void(IClientInstance&, bool, int)>);

    MCNAPI void
        registerDirectionHandler(::DirectionId, std::function<void(float, float, FocusImpact, IClientInstance&)>);

    MCNAPI void registerInputDeviceMapper(std::unique_ptr<InputDeviceMapper>);

    MCNAPI void registerInputModeHandler(std::function<void(InputMode, IClientInstance&)>);

    MCNAPI void registerNumberOfEnabledControlOptionsHandler(
        std::function<void(const NumberOfEnabledControlOptionsEventData&, IClientInstance&)>
    );

    MCNAPI void
        registerOverlappingControlsHandler(std::function<void(const OverlappingControlsEventData&, IClientInstance&)>);

    MCNAPI void registerPointerLocationHandler(
        std::function<void(const PointerLocationEventData&, FocusImpact, IClientInstance&)>
    );

    MCNAPI void registerPointerLocationWithIdHandler(
        std::function<void(const PointerLocationWithIdEventData&, IClientInstance&)>
    );

    MCNAPI void registerPotentialOverlappingControlsHandler(std::function<void(IClientInstance&)>);

    MCNAPI void registerRawInputHandler(std::function<void(int, RawInputType, ButtonState, bool, IClientInstance&)>);

    MCNAPI void registerTextCharHandler(std::function<void(const std::string&, FocusImpact, IClientInstance&)>);

    MCNAPI void
        registerTouchPadTouchHandler(std::function<void(const TouchPadTouchEventData&, FocusImpact, IClientInstance&)>);

    MCNAPI void releaseButtonsAndSticks(std::string const&, int);

    MCNAPI void render(::InputRenderContext&) const;

    MCNAPI void setDisableInput(bool, int);

    MCNAPI void setInputBindingMode(::InputBindingMode, int);

    MCNAPI void setSuspendDirectionalInput(bool, int);

    MCNAPI void setSuspendInput(bool, int);

    MCNAPI void setWindowSize(int, int);

    MCNAPI void tick(
        ::IMinecraftGame*,
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&,
        bool
    );

    MCNAPI void updateInputMapping(std::string const&, int);

    MCNAPI ~InputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BindingFactoryMap&,
        ::InputMappingFactoryMap&,
        ::InputMode,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
