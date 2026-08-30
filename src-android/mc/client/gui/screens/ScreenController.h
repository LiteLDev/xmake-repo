#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenViewCommand.h"
#include "mc/client/gui/screens/interfaces/IScreenController.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ScreenControllerProxy;
class StringHash;
class TaskGroup;
class TaskResult;
class UIPropertyBag;
struct ActorUniqueID;
struct AnimationEventData;
struct ClipStateChangeEventData;
struct ClippedCollectionEventData;
struct CustomRendererEventData;
struct FocusMoveScreenEventData;
struct InputModeChangeScreenEventData;
struct ItemRendererData;
struct PointerHeldScreenEventData;
struct RawInputScreenEventData;
struct ScreenEvent;
struct SliderChangeEventData;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ScreenController : public ::IScreenController {
public:
    // ScreenController inner types declare
    // clang-format off
    struct ButtonEventCallbackKeyHasher;
    // clang-format on

    // ScreenController inner types define
    enum class PreviousButtonStateRequirement : int {
        Any     = 0,
        Down    = 1,
        Up      = 2,
        NotDown = 3,
        NotUp   = 4,
    };

    enum class SliderChangeType : int {
        AnyChange    = 0,
        NotFinalized = 1,
        Finalized    = 2,
    };

    struct ButtonEventCallbackKeyHasher {};

    using ButtonEventCallbackMap = std::unordered_map<
        std::tuple<uint, ButtonState>,
        std::vector<std::tuple<
            ScreenController::PreviousButtonStateRequirement,
            brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>>>,
        ScreenController::ButtonEventCallbackKeyHasher,
        std::equal_to<std::tuple<uint, ButtonState>>,
        std::allocator<std::pair<
            const std::tuple<uint, ButtonState>,
            std::vector<std::tuple<
                ScreenController::PreviousButtonStateRequirement,
                brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>>>>>>;

    using ButtonEventCallbackKey = std::tuple<uint, ButtonState>;

    using ButtonInteractedEventCallbackMap =
        std::unordered_map<uint, std::vector<brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>>>;

    using RawInputEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest(RawInputScreenEventData&) const>;

    using TextEventHandlerCallbackMap = std::unordered_map<
        uint,
        std::vector<std::tuple<bool, brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>>>>;

    using ToggleChangeEventCallbackMap =
        std::unordered_map<uint, std::vector<brstd::move_only_function<ui::ViewRequest(ToggleChangeEventData&) const>>>;

    using TextEditSelectedStateChangeEventCallbackMap = std::unordered_map<
        uint,
        std::vector<brstd::move_only_function<ui::ViewRequest(TextEditSelectedStateChangeEventData&) const>>>;

    using SliderChangeEventCallbackMap = std::unordered_map<
        uint,
        std::vector<std::tuple<
            ScreenController::SliderChangeType,
            brstd::move_only_function<ui::ViewRequest(int, float) const>>>>;

    using AnimationEventHandlerCallbackMap =
        std::unordered_map<uint, std::vector<brstd::move_only_function<ui::ViewRequest() const>>>;

    using ClippedCollectionEventHandlerCallbackMap = std::
        unordered_map<uint, std::vector<brstd::move_only_function<ui::ViewRequest(int, int, UIPropertyBag&) const>>>;

    using ClipStateChangeEventHandlerCallbackMap =
        std::unordered_map<uint, std::vector<brstd::move_only_function<ui::ViewRequest(bool, UIPropertyBag&) const>>>;

    using CustomRendererEventHandlerCallbackMap =
        std::unordered_map<uint, std::vector<brstd::move_only_function<ui::ViewRequest() const>>>;

    using ButtonEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>;

    using FocusMoveEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest(FocusMoveScreenEventData&) const>;

    using InputModeChangedEventHandlerCallback =
        ::brstd::move_only_function<ui::ViewRequest(InputModeChangeScreenEventData&) const>;

    using PointerHeldEventHandlerCallback =
        ::brstd::move_only_function<ui::ViewRequest(PointerHeldScreenEventData&) const>;

    using TextEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>;

    using ToggleChangeEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest(ToggleChangeEventData&) const>;

    using TextEditSelectedStateChangeEventHandlerCallback =
        ::brstd::move_only_function<ui::ViewRequest(TextEditSelectedStateChangeEventData&) const>;

