#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/AbstractScene.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class AbstractSceneProxy;
class AbstractScreenSetupCleanupStrategy;
class CachedScenes;
class MinecraftUIFrameUpdateContext;
class RectangleArea;
class ScreenContext;
class TaskGroup;
struct FrameRenderObject;
struct PointerLocationEventData;
struct ScreenSizeData;
struct TextCharEventData;
struct TouchPadTouchEventData;
// clang-format on

class BaseScreen : public ::AbstractScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                 mWidth;
    ::ll::TypedStorage<4, 4, int>                                                 mHeight;
    ::ll::TypedStorage<1, 1, bool>                                                mShouldSendEvents;
    ::ll::TypedStorage<1, 1, bool>                                                mWantsTextOnly;
    ::ll::TypedStorage<1, 1, bool>                                                mIsPopped;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AbstractScreenSetupCleanupStrategy>> mScreenSetupCleanup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScreen();

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

    virtual void tick(int, int);

    virtual void applyInput(float);

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&);

    virtual void preRenderUpdate(::ScreenContext&);

    virtual void prepareFrame(::ScreenContext&);

    virtual void render(::ScreenContext&, ::FrameRenderObject const&) = 0;

    virtual void postRenderUpdate(::ScreenContext&);

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

    virtual bool isEditorMode() const;

    virtual bool isShowingMenu() const;

    virtual bool shouldStealMouse() const;

    virtual bool screenIsNotFlushable() const;

    virtual bool alwaysAcceptsInput() const;

    virtual bool screenDrawsLast() const;

    virtual bool isPlayScreen() const;

    virtual bool renderOnlyWhenTopMost() const;

    virtual bool lowFreqRendering() const;

    virtual bool ignoreAsTop() const;

    virtual bool shouldBeSkippedInAutomation() const;

    virtual int getWidth();

    virtual int getHeight();

    virtual void reload();

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const;

    virtual ::ui::SceneType getSceneType() const;

    virtual std::string getRawScreenName() const;

    virtual std::string getRoute() const;

    virtual std::string getScreenTelemetryName() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual int getScreenVersion() const;

    virtual void processBufferedTextCharEvents(std::vector<TextCharEventData> const&);

    virtual bool getShouldSendEvents();

    virtual void setShouldSendEvents(bool);

    virtual bool getWantsTextOnly();

    virtual void setWantsTextOnly(bool);

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

    virtual bool forceUpdateActiveSceneStackWhenPushed() const;

    virtual bool hasFinishedLoading() const;

    virtual void sendScreenEvent(std::string const&, std::string const&);

    virtual void setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&);

    virtual ::Bedrock::NonOwnerPointer<const OreUI::Debug::ISceneDataProvider> getDebugDataProvider() const;

    virtual void setupForRendering(::ScreenContext&);

    virtual void cleanupForRendering(::ScreenContext&);

    virtual void setScreenSetupCleanup(std::unique_ptr<AbstractScreenSetupCleanupStrategy>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseScreen();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    drawRectangleArea(::ScreenContext&, ::RectangleArea const&, int, int, float, float, float, float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

    MCNAPI void $tick(int, int);

    MCNAPI void $applyInput(float);

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext&);

    MCNAPI void $preRenderUpdate(::ScreenContext&);

    MCNAPI void $prepareFrame(::ScreenContext&);

    MCNAPI void $postRenderUpdate(::ScreenContext&);

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

    MCNAPI bool $isEditorMode() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $shouldStealMouse() const;

    MCNAPI bool $screenIsNotFlushable() const;

    MCNAPI bool $alwaysAcceptsInput() const;

    MCNAPI bool $screenDrawsLast() const;

    MCNAPI bool $isPlayScreen() const;

    MCNAPI bool $renderOnlyWhenTopMost() const;

    MCNAPI bool $lowFreqRendering() const;

    MCNAPI bool $ignoreAsTop() const;

    MCNAPI bool $shouldBeSkippedInAutomation() const;

    MCNAPI int $getWidth();

    MCNAPI int $getHeight();

    MCNAPI void $reload();

    MCNAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI std::string $getRawScreenName() const;

    MCNAPI std::string $getRoute() const;

    MCNAPI std::string $getScreenTelemetryName() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI void $processBufferedTextCharEvents(std::vector<TextCharEventData> const&);

    MCNAPI bool $getShouldSendEvents();

    MCNAPI void $setShouldSendEvents(bool);

    MCNAPI bool $getWantsTextOnly();

    MCNAPI void $setWantsTextOnly(bool);

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

    MCNAPI bool $forceUpdateActiveSceneStackWhenPushed() const;

    MCNAPI bool $hasFinishedLoading() const;

    MCNAPI void $sendScreenEvent(std::string const&, std::string const&);

    MCNAPI void $setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&);

    MCNAPI ::Bedrock::NonOwnerPointer<const OreUI::Debug::ISceneDataProvider> $getDebugDataProvider() const;

    MCNAPI void $setupForRendering(::ScreenContext&);

    MCNAPI void $cleanupForRendering(::ScreenContext&);

    MCNAPI void $setScreenSetupCleanup(std::unique_ptr<AbstractScreenSetupCleanupStrategy>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
