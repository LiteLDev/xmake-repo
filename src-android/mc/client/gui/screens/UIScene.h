#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class AbstractSceneProxy;
class CachedScenes;
class IClientInstance;
class ITTSEventManager;
class KeyboardManager;
class LayoutManager;
class MinecraftUIFrameUpdateContext;
class RectangleArea;
class ScreenContext;
class ScreenController;
class ScreenView;
class TaskGroup;
class UIControl;
class UIControlFactory;
class UIMeasureStrategy;
class VisualTree;
struct FrameRenderObject;
struct GamepadCursorData;
struct PointerLocationEventData;
struct ScreenSizeData;
struct TouchPadTouchEventData;
// clang-format on

class UIScene : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                    mClientInstance;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenView>>          mScreenView;
    ::ll::UntypedStorage<8, 48>                                    mOnInitializedCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AbstractSceneProxy>> mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    UIScene();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIScene();

    virtual void init(::ScreenSizeData const&);

    virtual void setSize(::ScreenSizeData const&);

    virtual void onSetKeyboardHeight(float);

    virtual void onInternetUpdate();

    virtual std::vector<RectangleArea> getInputAreas() const;

    virtual void onFocusGained();

    virtual void onFocusLost();

    virtual void terminate();

    virtual void onCreation();

    virtual void onLeave();

    virtual void onGameEventNotification(::ui::GameEventNotification);

    virtual void leaveScreen();

    virtual void preFrameTick();

    virtual void applyInput(float);

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&);

    virtual void render(::ScreenContext&, ::FrameRenderObject const&);

    virtual void handleInputModeChanged(::InputMode);

    virtual void handleButtonPress(uint, ::FocusImpact);

    virtual void handleButtonRelease(uint, ::FocusImpact);

    virtual void handleRawInputEvent(int, ::RawInputType, ::ButtonState, bool);

    virtual bool handlePointerLocation(::PointerLocationEventData const&, ::FocusImpact);

    virtual void handlePointerPressed(bool);

    virtual void handleDirection(::DirectionId, float, float, ::FocusImpact);

    virtual void handleTextChar(std::string const&, ::FocusImpact);

    virtual void handleTouchPadTouch(::TouchPadTouchEventData const&, ::FocusImpact);

    virtual void setTextboxText(std::string const&, ::TextboxTextUpdateReason);

    virtual void onKeyboardDismissed();

    virtual void handleLicenseChanged();

    virtual bool renderGameBehind() const;

    virtual bool absorbsInput() const;

    virtual bool closeOnPlayerHurt() const;

    virtual bool useCustomPocketToast() const;

    virtual bool isModal() const;

    virtual bool isShowingMenu() const;

    virtual bool shouldStealMouse() const;

    virtual bool screenIsNotFlushable() const;

    virtual bool alwaysAcceptsInput() const;

    virtual bool screenDrawsLast() const;

    virtual bool renderOnlyWhenTopMost() const;

    virtual bool lowFreqRendering() const;

    virtual bool ignoreAsTop() const;

    virtual bool shouldBeSkippedInAutomation() const;

    virtual int getWidth();

    virtual int getHeight();

    virtual void reload();

    virtual ::RectangleArea getAreaOfControlByName(std::string const&) const;

    virtual ::ui::SceneType getSceneType() const;

    virtual std::string getScreenName() const;

    virtual bool equalsScreenName(std::string_view) const;

    virtual bool containsScreenNameSubstring(std::string_view) const;

    virtual std::string getRawScreenName() const;

    virtual std::string getRoute() const;

    virtual std::string getScreenTelemetryName() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual int getScreenVersion() const;

    virtual bool getShouldSendEvents();

    virtual void setShouldSendEvents(bool);

    virtual void onDelete(::CachedScenes&, ::TaskGroup&);

    virtual bool isGamepadCursorEnabled() const;

    virtual bool isGamepadDeflectionModeEnabled() const;

    virtual ::glm::vec<2, float, (glm::qualifier)0> const& getGamepadCursorPosition() const;

    virtual void cleanInputComponents();

    virtual std::weak_ptr<AbstractSceneProxy> getProxy();

    virtual bool canBePushed() const;

    virtual bool canBePopped() const;

    virtual bool canBeTransitioned() const;

    virtual void onScreenExit(bool, bool, std::shared_ptr<AbstractScene>);

    virtual void onScreenEntrance(bool, bool);

    virtual bool isEntering() const;

    virtual bool isExiting() const;

    virtual void schedulePop();

    virtual bool isTerminating() const;

    virtual bool loadScreenImmediately() const;

    virtual void setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIScene(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::KeyboardManager&,
        std::shared_ptr<ScreenController>,
        std::unique_ptr<VisualTree>,
        std::shared_ptr<UIControlFactory>,
        ::UIMeasureStrategy&,
        std::unique_ptr<LayoutManager>,
        ::GamepadCursorData,
        std::weak_ptr<ITTSEventManager>
    );

    MCNAPI ::ScreenController& getController();

    MCNAPI std::shared_ptr<UIControl> getFocusedControl() const;

    MCNAPI ::ScreenView* getScreenView();

    MCNAPI bool hasVisualTree() const;

    MCNAPI void setInitialized();

    MCNAPI void setInitializedCallback(std::function<void()>);

    MCNAPI bool wasDirectionalButtonPressed() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::KeyboardManager&,
        std::shared_ptr<ScreenController>,
        std::unique_ptr<VisualTree>,
        std::shared_ptr<UIControlFactory>,
        ::UIMeasureStrategy&,
        std::unique_ptr<LayoutManager>,
        ::GamepadCursorData,
        std::weak_ptr<ITTSEventManager>
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
    MCNAPI void $init(::ScreenSizeData const&);

    MCNAPI void $setSize(::ScreenSizeData const&);

    MCNAPI void $onSetKeyboardHeight(float);

    MCNAPI void $onInternetUpdate();

    MCNAPI std::vector<RectangleArea> $getInputAreas() const;

    MCNAPI void $onFocusGained();

    MCNAPI void $onFocusLost();

    MCNAPI void $terminate();

    MCNAPI void $onCreation();

    MCNAPI void $onLeave();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $leaveScreen();

    MCNAPI void $preFrameTick();

    MCNAPI void $applyInput(float);

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext&);

    MCNAPI void $render(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI void $handleInputModeChanged(::InputMode);

    MCNAPI void $handleButtonPress(uint, ::FocusImpact);

    MCNAPI void $handleButtonRelease(uint, ::FocusImpact);

    MCNAPI void $handleRawInputEvent(int, ::RawInputType, ::ButtonState, bool);

    MCNAPI bool $handlePointerLocation(::PointerLocationEventData const&, ::FocusImpact);

    MCNAPI void $handlePointerPressed(bool);

    MCNAPI void $handleDirection(::DirectionId, float, float, ::FocusImpact);

    MCNAPI void $handleTextChar(std::string const&, ::FocusImpact);

    MCNAPI void $handleTouchPadTouch(::TouchPadTouchEventData const&, ::FocusImpact);

    MCNAPI void $setTextboxText(std::string const&, ::TextboxTextUpdateReason);

    MCNAPI void $onKeyboardDismissed();

    MCNAPI void $handleLicenseChanged();

    MCNAPI bool $renderGameBehind() const;

    MCNAPI bool $absorbsInput() const;

    MCNAPI bool $closeOnPlayerHurt() const;

    MCNAPI bool $useCustomPocketToast() const;

    MCNAPI bool $isModal() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $shouldStealMouse() const;

    MCNAPI bool $screenIsNotFlushable() const;

    MCNAPI bool $alwaysAcceptsInput() const;

    MCNAPI bool $screenDrawsLast() const;

    MCNAPI bool $renderOnlyWhenTopMost() const;

    MCNAPI bool $lowFreqRendering() const;

    MCNAPI bool $ignoreAsTop() const;

    MCNAPI bool $shouldBeSkippedInAutomation() const;

    MCNAPI int $getWidth();

    MCNAPI int $getHeight();

    MCNAPI void $reload();

    MCNAPI ::RectangleArea $getAreaOfControlByName(std::string const&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI std::string $getScreenName() const;

    MCNAPI bool $equalsScreenName(std::string_view) const;

    MCNAPI bool $containsScreenNameSubstring(std::string_view) const;

    MCNAPI std::string $getRawScreenName() const;

    MCNAPI std::string $getRoute() const;

    MCNAPI std::string $getScreenTelemetryName() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI bool $getShouldSendEvents();

    MCNAPI void $setShouldSendEvents(bool);

    MCNAPI void $onDelete(::CachedScenes&, ::TaskGroup&);

    MCNAPI bool $isGamepadCursorEnabled() const;

    MCNAPI bool $isGamepadDeflectionModeEnabled() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& $getGamepadCursorPosition() const;

    MCNAPI void $cleanInputComponents();

    MCNAPI std::weak_ptr<AbstractSceneProxy> $getProxy();

    MCNAPI bool $canBePushed() const;

    MCNAPI bool $canBePopped() const;

    MCNAPI bool $canBeTransitioned() const;

    MCNAPI void $onScreenExit(bool, bool, std::shared_ptr<AbstractScene>);

    MCNAPI void $onScreenEntrance(bool, bool);

    MCNAPI bool $isEntering() const;

    MCNAPI bool $isExiting() const;

    MCNAPI void $schedulePop();

    MCNAPI bool $isTerminating() const;

    MCNAPI bool $loadScreenImmediately() const;

    MCNAPI void $setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