    using SliderChangeEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest(int, float) const>;

    using AnimationEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest() const>;

    using ClippedCollectionEventHandlerCallback =
        ::brstd::move_only_function<ui::ViewRequest(int, int, UIPropertyBag&) const>;

    using ClipStateChangeEventHandlerCallback =
        ::brstd::move_only_function<ui::ViewRequest(bool, UIPropertyBag&) const>;

    using CustomRendererEventHandlerCallback = ::brstd::move_only_function<ui::ViewRequest() const>;

    using BindStringCallback = ::brstd::move_only_function<std::string() const>;

    using BindPredicate = ::brstd::move_only_function<bool() const>;

    using BindBoolCallback = ::brstd::move_only_function<bool() const>;

    using BindIntCallback = ::brstd::move_only_function<int() const>;

    using BindFloatCallback = ::brstd::move_only_function<float() const>;

    using BindGridSizeCallback = ::brstd::move_only_function<glm::vec<2, int, (glm::qualifier)0>() const>;

    using BindGlobalGridSizeCallback = ::brstd::move_only_function<void(const std::string&, UIPropertyBag&) const>;

    using BindColorCallback = ::brstd::move_only_function<mce::Color() const>;

    using BindColorWithBagCallback = ::brstd::move_only_function<mce::Color(UIPropertyBag&) const>;

    using BindStringForCollectionCallback = ::brstd::move_only_function<std::string(int) const>;

    using BindCollectionPredicate = ::brstd::move_only_function<bool(int) const>;

    using BindBoolForCollectionCallback = ::brstd::move_only_function<bool(int) const>;

    using BindFloatForCollectionCallback = ::brstd::move_only_function<float(int) const>;

    using BindIntForCollectionCallback = ::brstd::move_only_function<int(int) const>;

    using BindColorForCollectionCallback = ::brstd::move_only_function<mce::Color(int) const>;

    using BindItemDataForAnyCollectionCallback =
        ::brstd::move_only_function<ItemRendererData(const std::string&, int) const>;

    using BindAnyCollectionPredicate = ::brstd::move_only_function<bool(const std::string&, int) const>;

    using BindStringForAnyCollectionCallback = ::brstd::move_only_function<std::string(const std::string&, int) const>;

    using BindBoolForAnyCollectionCallback = ::brstd::move_only_function<bool(const std::string&, int) const>;

    using BindIntForAnyCollectionCallback = ::brstd::move_only_function<int(const std::string&, int) const>;

    using BindFloatForAnyCollectionCallback = ::brstd::move_only_function<float(const std::string&, int) const>;

    using BindDoubleForAnyCollectionCallback = ::brstd::move_only_function<double(const std::string&, int) const>;

    using BindForAnyCollectionCallback =
        ::brstd::move_only_function<void(int, const std::string&, UIPropertyBag&) const>;

    using BindForCollectionCallback =
        ::brstd::move_only_function<void(const std::string&, int, const std::string&, UIPropertyBag&) const>;

    using BindForGlobalCallback = ::brstd::move_only_function<void(const std::string&, UIPropertyBag&) const>;

    using ButtonInteractedEventCallbackVector =
        std::vector<brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>>;

    using ButtonEventCallbackInfo = std::tuple<
        ScreenController::PreviousButtonStateRequirement,
        brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>>;

    using ButtonEventCallbackInfoVector = std::vector<std::tuple<
        ScreenController::PreviousButtonStateRequirement,
        brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>>>;

    using TextEventHandlerCallbackInfo =
        std::tuple<bool, brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>>;

    using TextEventHandlerCallbackVector =
        std::vector<std::tuple<bool, brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>>>;

    using ToggleChangeEventCallbackVector =
        std::vector<brstd::move_only_function<ui::ViewRequest(ToggleChangeEventData&) const>>;

    using TextEditSelectedStateChangeEventCallbackVector =
        std::vector<brstd::move_only_function<ui::ViewRequest(TextEditSelectedStateChangeEventData&) const>>;

    using SliderChangeEventHandlerCallbackInfo =
        std::tuple<ScreenController::SliderChangeType, brstd::move_only_function<ui::ViewRequest(int, float) const>>;

    using SliderChangeEventCallbackVector = std::vector<
        std::tuple<ScreenController::SliderChangeType, brstd::move_only_function<ui::ViewRequest(int, float) const>>>;

