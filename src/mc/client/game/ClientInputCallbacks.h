#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class BuildActionIntention;
class HitResult;
class IClientInstance;
class IMinecraftGame;
struct ClearPointerLocationWithIdEventData;
struct ControlOptionEventData;
struct NumberOfEnabledControlOptionsEventData;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
struct TouchPadTouchEventData;
// clang-format on

class ClientInputCallbacks {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void destroyVibrate(::IClientInstance&, int);

    MCNAPI static void handleAttackActionButtonRelease(::IClientInstance&);

    MCNAPI static void handleBlockSelectButtonRelease(::IClientInstance&);

    MCNAPI static void handleBlockSelectButtonReleaseWithData(::IClientInstance&);

    MCNAPI static bool
    handleBuildAction(::IClientInstance&, ::BuildActionIntention&, ::HitResult const&, ::HitResult const&);

    MCNAPI static void handleBuildActionButtonRelease(::IClientInstance&);

    MCNAPI static void handleBuildOrAttackButtonPress(::IClientInstance&);

    MCNAPI static void handleBuildOrAttackOrBlockSelectButtonPress(::IClientInstance&);

    MCNAPI static void handleBuildOrInteractButtonPress(::IClientInstance&);

    MCNAPI static void handleChangeUserRequest(::IMinecraftGame*, int, bool);

    MCNAPI static void handleChatButtonRelease(::IClientInstance&);

    MCNAPI static void
    handleClearPointerLocationWithId(::IClientInstance&, ::ClearPointerLocationWithIdEventData const&);

    MCNAPI static void handleClearPointerLocations(::IClientInstance&);

    MCNAPI static void handleCodeBuilderButtonRelease(::IClientInstance&);

    MCNAPI static void handleCommandMacroPress(::IClientInstance&, ::OptionID);

    MCNAPI static void handleConsoleButtonRelease(::IClientInstance&);

    MCNAPI static void handleContentLogHistoryOpen(::IClientInstance&);

    MCNAPI static void handleControlOption(::IClientInstance&, ::ControlOptionEventData const&);

    MCNAPI static void handleControllerConnectionStateChange(::IClientInstance&, bool, int);

    MCNAPI static void handleCopyCurrentButtonPress(::IClientInstance&);

    MCNAPI static void handleCopyFacingButtonPress(::IClientInstance&);

    MCNAPI static void handleDescribeBlockButtonRelease(::IClientInstance&);

    MCNAPI static void handleDestoryOrAttackButtonPress(::IClientInstance&);

    MCNAPI static void handleDestroyOrInteractButtonPress(::IClientInstance&);

    MCNAPI static void handleDirection(::IClientInstance&, ::DirectionId, float, float, ::FocusImpact);

    MCNAPI static void handleDismountButtonPress(::IClientInstance&);

    MCNAPI static void handleDropAllButtonPress(::IClientInstance&);

    MCNAPI static void handleDropButtonPress(::IClientInstance&);

    MCNAPI static void handleEmoteButtonEntered(::IClientInstance&);

    MCNAPI static void handleEmoteButtonHeld(::IClientInstance&);

    MCNAPI static void handleEmoteButtonPress(::IClientInstance&);

    MCNAPI static void handleEmoteSlotButtonPress(::IClientInstance&, int);

    MCNAPI static bool handleImmersiveReaderButtonRelease(::IClientInstance&);

    MCNAPI static void handleInputModeChanged(::IClientInstance&, ::InputMode);

    MCNAPI static void handleInteractButtonPress(::IClientInstance&);

    MCNAPI static void handleInventoryButtonPress(::IClientInstance&, ::CraftingType);

    MCNAPI static void handleInventoryMoveButtonPress(::IClientInstance&, int);

    MCNAPI static void handleMenuButtonPress(::IClientInstance&, uint, ::FocusImpact);

    MCNAPI static void handleMenuButtonRelease(::IClientInstance&, uint, ::FocusImpact);

    MCNAPI static void handleMobEffectsAndToastInteractButtonRelease(::IClientInstance&);

    MCNAPI static void handleMobEffectsButtonPress(::IClientInstance&);

    MCNAPI static void
    handleNumberOfEnabledControlOptions(::IClientInstance&, ::NumberOfEnabledControlOptionsEventData const&);

    MCNAPI static void handleOpenSocialDrawer(::IClientInstance&);

    MCNAPI static void handleOverlappingControls(::IClientInstance&, ::OverlappingControlsEventData const&);

    MCNAPI static void handlePaddleButtonPress(::IClientInstance&, ::SharedTypes::Side);

    MCNAPI static void handlePaddleButtonRelease(::IClientInstance&, ::SharedTypes::Side);

    MCNAPI static void handlePauseButtonPress(::IClientInstance&);

    MCNAPI static bool handlePointerLocation(::IClientInstance&, ::PointerLocationEventData const&, ::FocusImpact);

    MCNAPI static void handlePointerLocationWithId(::IClientInstance&, ::PointerLocationWithIdEventData const&);

    MCNAPI static void handlePointerPressedButtonPress(::IClientInstance&);

    MCNAPI static void handlePointerPressedButtonRelease(::IClientInstance&);

    MCNAPI static void handlePotentialOverlappingControls(::IClientInstance&);

    MCNAPI static void handleReloadUIDefinitions(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);

    MCNAPI static void handleRenderDebugButtonPress(::IClientInstance&, int);

