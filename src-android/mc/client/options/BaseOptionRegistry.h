#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/AutoUpdateMode.h"
#include "mc/client/options/DebugHudOptions.h"
#include "mc/client/options/IOptionRegistry.h"
#include "mc/client/options/ReadWriteOptionRegistry.h"
#include "mc/client/options/RealmsEnvironment.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/options/XboxSandboxEnvironment.h"
#include "mc/client/store/DisplayLoggedErrorType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/TargetRenderAPI.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"

// auto generated forward declare list
// clang-format off
class ConstOptionIterator;
class Option;
// clang-format on

class BaseOptionRegistry : public ::IOptionRegistry,
                           public ::std::enable_shared_from_this<IOptionRegistry>,
                           public ::ReadWriteOptionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IOptionRegistry>> mPerMachineOptionsSource;
    ::ll::TypedStorage<1, 1, bool>                            mIsDevOptionsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseOptionRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseOptionRegistry();

    virtual ::gsl::not_null<const Option*> get(::OptionID) const;

    virtual bool getDevRenderBoundingBoxes() const;

    virtual bool getDevRenderPaths() const;

    virtual bool getDevRenderMobInfoState() const;

    virtual bool getDevRenderSchedulerInfo() const;

    virtual bool getDevRenderGoalState() const;

    virtual bool getDevDeepDarkDebugRender() const;

    virtual ushort getDevGameEventRetentionTicks() const;

    virtual ::GraphicsMode getGraphicsMode() const;

    virtual ::UIProfile getUIProfile() const;

    virtual std::shared_ptr<const IOptionRegistry> sharedFromThis() const;

    virtual std::shared_ptr<IOptionRegistry> sharedFromThis();

    virtual ::Option& _registerOption(std::unique_ptr<Option>);

    virtual bool isValidOption(::OptionID) const;

    virtual ::gsl::not_null<Option*> get(::OptionID);

    virtual std::optional<const Option*> getIfValid(::OptionID) const;

    virtual std::optional<Option*> getIfValid(::OptionID);

    virtual ::ConstOptionIterator begin() const;

    virtual ::ConstOptionIterator end() const;

    virtual bool consumeDevOptionsDirty();

    virtual void dumpOptionsToLogFile() const;

    virtual void updateInputMode(::InputMode);

    virtual void setMusicVolume(float);

    virtual float getMusicVolume() const;

    virtual void setSoundVolume(float);

    virtual float getSoundVolume() const;

    virtual float getChatMessageDuration() const;

    virtual float getToastNotificationDuration() const;

    virtual void setSensitivity(float, ::InputMode);

    virtual float getSensitivity(::InputMode) const;

    virtual void setSpyglassDamping(float, ::InputMode);

    virtual float getSpyglassDamping(::InputMode) const;

    virtual void setDwellBeforeDrag(float);

    virtual float getDwellBeforeDrag() const;

    virtual float getGameSensitivity(::InputMode) const;

    virtual bool getInvertYMouse(::InputMode) const;

    virtual float getParticleViewDistance() const;

    virtual bool getBobView() const;

    virtual bool getHideSkyFlash() const;

    virtual bool getIsDitheringEnabledBlocks() const;

    virtual bool getIsDitheringEnabledMobs() const;

    virtual void setResetPlayerAlignment(bool);

    virtual bool getResetPlayerAlignment() const;

    virtual ::TargetRenderAPI getTargetRenderAPI() const;

    virtual bool getTransparentLeaves() const;

    virtual bool getFancyBubbles() const;

    virtual bool getSmoothLighting() const;

    virtual bool getGuiAccessibilityScaling() const;

    virtual bool getUseMouseForDigging() const;

    virtual bool isLeftHanded() const;

    virtual bool isHotbarOnlyTouch() const;

    virtual bool getDestroyVibration(::InputMode) const;

    virtual bool getSplitVibration(::InputMode) const;

    virtual bool getAutoJump(::InputMode) const;

    virtual void setFullscreen(bool);

    virtual bool getFullscreen() const;

    virtual void toggleFullscreen();

    virtual void setDifficulty(int);

    virtual void setHideGUI(bool);

    virtual bool getHideHud() const;

    virtual bool getHideHand() const;

    virtual void setHideToolTips(bool);

    virtual bool getHideToolTips() const;

    virtual void setHidePaperDoll(bool);

    virtual bool getHidePaperDoll() const;

    virtual void setIngamePlayerNames(bool);

    virtual bool getIngamePlayerNames() const;

    virtual void setSplitscreenIngamePlayerNames(bool);

    virtual bool getSplitscreenIngamePlayerNames() const;

    virtual void setInterfaceOpacity(float);

    virtual float getInterfaceOpacity() const;

    virtual void setSplitscreenInterfaceOpacity(float);

    virtual float getSplitscreenInterfaceOpacity() const;

    virtual void setShowAutoSaveIcon(bool);

    virtual bool getShowAutoSaveIcon() const;

    virtual void setSplitscreenDirection(int);

    virtual ::SplitScreenDirection getSplitscreenDirection() const;

    virtual void setHideScreens(bool);

    virtual bool getHideScreens() const;

    virtual void setHideItemInHand(bool);

    virtual bool getHideItemInHand() const;

    virtual bool getScreenAnimations() const;

    virtual float getPanoramaSpeed() const;

    virtual int getPlayerViewPerspective() const;

    virtual void setForceUseUnsortedPolys(bool);

    virtual bool getForceUseUnsortedPolys() const;

    virtual void setRenderDebug(::DebugHudOptions);

    virtual ::DebugHudOptions getRenderDebug() const;

    virtual bool getRemoteImguiEnabled() const;

    virtual void setRemoteImguiEnabled(bool);

    virtual float getGamma() const;

    virtual void setMSAA(int);

    virtual void setTexelAA(bool);

    virtual void setFixedCamera(bool);

    virtual bool getFixedCamera() const;

    virtual void setSkinId(std::string const&);

    virtual std::string const& getSkinId() const;

    virtual bool getFovToggle() const;

    virtual void setServerVisible(bool);

    virtual bool getServerVisible() const;

    virtual void setSplitControls(bool);

    virtual bool getSplitControls() const;

    virtual bool getSwapJumpAndSneak() const;

    virtual bool getFancySkies() const;

    virtual void setRenderClouds(bool);

    virtual bool getRenderClouds() const;

    virtual bool getDevAutoLoadLevel() const;

    virtual bool getDevAssertionsDebugBreak() const;

    virtual bool getDevAssertionsShowDialog() const;

    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType) const;

    virtual bool getDevShowDisplayLoggedError() const;

    virtual void setDevShowDevConsoleButton(bool);

    virtual bool getDevShowDevConsoleButton() const;

    virtual bool getDevIgnoreUserInput() const;

    virtual bool getDevDisplayTreatmentPanel() const;

    virtual void setDevDisplayTreatmentPanel(bool);

    virtual void setDevShowMinecraftTCUIReplacement(bool);

    virtual bool getDevShowMinecraftTCUIReplacement() const;

    virtual bool getDevCreateRealmWithoutPurchase() const;

    virtual bool getDevDisableConnectedStoragePush() const;

    virtual bool getDevDisableConnectedStoragePull() const;

    virtual void setDevFindMobs(bool);

    virtual bool getDevFindMobs() const;

    virtual void setDevRenderBoundingBoxes(bool);

    virtual void setDevRenderPaths(bool);

    virtual void setDevRenderMobInfoState(bool);

    virtual void setDevRenderGoalState(bool);

    virtual void setDevRenderSchedulerInfo(bool);

    virtual void setDevRenderCoordinateSystems(bool);

    virtual bool getDevRenderCoordinateSystems() const;

    virtual bool getDevResetClientId() const;

    virtual void setDevLogFlushImmediate(bool);

    virtual bool getDevLogFlushImmediate() const;

    virtual void setDevLogTimestamp(bool);

    virtual bool getDevLogTimestamp() const;

    virtual void setDevLogTrace(bool);

    virtual bool getDevLogTrace() const;

    virtual void setDevLogArea(bool);

    virtual bool getDevLogArea() const;

    virtual void setDevLogPriority(bool);

    virtual bool getDevLogPriority() const;

    virtual void setDevLogThread(bool);

    virtual bool getDevLogThread() const;

    virtual void setDevLogAppend(bool);

    virtual bool getDevLogAppend() const;

    virtual void setDevLogProcessId(bool);

    virtual bool getDevLogProcessId() const;

    virtual void setDevLogThreadId(bool);

    virtual bool getDevLogThreadId() const;

    virtual void setDevLogMessageId(bool);

    virtual bool getDevLogMessageId() const;

    virtual void setDevLogSilentLogging(bool);

    virtual bool getDevLogSilentLogging() const;

    virtual void setDevLogPriorityFilter(std::string const&);

    virtual std::string const& getDevLogPriorityFilter() const;

    virtual void setDevLogAreaFilter(std::string const&);

    virtual std::string const& getDevLogAreaFilter() const;

    virtual void setDevGameEventRetentionTicks(ushort);

    virtual void setDevDeepDarkDebugRender(bool);

    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory) const;

    virtual bool getDevEnableProfilerOutput();

    virtual bool getDevAddUsersSilently() const;

    virtual int getDevBenchmarkModeTime();

    virtual bool getDevDisableClientBlobCache() const;

    virtual bool getDevClientBlobCacheOnLocalServer() const;

    virtual void setLogFlushDelay(int);

    virtual int getLogFlushDelay();

    virtual int getAutomationParallelSlices() const;

    virtual int getAutomationParallelCurrentSlice() const;

    virtual bool getIsAutomationRun() const;

    virtual bool getShouldQuitAppAfterTesting() const;

    virtual bool shouldUploadTestArtifacts() const;

    virtual bool hasAutomationTestRunTimedOut() const;

    virtual bool hasAutomationTestRunReachedCrashLimit() const;

    virtual bool shouldAppendDebugLogTimestamp() const;

    virtual std::string getAutomationServerIp() const;

    virtual std::string getAutomationServerPort() const;

    virtual std::string getAutomationArtifactUploadSas() const;

    virtual std::string getAutomationArtifactUploadUrl() const;

    virtual std::string getAutomationRelativeBlobpath() const;

    virtual std::string getAutomationFunctionalTestTags() const;

    virtual std::string getAutomationServerTestTags() const;

    virtual std::string getAutomationUnitTestTags() const;

    virtual std::string getAutomationFunctionalBrokenTestTags() const;

    virtual std::string getAutomationServerBrokenTestTags() const;

    virtual std::string getAutomationUnitBrokenTestTags() const;

    virtual std::string getAutomationTestBuildID() const;

    virtual std::string getAutomationUploadToken() const;

    virtual std::string getAutomationEnabledFeatures() const;

    virtual std::string getAutomationEnabledExperiments() const;

    virtual bool getAutomationShouldGroupServerTests() const;

    virtual bool getAutomationUnrandomTestsEnabled() const;

    virtual bool getAutomationRunEntireServerTestGroup() const;

    virtual bool getAutomationRunServerTestAfterEachTest() const;

    virtual std::string const& getTestBranchName() const;

    virtual bool getFunctionalTestBlockInput() const;

    virtual bool shouldBlockUserInput() const;

    virtual bool hasSetSafeZone() const;

    virtual bool getAutomationDisableTreatmentPackDownloads() const;

    virtual bool getAutomationProfilerCaptureEnabled() const;

    virtual bool getAutomationProfilerFlipEnabled() const;

    virtual int getAutomationRepeatCount() const;

    virtual int getAutomationSoakTestRunDurationMinutes() const;

    virtual bool getAutomationRerunFailuresOnly() const;

    virtual int getAutomationUnitPerTestcaseTimeout() const;

    virtual int getAutomationFunctionalPerTestcaseTimeout() const;

    virtual int getAutomationServerPerTestcaseTimeout() const;

    virtual void setAutomationFunctionalBrokenTestTags(std::string const&);

    virtual void setAutomationUnitBrokenTestTags(std::string const&);

    virtual void setAutomationUploadToken(std::string const&);

    virtual bool getDevAchievementsAlwaysEnabled();

    virtual bool shouldServerTestsLogWorlds() const;

    virtual bool shouldServerTestsAssertOnLevelDiff() const;

    virtual std::string getAutomationMultiplayerSessionName() const;

    virtual int getAutomationMultiplayerDeviceIndex() const;

    virtual std::vector<std::string> getAutomationMultiplayerUserAccounts() const;

    virtual ::DevConnectionQuality getDevConnectionQuality() const;

    virtual int getDevRenderAttachPos() const;

    virtual void setMultiPlayerGame(bool);

    virtual bool getMultiPlayerGame() const;

    virtual void setXboxLiveVisible(bool);

    virtual bool wasLoggedInLastSession();

    virtual void setHasEverLoggedIntoXbl(bool);

    virtual bool getHasEverLoggedIntoXbl() const;

    virtual void setHasShownFirstLaunchWelcomeModal(bool);

    virtual bool getHasShownFirstLaunchWelcomeModal() const;

    virtual void setHasShownFirstSocialWelcomeModal(bool);

    virtual bool getHasShownFirstSocialWelcomeModal() const;

    virtual void setDoNotShowFriendsListFTUE(bool);

    virtual bool getDoNotShowFriendsListFTUE() const;

    virtual void setDoNotShowPartyTabFTUE(bool);

    virtual bool getDoNotShowPartyTabFTUE() const;

    virtual void setHasShownBannedModalAtStartup(bool);

    virtual bool getHasShownBannedModalAtStartup() const;

    virtual void setAcknowledgedAutoSave(bool);

    virtual bool getAcknowledgedAutoSave() const;

    virtual void setRealmsInviteShowFriendsOption(bool);

    virtual bool getRealmsInviteShowFriendsOption() const;

    virtual void setNumberOfOwnedRealms(int);

    virtual int getNumberOfOwnedRealms() const;

    virtual void setNumberOfFriendsRealms(int);

    virtual int getNumberOfFriendsRealms() const;

    virtual void setCreateRealmUpsellCount(int);

    virtual int getCreateRealmUpsellCount() const;

    virtual void setSaveAndQuitCount(int);

    virtual int getSaveAndQuitCount() const;

    virtual void setIsRatingsPromptShown(bool);

    virtual bool getIsRatingsPromptShown() const;

    virtual void setShowRealmsTrialButtonFromPlayScreen(bool);

    virtual bool getShowRealmsTrialButtonFromPlayScreen() const;

    virtual ::AutoUpdateMode getAutoUpdateMode() const;

    virtual void setCanUseCellularData(bool);

    virtual bool getCanUseCellularData() const;

    virtual void setRequireWebsocketEncryption(bool);

    virtual bool getRequireWebsocketEncryption() const;

    virtual void setWebsocketsEnabled(bool);

    virtual bool getWebsocketsEnabled() const;

    virtual void setUseIPv6Only(bool);

    virtual bool getUseIPv6Only() const;

    virtual void setUseRetailXboxSandbox(bool const);

    virtual bool getUseRetailXboxSandbox() const;

    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment);

    virtual std::string const& getXboxLiveSandbox() const;

    virtual void setRealmsEnvironment(::RealmsEnvironment);

    virtual ::RealmsEnvironment getRealmsEnvironment() const;

    virtual void setRealmsEndpoint(std::string const&);

    virtual std::string const& getRealmsEndpoint() const;

    virtual std::string const& getRealmsV2Endpoint() const;

    virtual void setRealmsEndpointPayment(std::string const&);

    virtual std::string const& getRealmsEndpointPayment() const;

    virtual std::string const& getRealmsV2EndpointPayment() const;

    virtual void setRealmsRelyingParty(std::string const&);

    virtual std::string const& getRealmsRelyingParty() const;

    virtual void setRealmsRelyingPartyPayment(std::string const&);

    virtual std::string const& getRealmsRelyingPartyPayment() const;

    virtual void setStoreHasPurchasedCoins(bool);

    virtual bool getStoreHasPurchasedCoins() const;

    virtual void setShowUnfulfilledPurchaseModal(bool);

    virtual bool getShowUnfulfilledPurchaseModal() const;

    virtual void setSwitchCoinDebug(bool);

    virtual bool getSwitchCoinDebug() const;

    virtual void setEduHasLoggedIn(bool);

    virtual bool getEduHasLoggedIn() const;

    virtual void setShownPlatformNetworkConnectConfirmation(bool);

    virtual bool getShownPlatformNetworkConnectConfirmation() const;

    virtual void setShownPlatformPremiumUpsell(bool);

    virtual bool getShownPlatformPremiumUpsell() const;

    virtual void setAppLaunchedCount(int);

    virtual int getAppLaunchedCount() const;

    virtual void setEcoMode(bool);

    virtual bool getEcoMode() const;

    virtual void setEduCloudBackupToggle(bool);

    virtual bool getEduCloudBackupToggle() const;

    virtual void setUseFontOverrides(bool);

    virtual bool getUseFontOverrides() const;

    virtual ::NewInteractionModel getEffectiveTouchScheme() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Option* _getOptionAndAssertIfNotPresent(::OptionID) const;

    MCNAPI float getDebugSkinSpeedMultiplier() const;

    MCNAPI ::EducationServicesEnvironment getEducationServicesEnvironment() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<const Option*> $get(::OptionID) const;

    MCNAPI bool $getDevRenderBoundingBoxes() const;

    MCNAPI bool $getDevRenderPaths() const;

    MCNAPI bool $getDevRenderMobInfoState() const;

    MCNAPI bool $getDevRenderSchedulerInfo() const;

    MCNAPI bool $getDevRenderGoalState() const;

    MCNAPI bool $getDevDeepDarkDebugRender() const;

    MCNAPI ushort $getDevGameEventRetentionTicks() const;

    MCNAPI ::GraphicsMode $getGraphicsMode() const;

    MCNAPI ::UIProfile $getUIProfile() const;

    MCNAPI std::shared_ptr<const IOptionRegistry> $sharedFromThis() const;

    MCNAPI std::shared_ptr<IOptionRegistry> $sharedFromThis();

    MCNAPI ::Option& $_registerOption(std::unique_ptr<Option>);

    MCNAPI bool $isValidOption(::OptionID) const;

    MCNAPI ::gsl::not_null<Option*> $get(::OptionID);

    MCNAPI std::optional<const Option*> $getIfValid(::OptionID) const;

    MCNAPI std::optional<Option*> $getIfValid(::OptionID);

    MCNAPI ::ConstOptionIterator $begin() const;

    MCNAPI ::ConstOptionIterator $end() const;

    MCNAPI bool $consumeDevOptionsDirty();

    MCNAPI void $dumpOptionsToLogFile() const;

    MCNAPI void $updateInputMode(::InputMode);

    MCNAPI void $setMusicVolume(float);

    MCNAPI float $getMusicVolume() const;

    MCNAPI void $setSoundVolume(float);

    MCNAPI float $getSoundVolume() const;

    MCNAPI float $getChatMessageDuration() const;

    MCNAPI float $getToastNotificationDuration() const;

    MCNAPI void $setSensitivity(float, ::InputMode);

    MCNAPI float $getSensitivity(::InputMode) const;

    MCNAPI void $setSpyglassDamping(float, ::InputMode);

    MCNAPI float $getSpyglassDamping(::InputMode) const;

    MCNAPI void $setDwellBeforeDrag(float);

    MCNAPI float $getDwellBeforeDrag() const;

    MCNAPI float $getGameSensitivity(::InputMode) const;

    MCNAPI bool $getInvertYMouse(::InputMode) const;

    MCNAPI float $getParticleViewDistance() const;

    MCNAPI bool $getBobView() const;

    MCNAPI bool $getHideSkyFlash() const;

    MCNAPI bool $getIsDitheringEnabledBlocks() const;

    MCNAPI bool $getIsDitheringEnabledMobs() const;

    MCNAPI void $setResetPlayerAlignment(bool);

    MCNAPI bool $getResetPlayerAlignment() const;

    MCNAPI ::TargetRenderAPI $getTargetRenderAPI() const;

    MCNAPI bool $getTransparentLeaves() const;

    MCNAPI bool $getFancyBubbles() const;

    MCNAPI bool $getSmoothLighting() const;

    MCNAPI bool $getGuiAccessibilityScaling() const;

    MCNAPI bool $getUseMouseForDigging() const;

    MCNAPI bool $isLeftHanded() const;

    MCNAPI bool $isHotbarOnlyTouch() const;

    MCNAPI bool $getDestroyVibration(::InputMode) const;

    MCNAPI bool $getSplitVibration(::InputMode) const;

    MCNAPI bool $getAutoJump(::InputMode) const;

    MCNAPI void $setFullscreen(bool);

    MCNAPI bool $getFullscreen() const;

    MCNAPI void $toggleFullscreen();

    MCNAPI void $setDifficulty(int);

    MCNAPI void $setHideGUI(bool);

    MCNAPI bool $getHideHud() const;

    MCNAPI bool $getHideHand() const;

    MCNAPI void $setHideToolTips(bool);

    MCNAPI bool $getHideToolTips() const;

    MCNAPI void $setHidePaperDoll(bool);

    MCNAPI bool $getHidePaperDoll() const;

    MCNAPI void $setIngamePlayerNames(bool);

    MCNAPI bool $getIngamePlayerNames() const;

    MCNAPI void $setSplitscreenIngamePlayerNames(bool);

    MCNAPI bool $getSplitscreenIngamePlayerNames() const;

    MCNAPI void $setInterfaceOpacity(float);

    MCNAPI float $getInterfaceOpacity() const;

    MCNAPI void $setSplitscreenInterfaceOpacity(float);

    MCNAPI float $getSplitscreenInterfaceOpacity() const;

    MCNAPI void $setShowAutoSaveIcon(bool);

    MCNAPI bool $getShowAutoSaveIcon() const;

    MCNAPI void $setSplitscreenDirection(int);

    MCNAPI ::SplitScreenDirection $getSplitscreenDirection() const;

    MCNAPI void $setHideScreens(bool);

    MCNAPI bool $getHideScreens() const;

    MCNAPI void $setHideItemInHand(bool);

    MCNAPI bool $getHideItemInHand() const;

    MCNAPI bool $getScreenAnimations() const;

    MCNAPI float $getPanoramaSpeed() const;

    MCNAPI int $getPlayerViewPerspective() const;

    MCNAPI void $setForceUseUnsortedPolys(bool);

    MCNAPI bool $getForceUseUnsortedPolys() const;

    MCNAPI void $setRenderDebug(::DebugHudOptions);

    MCNAPI ::DebugHudOptions $getRenderDebug() const;

    MCNAPI bool $getRemoteImguiEnabled() const;

    MCNAPI void $setRemoteImguiEnabled(bool);

    MCNAPI float $getGamma() const;

    MCNAPI void $setMSAA(int);

    MCNAPI void $setTexelAA(bool);

    MCNAPI void $setFixedCamera(bool);

    MCNAPI bool $getFixedCamera() const;

    MCNAPI void $setSkinId(std::string const&);

    MCNAPI std::string const& $getSkinId() const;

    MCNAPI bool $getFovToggle() const;

    MCNAPI void $setServerVisible(bool);

    MCNAPI bool $getServerVisible() const;

    MCNAPI void $setSplitControls(bool);

    MCNAPI bool $getSplitControls() const;

    MCNAPI bool $getSwapJumpAndSneak() const;

    MCNAPI bool $getFancySkies() const;

    MCNAPI void $setRenderClouds(bool);

    MCNAPI bool $getRenderClouds() const;

    MCNAPI bool $getDevAutoLoadLevel() const;

    MCNAPI bool $getDevAssertionsDebugBreak() const;

    MCNAPI bool $getDevAssertionsShowDialog() const;

    MCNAPI bool $getDevShowDisplayLoggedError(::DisplayLoggedErrorType) const;

    MCNAPI bool $getDevShowDisplayLoggedError() const;

    MCNAPI void $setDevShowDevConsoleButton(bool);

    MCNAPI bool $getDevShowDevConsoleButton() const;

    MCNAPI bool $getDevIgnoreUserInput() const;

    MCNAPI bool $getDevDisplayTreatmentPanel() const;

    MCNAPI void $setDevDisplayTreatmentPanel(bool);

    MCNAPI void $setDevShowMinecraftTCUIReplacement(bool);

    MCNAPI bool $getDevShowMinecraftTCUIReplacement() const;

    MCNAPI bool $getDevCreateRealmWithoutPurchase() const;

    MCNAPI bool $getDevDisableConnectedStoragePush() const;

    MCNAPI bool $getDevDisableConnectedStoragePull() const;

    MCNAPI void $setDevFindMobs(bool);

    MCNAPI bool $getDevFindMobs() const;

    MCNAPI void $setDevRenderBoundingBoxes(bool);

    MCNAPI void $setDevRenderPaths(bool);

    MCNAPI void $setDevRenderMobInfoState(bool);

    MCNAPI void $setDevRenderGoalState(bool);

    MCNAPI void $setDevRenderSchedulerInfo(bool);

    MCNAPI void $setDevRenderCoordinateSystems(bool);

    MCNAPI bool $getDevRenderCoordinateSystems() const;

    MCNAPI bool $getDevResetClientId() const;

    MCNAPI void $setDevLogFlushImmediate(bool);

    MCNAPI bool $getDevLogFlushImmediate() const;

    MCNAPI void $setDevLogTimestamp(bool);

    MCNAPI bool $getDevLogTimestamp() const;

    MCNAPI void $setDevLogTrace(bool);

    MCNAPI bool $getDevLogTrace() const;

    MCNAPI void $setDevLogArea(bool);

    MCNAPI bool $getDevLogArea() const;

    MCNAPI void $setDevLogPriority(bool);

    MCNAPI bool $getDevLogPriority() const;

    MCNAPI void $setDevLogThread(bool);

    MCNAPI bool $getDevLogThread() const;

    MCNAPI void $setDevLogAppend(bool);

    MCNAPI bool $getDevLogAppend() const;

    MCNAPI void $setDevLogProcessId(bool);

    MCNAPI bool $getDevLogProcessId() const;

    MCNAPI void $setDevLogThreadId(bool);

    MCNAPI bool $getDevLogThreadId() const;

    MCNAPI void $setDevLogMessageId(bool);

    MCNAPI bool $getDevLogMessageId() const;

    MCNAPI void $setDevLogSilentLogging(bool);

    MCNAPI bool $getDevLogSilentLogging() const;

    MCNAPI void $setDevLogPriorityFilter(std::string const&);

    MCNAPI std::string const& $getDevLogPriorityFilter() const;

    MCNAPI void $setDevLogAreaFilter(std::string const&);

    MCNAPI std::string const& $getDevLogAreaFilter() const;

    MCNAPI void $setDevGameEventRetentionTicks(ushort);

    MCNAPI void $setDevDeepDarkDebugRender(bool);

    MCNAPI bool $isLogCategoryEnabled(::BedrockLog::LogCategory) const;

    MCNAPI bool $getDevEnableProfilerOutput();

    MCNAPI bool $getDevAddUsersSilently() const;

    MCNAPI int $getDevBenchmarkModeTime();

    MCNAPI bool $getDevDisableClientBlobCache() const;

    MCNAPI bool $getDevClientBlobCacheOnLocalServer() const;

    MCNAPI void $setLogFlushDelay(int);

    MCNAPI int $getLogFlushDelay();

    MCNAPI int $getAutomationParallelSlices() const;

    MCNAPI int $getAutomationParallelCurrentSlice() const;

    MCNAPI bool $getIsAutomationRun() const;

    MCNAPI bool $getShouldQuitAppAfterTesting() const;

    MCNAPI bool $shouldUploadTestArtifacts() const;

    MCNAPI bool $hasAutomationTestRunTimedOut() const;

    MCNAPI bool $hasAutomationTestRunReachedCrashLimit() const;

    MCNAPI bool $shouldAppendDebugLogTimestamp() const;

    MCNAPI std::string $getAutomationServerIp() const;

    MCNAPI std::string $getAutomationServerPort() const;

    MCNAPI std::string $getAutomationArtifactUploadSas() const;

    MCNAPI std::string $getAutomationArtifactUploadUrl() const;

    MCNAPI std::string $getAutomationRelativeBlobpath() const;

    MCNAPI std::string $getAutomationFunctionalTestTags() const;

    MCNAPI std::string $getAutomationServerTestTags() const;

    MCNAPI std::string $getAutomationUnitTestTags() const;

    MCNAPI std::string $getAutomationFunctionalBrokenTestTags() const;

    MCNAPI std::string $getAutomationServerBrokenTestTags() const;

    MCNAPI std::string $getAutomationUnitBrokenTestTags() const;

    MCNAPI std::string $getAutomationTestBuildID() const;

    MCNAPI std::string $getAutomationUploadToken() const;

    MCNAPI std::string $getAutomationEnabledFeatures() const;

    MCNAPI std::string $getAutomationEnabledExperiments() const;

    MCNAPI bool $getAutomationShouldGroupServerTests() const;

    MCNAPI bool $getAutomationUnrandomTestsEnabled() const;

    MCNAPI bool $getAutomationRunEntireServerTestGroup() const;

    MCNAPI bool $getAutomationRunServerTestAfterEachTest() const;

    MCNAPI std::string const& $getTestBranchName() const;

    MCNAPI bool $getFunctionalTestBlockInput() const;

    MCNAPI bool $shouldBlockUserInput() const;

    MCNAPI bool $hasSetSafeZone() const;

    MCNAPI bool $getAutomationDisableTreatmentPackDownloads() const;

    MCNAPI bool $getAutomationProfilerCaptureEnabled() const;

    MCNAPI bool $getAutomationProfilerFlipEnabled() const;

    MCNAPI int $getAutomationRepeatCount() const;

    MCNAPI int $getAutomationSoakTestRunDurationMinutes() const;

    MCNAPI bool $getAutomationRerunFailuresOnly() const;

    MCNAPI int $getAutomationUnitPerTestcaseTimeout() const;

    MCNAPI int $getAutomationFunctionalPerTestcaseTimeout() const;

    MCNAPI int $getAutomationServerPerTestcaseTimeout() const;

    MCNAPI void $setAutomationFunctionalBrokenTestTags(std::string const&);

    MCNAPI void $setAutomationUnitBrokenTestTags(std::string const&);

    MCNAPI void $setAutomationUploadToken(std::string const&);

    MCNAPI bool $getDevAchievementsAlwaysEnabled();

    MCNAPI bool $shouldServerTestsLogWorlds() const;

    MCNAPI bool $shouldServerTestsAssertOnLevelDiff() const;

    MCNAPI std::string $getAutomationMultiplayerSessionName() const;

    MCNAPI int $getAutomationMultiplayerDeviceIndex() const;

    MCNAPI std::vector<std::string> $getAutomationMultiplayerUserAccounts() const;

    MCNAPI ::DevConnectionQuality $getDevConnectionQuality() const;

    MCNAPI int $getDevRenderAttachPos() const;

    MCNAPI void $setMultiPlayerGame(bool);

    MCNAPI bool $getMultiPlayerGame() const;

    MCNAPI void $setXboxLiveVisible(bool);

    MCNAPI bool $wasLoggedInLastSession();

    MCNAPI void $setHasEverLoggedIntoXbl(bool);

    MCNAPI bool $getHasEverLoggedIntoXbl() const;

    MCNAPI void $setHasShownFirstLaunchWelcomeModal(bool);

    MCNAPI bool $getHasShownFirstLaunchWelcomeModal() const;

    MCNAPI void $setHasShownFirstSocialWelcomeModal(bool);

    MCNAPI bool $getHasShownFirstSocialWelcomeModal() const;

    MCNAPI void $setDoNotShowFriendsListFTUE(bool);

    MCNAPI bool $getDoNotShowFriendsListFTUE() const;

    MCNAPI void $setDoNotShowPartyTabFTUE(bool);

    MCNAPI bool $getDoNotShowPartyTabFTUE() const;

    MCNAPI void $setHasShownBannedModalAtStartup(bool);

    MCNAPI bool $getHasShownBannedModalAtStartup() const;

    MCNAPI void $setAcknowledgedAutoSave(bool);

    MCNAPI bool $getAcknowledgedAutoSave() const;

    MCNAPI void $setRealmsInviteShowFriendsOption(bool);

    MCNAPI bool $getRealmsInviteShowFriendsOption() const;

    MCNAPI void $setNumberOfOwnedRealms(int);

    MCNAPI int $getNumberOfOwnedRealms() const;

    MCNAPI void $setNumberOfFriendsRealms(int);

    MCNAPI int $getNumberOfFriendsRealms() const;

    MCNAPI void $setCreateRealmUpsellCount(int);

    MCNAPI int $getCreateRealmUpsellCount() const;

    MCNAPI void $setSaveAndQuitCount(int);

    MCNAPI int $getSaveAndQuitCount() const;

    MCNAPI void $setIsRatingsPromptShown(bool);

    MCNAPI bool $getIsRatingsPromptShown() const;

    MCNAPI void $setShowRealmsTrialButtonFromPlayScreen(bool);

    MCNAPI bool $getShowRealmsTrialButtonFromPlayScreen() const;

    MCNAPI ::AutoUpdateMode $getAutoUpdateMode() const;

    MCNAPI void $setCanUseCellularData(bool);

    MCNAPI bool $getCanUseCellularData() const;

    MCNAPI void $setRequireWebsocketEncryption(bool);

    MCNAPI bool $getRequireWebsocketEncryption() const;

    MCNAPI void $setWebsocketsEnabled(bool);

    MCNAPI bool $getWebsocketsEnabled() const;

    MCNAPI void $setUseIPv6Only(bool);

    MCNAPI bool $getUseIPv6Only() const;

    MCNAPI void $setUseRetailXboxSandbox(bool const);

    MCNAPI bool $getUseRetailXboxSandbox() const;

    MCNAPI void $setXboxLiveSandbox(::XboxSandboxEnvironment);

    MCNAPI std::string const& $getXboxLiveSandbox() const;

    MCNAPI void $setRealmsEnvironment(::RealmsEnvironment);

    MCNAPI ::RealmsEnvironment $getRealmsEnvironment() const;

    MCNAPI void $setRealmsEndpoint(std::string const&);

    MCNAPI std::string const& $getRealmsEndpoint() const;

    MCNAPI std::string const& $getRealmsV2Endpoint() const;

    MCNAPI void $setRealmsEndpointPayment(std::string const&);

    MCNAPI std::string const& $getRealmsEndpointPayment() const;

    MCNAPI std::string const& $getRealmsV2EndpointPayment() const;

    MCNAPI void $setRealmsRelyingParty(std::string const&);

    MCNAPI std::string const& $getRealmsRelyingParty() const;

    MCNAPI void $setRealmsRelyingPartyPayment(std::string const&);

    MCNAPI std::string const& $getRealmsRelyingPartyPayment() const;

    MCNAPI void $setStoreHasPurchasedCoins(bool);

    MCNAPI bool $getStoreHasPurchasedCoins() const;

    MCNAPI void $setShowUnfulfilledPurchaseModal(bool);

    MCNAPI bool $getShowUnfulfilledPurchaseModal() const;

    MCNAPI void $setSwitchCoinDebug(bool);

    MCNAPI bool $getSwitchCoinDebug() const;

    MCNAPI void $setEduHasLoggedIn(bool);

    MCNAPI bool $getEduHasLoggedIn() const;

    MCNAPI void $setShownPlatformNetworkConnectConfirmation(bool);

    MCNAPI bool $getShownPlatformNetworkConnectConfirmation() const;

    MCNAPI void $setShownPlatformPremiumUpsell(bool);

    MCNAPI bool $getShownPlatformPremiumUpsell() const;

    MCNAPI void $setAppLaunchedCount(int);

    MCNAPI int $getAppLaunchedCount() const;

    MCNAPI void $setEcoMode(bool);

    MCNAPI bool $getEcoMode() const;

    MCNAPI void $setEduCloudBackupToggle(bool);

    MCNAPI bool $getEduCloudBackupToggle() const;

    MCNAPI void $setUseFontOverrides(bool);

    MCNAPI bool $getUseFontOverrides() const;

    MCNAPI ::NewInteractionModel $getEffectiveTouchScheme() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