    using AnimationEventHandlerCallbackVector = std::vector<brstd::move_only_function<ui::ViewRequest() const>>;

    using ClippedCollectionEventHandlerCallbackVector =
        std::vector<brstd::move_only_function<ui::ViewRequest(int, int, UIPropertyBag&) const>>;

    using ClipStateChangeHandlerCallbackVector =
        std::vector<brstd::move_only_function<ui::ViewRequest(bool, UIPropertyBag&) const>>;

    using CustomRendererEventHandlerCallbackVector = std::vector<brstd::move_only_function<ui::ViewRequest() const>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                      mControlCreateCallback;
    ::ll::UntypedStorage<8, 48>                                      mControlDestroyCallback;
    ::ll::UntypedStorage<8, 48>                                      mControlDestroyAllCallback;
    ::ll::UntypedStorage<8, 48>                                      mScreenViewSendManualInputEventCallback;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenControllerProxy>> mProxy;
    ::ll::TypedStorage<1, 1, bool>                                   mCreateInitialized;
    ::ll::TypedStorage<1, 1, bool>                                   mInitialized;
    ::ll::UntypedStorage<1, 1>                                       mUsesErrorInfo;
    ::ll::TypedStorage<8, 1296, ::ScreenViewCommand>                 mScreenViewCommand;
    ::ll::TypedStorage<1, 1, bool>                                   mIsScrollingLocked;
    ::ll::UntypedStorage<8, 40>                                      mButtonEventCallbackMap;
    ::ll::UntypedStorage<8, 48>                                      mButtonInteractedEventCallbackMap;
    ::ll::UntypedStorage<8, 64>                                      mRawInputEventHandlerCallback;
    ::ll::UntypedStorage<8, 24>                                      mFocusMoveEventCallbacks;
    ::ll::UntypedStorage<8, 24>                                      mInputModeChangedEventCallbacks;
    ::ll::UntypedStorage<8, 24>                                      mPointerHeldEventCallbacks;
    ::ll::UntypedStorage<8, 40>                                      mTextEditEventCallbackMap;
    ::ll::UntypedStorage<8, 40>                                      mToggleChangeEventCallbackMap;
    ::ll::UntypedStorage<8, 40>                                      mTextEditSelectedStateChangeEventCallbackMap;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ScreenController>>> mSubControllers;
    ::ll::UntypedStorage<8, 40>                                               mSliderChangeEventCallbackMap;
    ::ll::UntypedStorage<8, 40>                                               mAnimationEventCallbackMap;
    ::ll::UntypedStorage<8, 40>                                               mClippedCollectionEventCallbackMap;
    ::ll::UntypedStorage<8, 40>                                               mClipStateChangeEventCallbackMap;
    ::ll::UntypedStorage<8, 40>                                               mCustomRendererEventHandlerCallbackMap;
    ::ll::UntypedStorage<8, 40>                                               mBindCallbacks;
    ::ll::UntypedStorage<8, 40>                                               mCollectionBindCallbacks;
    ::ll::UntypedStorage<8, 40>                                               mAnyCollectionBindCallbacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScreenController();