    MCNAPI static void handleScreenshotButtonPress(::IClientInstance&);

    MCNAPI static void handleSetSpawnPositionButtonPress(::IClientInstance&);

    MCNAPI static void handleSlotSelectButtonPress(::IClientInstance&, int);

    MCNAPI static void handleSocialDrawerMobEffectsAndToastInteractButtonRelease(::IClientInstance&);

    MCNAPI static void handleTextChar(::IClientInstance&, std::string const&, ::FocusImpact);

    MCNAPI static void handleToastInteractButtonRelease(::IClientInstance&);

    MCNAPI static void handleToggleChatTextToSpeechButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleControlTipsButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleEnableFocusDebugButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleEnableNewScreensDebugButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleFullscreenButtonPress(::IClientInstance&);

    MCNAPI static void handleTogglePerspectiveButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleSimulateTouchButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleUIProfile(::IClientInstance&);

    MCNAPI static void handleTouchPadTouch(::IClientInstance&, ::TouchPadTouchEventData const&, ::FocusImpact);

    MCNAPI static void handleUIScalingRuleChange(::IClientInstance&);

    MCNAPI static void splitVibrate(::IClientInstance&, int);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class BuildActionIntention;
class HitResult;
class IClientInstance;
class IMinecraftGame;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
// clang-format on

class ClientInputCallbacks {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void destroyVibrate(::IClientInstance& client, int milliSeconds);

    MCAPI static bool handleBuildAction(
        ::IClientInstance&      client,
        ::BuildActionIntention& bai,
        ::HitResult const&      solidHitResult,
        ::HitResult const&      liquidHitResult
    );

    MCAPI static void handleBuildOrAttackOrBlockSelectButtonPress(::IClientInstance& client);

    MCAPI static void
    handleChangeUserRequest(::IMinecraftGame* mg, int controllerId, bool restrictToControllerIdChange);

    MCAPI static void handleChatButtonRelease(::IClientInstance& client);

    MCAPI static void handleCodeBuilderButtonRelease(::IClientInstance& client);

    MCAPI static void handleCommandMacroPress(::IClientInstance& client, ::OptionID commandOption);

    MCAPI static void handleConsoleButtonRelease(::IClientInstance& client);

    MCAPI static void handleControllerConnectionStateChange(::IClientInstance& client, bool controllerIsConnected, int);

    MCAPI static void handleCopyCurrentButtonPress(::IClientInstance& client);

    MCAPI static void handleCopyFacingButtonPress(::IClientInstance& client);

    MCAPI static void handleDismountButtonPress(::IClientInstance& client);

    MCAPI static void handleDropAllButtonPress(::IClientInstance& client);

    MCAPI static void handleDropButtonPress(::IClientInstance& client);

    MCAPI static void handleEmoteButtonEntered(::IClientInstance& client);

    MCAPI static void handleEmoteButtonHeld(::IClientInstance& client);

    MCAPI static void handleEmoteButtonPress(::IClientInstance& client);

    MCAPI static void handleEmoteSlotButtonPress(::IClientInstance& client, int slot);

    MCAPI static bool handleImmersiveReaderButtonRelease(::IClientInstance& client);

    MCAPI static void handleInputModeChanged(::IClientInstance& client, ::InputMode inputMode);

    MCAPI static void handleInventoryButtonPress(::IClientInstance& client, ::CraftingType craftType);

    MCAPI static void handleInventoryMoveButtonPress(::IClientInstance& client, int offset);

    MCAPI static void handleMobEffectsButtonPress(::IClientInstance& client);

    MCAPI static void handleOpenSocialDrawer(::IClientInstance& client);

    MCAPI static void handleOverlappingControls(
        ::IClientInstance&                    client,
        ::OverlappingControlsEventData const& overlappingControlsEventData
    );

    MCAPI static void handlePauseButtonPress(::IClientInstance& client);

    MCAPI static bool handlePointerLocation(
        ::IClientInstance&                client,
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    );

    MCAPI static void
    handlePointerLocationWithId(::IClientInstance& client, ::PointerLocationWithIdEventData const& pointerLocationData);

    MCAPI static void handlePointerPressedButtonPress(::IClientInstance& client);

    MCAPI static void handlePointerPressedButtonRelease(::IClientInstance& client);

    MCAPI static void handlePotentialOverlappingControls(::IClientInstance& client);

    MCAPI static void handleReloadUIDefinitions(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI static void handleScreenshotButtonPress(::IClientInstance& client);

    MCAPI static void handleSlotSelectButtonPress(::IClientInstance& client, int slot);

    MCAPI static void handleSocialDrawerMobEffectsAndToastInteractButtonRelease(::IClientInstance& client);

    MCAPI static void
    handleTextChar(::IClientInstance& client, ::std::string const& utf8text, ::FocusImpact focusImpact);

    MCAPI static void handleToggleChatTextToSpeechButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleControlTipsButtonPress(::IClientInstance& client);

    MCAPI static void handleTogglePerspectiveButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleSimulateTouchButtonPress(::IClientInstance&);

    MCAPI static void handleToggleUIProfile(::IClientInstance& client);

    MCAPI static void handleUIScalingRuleChange(::IClientInstance&);

    MCAPI static void splitVibrate(::IClientInstance& client, int milliSeconds);
    // NOLINTEND
};
#else // @header-generator platform
class ClientInputCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
