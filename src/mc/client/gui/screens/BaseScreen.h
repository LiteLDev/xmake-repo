#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
namespace OreUI::Debug { class ISceneDataProvider; }
// clang-format on

class BaseScreen : public ::AbstractScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mWidth;
    ::ll::TypedStorage<4, 4, int>                                                     mHeight;
    ::ll::TypedStorage<1, 1, bool>                                                    mShouldSendEvents;
    ::ll::TypedStorage<1, 1, bool>                                                    mWantsTextOnly;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsPopped;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AbstractScreenSetupCleanupStrategy>> mScreenSetupCleanup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScreen() /*override*/ = default;

    virtual void setupForRendering(::ScreenContext& screenContext);

    virtual void cleanupForRendering(::ScreenContext& screenContext);

    virtual void setScreenSetupCleanup(::std::unique_ptr<::AbstractScreenSetupCleanupStrategy> screenSetupCleanup);

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void setSize(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void onSetKeyboardHeight(float keyboardHeight) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onFocusGained() /*override*/;

    virtual void onFocusLost() /*override*/;

    virtual void terminate() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void leaveScreen() /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual void tick(int nTick, int maxTick) /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext) /*override*/;

    virtual void applyInput(float a) /*override*/;

    virtual void preRenderUpdate(::ScreenContext& screenContext) /*override*/;

    virtual void prepareFrame(::ScreenContext& screenContext) /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) = 0;

    virtual void postRenderUpdate(::ScreenContext& screenContext) /*override*/;

    virtual void handleInputModeChanged(::InputMode inputMode) /*override*/;

    virtual void handleButtonPress(uint buttonId, ::FocusImpact focusImpact) /*override*/;

    virtual void handleButtonRelease(uint buttonId, ::FocusImpact focusImpact) /*override*/;

    virtual void
    handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping) /*override*/;

    virtual bool handlePointerLocation(
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    ) /*override*/;

    virtual void handlePointerPressed(bool pressed) /*override*/;

    virtual void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact) /*override*/;

    virtual void handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact) /*override*/;

    virtual void
    handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact) /*override*/;

    virtual void setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason) /*override*/;

    virtual void onKeyboardDismissed() /*override*/;

    virtual void handleLicenseChanged() /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual bool absorbsInput() const /*override*/;

    virtual bool closeOnPlayerHurt() const /*override*/;

    virtual bool useCustomPocketToast() const /*override*/;

    virtual bool isModal() const /*override*/;

    virtual bool isEditorMode() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool shouldStealMouse() const /*override*/;

    virtual bool screenIsNotFlushable() const /*override*/;

    virtual bool alwaysAcceptsInput() const /*override*/;

    virtual bool screenDrawsLast() const /*override*/;

    virtual bool isPlayScreen() const /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool lowFreqRendering() const /*override*/;

    virtual bool ignoreAsTop() const /*override*/;

    virtual bool shouldBeSkippedInAutomation() const /*override*/;

    virtual ::std::vector<::RectangleArea> getInputAreas() const /*override*/;

    virtual int getWidth() /*override*/;

    virtual int getHeight() /*override*/;

    virtual void reload() /*override*/;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string getRawScreenName() const /*override*/;

    virtual ::std::string getRoute() const /*override*/;

    virtual ::std::string getScreenTelemetryName() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual int getScreenVersion() const /*override*/;

    virtual void processBufferedTextCharEvents(::std::vector<::TextCharEventData> const& bufferedEvents) /*override*/;

    virtual bool getShouldSendEvents() /*override*/;

    virtual void setShouldSendEvents(bool sendEvents) /*override*/;

    virtual bool getWantsTextOnly() /*override*/;

    virtual void setWantsTextOnly(bool textOnly) /*override*/;

    virtual void onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup) /*override*/;

    virtual bool isGamepadCursorEnabled() const /*override*/;

    virtual bool isGamepadDeflectionModeEnabled() const /*override*/;

    virtual ::glm::vec2 const& getGamepadCursorPosition() const /*override*/;

    virtual void cleanInputComponents() /*override*/;

    virtual ::std::weak_ptr<::AbstractSceneProxy> getProxy() /*override*/;

    virtual bool canBePushed() const /*override*/;

    virtual bool canBePopped() const /*override*/;

    virtual bool canBeTransitioned() const /*override*/;

    virtual void
    onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene) /*override*/;

    virtual void onScreenEntrance(bool isRevisiting, bool doScreenTransitions) /*override*/;

    virtual bool isEntering() const /*override*/;

    virtual bool isExiting() const /*override*/;

    virtual void schedulePop() /*override*/;

    virtual bool isTerminating() const /*override*/;

    virtual bool loadScreenImmediately() const /*override*/;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const /*override*/;

    virtual bool hasFinishedLoading() const /*override*/;

    virtual void sendScreenEvent(::std::string const&, ::std::string const&) /*override*/;

    virtual void setScreenState(
        ::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& routeQueryParameters
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Debug::ISceneDataProvider const> getDebugDataProvider() const
        /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void drawRectangleArea(
        ::ScreenContext&       screenContext,
        ::RectangleArea const& a,
        int                    ux,
        int                    vy,
        float                  uvWidth,
        float                  uvHeight,
        float                  us,
        float                  vs,
        float                  px,
        float                  py
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupForRendering(::ScreenContext& screenContext);

    MCAPI void $cleanupForRendering(::ScreenContext& screenContext);

    MCAPI void $setScreenSetupCleanup(::std::unique_ptr<::AbstractScreenSetupCleanupStrategy> screenSetupCleanup);

    MCFOLD void $init(::ScreenSizeData const& screenSizeData);

    MCAPI void $setSize(::ScreenSizeData const& screenSizeData);

    MCFOLD void $onSetKeyboardHeight(float keyboardHeight);

    MCFOLD void $onInternetUpdate();

    MCFOLD void $onFocusGained();

    MCFOLD void $onFocusLost();

    MCFOLD void $terminate();

    MCFOLD void $onCreation();

    MCFOLD void $onLeave();

    MCFOLD void $onGameEventNotification(::ui::GameEventNotification notification);

    MCFOLD void $leaveScreen();

    MCFOLD void $preFrameTick();

    MCFOLD void $tick(int nTick, int maxTick);

    MCFOLD void $frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext);

    MCFOLD void $applyInput(float a);

    MCFOLD void $preRenderUpdate(::ScreenContext& screenContext);

    MCFOLD void $prepareFrame(::ScreenContext& screenContext);

    MCFOLD void $postRenderUpdate(::ScreenContext& screenContext);

    MCFOLD void $handleInputModeChanged(::InputMode inputMode);

    MCFOLD void $handleButtonPress(uint buttonId, ::FocusImpact focusImpact);

    MCFOLD void $handleButtonRelease(uint buttonId, ::FocusImpact focusImpact);

    MCFOLD void $handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping);

    MCFOLD bool
    $handlePointerLocation(::PointerLocationEventData const& pointerLocationData, ::FocusImpact focusImpact);

    MCFOLD void $handlePointerPressed(bool pressed);

    MCFOLD void $handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact);

    MCFOLD void $handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact);

    MCFOLD void $handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact);

    MCFOLD void $setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason);

    MCFOLD void $onKeyboardDismissed();

    MCFOLD void $handleLicenseChanged();

    MCFOLD bool $renderGameBehind() const;

    MCFOLD bool $absorbsInput() const;

    MCFOLD bool $closeOnPlayerHurt() const;

    MCFOLD bool $useCustomPocketToast() const;

    MCFOLD bool $isModal() const;

    MCFOLD bool $isEditorMode() const;

    MCFOLD bool $isShowingMenu() const;

    MCFOLD bool $shouldStealMouse() const;

    MCFOLD bool $screenIsNotFlushable() const;

    MCFOLD bool $alwaysAcceptsInput() const;

    MCFOLD bool $screenDrawsLast() const;

    MCFOLD bool $isPlayScreen() const;

    MCFOLD bool $renderOnlyWhenTopMost() const;

    MCFOLD bool $lowFreqRendering() const;

    MCFOLD bool $ignoreAsTop() const;

    MCFOLD bool $shouldBeSkippedInAutomation() const;

    MCFOLD ::std::vector<::RectangleArea> $getInputAreas() const;

    MCFOLD int $getWidth();

    MCAPI int $getHeight();

    MCFOLD void $reload();

    MCAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD ::std::string $getRawScreenName() const;

    MCAPI ::std::string $getRoute() const;

    MCFOLD ::std::string $getScreenTelemetryName() const;

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCFOLD int $getScreenVersion() const;

    MCFOLD void $processBufferedTextCharEvents(::std::vector<::TextCharEventData> const& bufferedEvents);

    MCFOLD bool $getShouldSendEvents();

    MCAPI void $setShouldSendEvents(bool sendEvents);

    MCFOLD bool $getWantsTextOnly();

    MCAPI void $setWantsTextOnly(bool textOnly);

    MCFOLD void $onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup);

    MCFOLD bool $isGamepadCursorEnabled() const;

    MCFOLD bool $isGamepadDeflectionModeEnabled() const;

    MCAPI ::glm::vec2 const& $getGamepadCursorPosition() const;

    MCFOLD void $cleanInputComponents();

    MCFOLD ::std::weak_ptr<::AbstractSceneProxy> $getProxy();

    MCFOLD bool $canBePushed() const;

    MCFOLD bool $canBePopped() const;

    MCFOLD bool $canBeTransitioned() const;

    MCAPI void $onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene);

    MCFOLD void $onScreenEntrance(bool isRevisiting, bool doScreenTransitions);

    MCFOLD bool $isEntering() const;

    MCFOLD bool $isExiting() const;

    MCAPI void $schedulePop();

    MCAPI bool $isTerminating() const;

    MCFOLD bool $loadScreenImmediately() const;

    MCFOLD bool $forceUpdateActiveSceneStackWhenPushed() const;

    MCFOLD bool $hasFinishedLoading() const;

    MCFOLD void $sendScreenEvent(::std::string const&, ::std::string const&);

    MCFOLD void
    $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& routeQueryParameters);

    MCFOLD ::Bedrock::NonOwnerPointer<::OreUI::Debug::ISceneDataProvider const> $getDebugDataProvider() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BaseScreen {};
#endif // @header-generator platform
#endif // @header-generator platform