    virtual void preFrameTick();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&);

    virtual std::optional<std::string> getRoute() const;

    virtual void setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&);

    virtual void onOpen();

    virtual void queueTitleNarration();

    virtual void onTerminate();

    virtual void onInit();

    virtual void onDelete();

    virtual bool canExit();

    virtual ::ui::ViewRequest tryExit();

    virtual void onCreation();

    virtual void onReload();

    virtual void onLeave();

    virtual void leaveScreen(std::string const&);

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual bool bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual bool bind(std::string const&, uint, int, std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual void handleLicenseChanged();

    virtual void setAssociatedBlockPos(::BlockPos const&);

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const);

    virtual void setSuspendInput(bool);

    virtual void setSuspendDirectionalInput(bool);

    virtual void setViewCommand(::ScreenViewCommand const&);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual std::string getTelemetryOverride() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;

    virtual int getScreenVersion() const;

    virtual uint getSceneId() const;

    virtual ::ScreenControllerProxy* getProxy();

    virtual void onEntered();

    virtual void onScreenPushedAbove();

    virtual void onEntering();

    virtual bool _doesScreenHaveExitBehavior() const;

    virtual bool _isContainerScreen() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenController(bool);

    MCNAPI ::ui::ViewRequest _handleEvent(::ScreenEvent&);

    MCNAPI void _registerSubController(std::shared_ptr<ScreenController>);

    MCNAPI void
    bindBool(::StringHash const&, ::brstd::move_only_function<bool() const>, ::brstd::move_only_function<bool() const>);

    MCNAPI void bindBoolForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<bool(const std::string&, int) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindBoolForCollection(
        ::StringHash const&,
        ::StringHash const&,
        ::brstd::move_only_function<bool(int) const>,
        ::brstd::move_only_function<bool(int) const>
    );

    MCNAPI void bindColor(
        ::StringHash const&,
        ::brstd::move_only_function<mce::Color() const>,
        ::brstd::move_only_function<bool() const>
    );

    MCNAPI void bindColorForCollection(
        ::StringHash const&,
        ::StringHash const&,
        ::brstd::move_only_function<mce::Color(int) const>,
        ::brstd::move_only_function<bool(int) const>
    );

    MCNAPI void bindColorWithPropertyBag(
        ::StringHash const&,
        ::brstd::move_only_function<mce::Color(UIPropertyBag&) const>,
        ::brstd::move_only_function<bool() const>
    );

    MCNAPI void bindDoubleForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<double(const std::string&, int) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindFloat(
        ::StringHash const&,
        ::brstd::move_only_function<float() const>,
        ::brstd::move_only_function<bool() const>
    );

    MCNAPI void bindFloatForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<float(const std::string&, int) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindFloatForCollection(
        ::StringHash const&,
        ::StringHash const&,
        ::brstd::move_only_function<float(int) const>,
        ::brstd::move_only_function<bool(int) const>
    );

    MCNAPI void bindForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<void(int, const std::string&, UIPropertyBag&) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<void(const std::string&, int, const std::string&, UIPropertyBag&) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindForCollection(
        ::StringHash const&,
        ::StringHash const&,
        ::brstd::move_only_function<void(int, const std::string&, UIPropertyBag&) const>
    );

    MCNAPI void
    bindForGlobal(::StringHash const&, ::brstd::move_only_function<void(const std::string&, UIPropertyBag&) const>);

    MCNAPI void bindForGlobalGridSize(
        ::StringHash const&,
        ::brstd::move_only_function<void(const std::string&, UIPropertyBag&) const>,
        ::brstd::move_only_function<bool() const>
    );

    MCNAPI void bindGridSize(
        ::StringHash const&,
        ::brstd::move_only_function<glm::vec<2, int, (glm::qualifier)0>() const>,
        ::brstd::move_only_function<bool() const>
    );

    MCNAPI void
    bindInt(::StringHash const&, ::brstd::move_only_function<int() const>, ::brstd::move_only_function<bool() const>);

    MCNAPI void bindIntForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<int(const std::string&, int) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindIntForCollection(
        ::StringHash const&,
        ::StringHash const&,
        ::brstd::move_only_function<int(int) const>,
        ::brstd::move_only_function<bool(int) const>
    );

    MCNAPI void bindItemDataForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<ItemRendererData(const std::string&, int) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindString(
        ::StringHash const&,
        ::brstd::move_only_function<std::string() const>,
        ::brstd::move_only_function<bool() const>
    );

    MCNAPI void bindStringForAnyCollection(
        ::StringHash const&,
        ::brstd::move_only_function<std::string(const std::string&, int) const>,
        ::brstd::move_only_function<bool(const std::string&, int) const>
    );

    MCNAPI void bindStringForCollection(
        ::StringHash const&,
        ::StringHash const&,
        ::brstd::move_only_function<std::string(int) const>,
        ::brstd::move_only_function<bool(int) const>
    );

    MCNAPI void focusControl(std::string const&, bool);

    MCNAPI void focusControl(std::string const&, std::string const&, int);

    MCNAPI bool hasFinishedAsyncTasks() const;

    MCNAPI void logCreationTime(std::string const&, double, double, uchar);

    MCNAPI void prepareFocusForModalPopup();

    MCNAPI void queueAsyncTask(::brstd::move_only_function<TaskResult()>&&, std::function<void()>&&);

    MCNAPI void registerAnimationEventHandler(uint const, ::brstd::move_only_function<ui::ViewRequest() const>);

    MCNAPI void registerButtonEventHandler(
        uint const,
        ::ButtonState,
        ::ScreenController::PreviousButtonStateRequirement,
        ::brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>
    );

    MCNAPI void registerButtonEventHandler(
        uint const,
        ::ButtonState,
        ::ButtonState,
        ::brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>
    );

    MCNAPI void
    registerButtonInteractedHandler(uint const, ::brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>);

    MCNAPI void
    registerButtonPressedHandler(uint const, ::brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>);

    MCNAPI void
    registerButtonReleasedHandler(uint const, ::brstd::move_only_function<ui::ViewRequest(UIPropertyBag*) const>);

    MCNAPI void registerClipStateChangeEventHandler(
        uint const,
        ::brstd::move_only_function<ui::ViewRequest(bool, UIPropertyBag&) const>
    );

    MCNAPI void registerClippedCollectionEventHandler(
        ::StringHash const&,
        ::brstd::move_only_function<ui::ViewRequest(int, int, UIPropertyBag&) const>
    );

    MCNAPI void registerCustomRendererEventHandler(uint const, ::brstd::move_only_function<ui::ViewRequest() const>);

    MCNAPI void
        registerFocusMovedEventHandler(::brstd::move_only_function<ui::ViewRequest(FocusMoveScreenEventData&) const>);

    MCNAPI void registerInputModechangedEventHandler(
        ::brstd::move_only_function<ui::ViewRequest(InputModeChangeScreenEventData&) const>
    );

    MCNAPI void registerPointerHeldEventHandler(
        ::brstd::move_only_function<ui::ViewRequest(PointerHeldScreenEventData&) const>
    );

    MCNAPI void
        registerRawInputEventHandler(::brstd::move_only_function<ui::ViewRequest(RawInputScreenEventData&) const>);

    MCNAPI void
    registerSliderChangedEventHandler(uint const, ::brstd::move_only_function<ui::ViewRequest(int, float) const>);

    MCNAPI void
    registerSliderFinishedEventHandler(uint const, ::brstd::move_only_function<ui::ViewRequest(int, float) const>);

    MCNAPI void
    registerSliderNotFinishedEventHandler(uint const, ::brstd::move_only_function<ui::ViewRequest(int, float) const>);

    MCNAPI void registerTextEditChangedEventHandler(
        uint const,
        ::brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>
    );

    MCNAPI void registerTextEditFinishedEventHandler(
        uint const,
        ::brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>
    );

    MCNAPI void registerTextEditSelectedStateChangeEventHandler(
        uint const,
        ::brstd::move_only_function<ui::ViewRequest(TextEditSelectedStateChangeEventData&) const>
    );

    MCNAPI void
        registerTextEventHandler(::brstd::move_only_function<ui::ViewRequest(TextEditScreenEventData&, int) const>);

    MCNAPI void registerToggleChangeEventHandler(
        uint const,
        ::brstd::move_only_function<ui::ViewRequest(ToggleChangeEventData&) const>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preFrameTick();

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::ViewRequest $handleEvent(::ScreenEvent&);

    MCNAPI std::optional<std::string> $getRoute() const;

    MCNAPI void $setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&);

    MCNAPI void $onOpen();

    MCNAPI void $queueTitleNarration();

    MCNAPI void $onTerminate();

    MCNAPI void $onInit();

    MCNAPI void $onDelete();

    MCNAPI bool $canExit();

    MCNAPI ::ui::ViewRequest $tryExit();

    MCNAPI void $onCreation();

    MCNAPI void $onReload();

    MCNAPI void $onLeave();

    MCNAPI void $leaveScreen(std::string const&);

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI bool $bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI bool $bind(std::string const&, uint, int, std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI void $handleLicenseChanged();

    MCNAPI void $setAssociatedBlockPos(::BlockPos const&);

    MCNAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const);

    MCNAPI void $setSuspendInput(bool);

    MCNAPI void $setSuspendDirectionalInput(bool);

    MCNAPI void $setViewCommand(::ScreenViewCommand const&);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI std::string $getTelemetryOverride() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI uint $getSceneId() const;

    MCNAPI ::ScreenControllerProxy* $getProxy();

    MCNAPI void $onEntered();

    MCNAPI void $onScreenPushedAbove();

    MCNAPI void $onEntering();

    MCNAPI bool $_doesScreenHaveExitBehavior() const;

    MCNAPI bool $_isContainerScreen() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
