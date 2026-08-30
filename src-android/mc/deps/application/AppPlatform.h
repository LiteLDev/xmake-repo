#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/native_window.h"
#include "mc/deps/application/AppAction.h"
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/IAppPlatform.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/application/ProcessExecutionState.h"
#include "mc/deps/application/StoragePermissionResult.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/AppFocusState.h"
#include "mc/deps/core/platform/AppLifecycleContext.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/platform/PermissionRequestReason.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/secure_storage/ISecureStorageKeySystem.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/UniqueService.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/options/UIProfile.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class AppPlatformListener;
class AppPlatformNetworkSettings;
class BatteryMonitorInterface;
class FilePickerSettings;
class HardwareMemoryTierUtil;
class IAppPlatformImpl;
class IFileAccess;
class IPlatformScreenshots;
class ImagePickingCallback;
class NetworkChangeObserver;
class PDFWriter;
class PropertyBag;
class PushNotificationMessage;
class RectangleArea;
class SecureStorage;
class SecureStorageKey;
class SuspendHandler;
class ThermalMonitorInterface;
class ThrottledFileWriteManager;
class UriListener;
class WebviewInterface;
struct AndroidSurfaceParameters;
struct IntegrityTokenResult;
struct TextBoxSelection;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPaste; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Bedrock { class CommonPlatform; }
namespace Bedrock { class DeviceIdManager; }
namespace Bedrock { class FilePickerManager; }
namespace Bedrock { class IApplicationDataStores; }
namespace Bedrock { class SignalReceiver; }
namespace Bedrock { struct PlatformBuildInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class FileHandlePool; }
namespace Core { class FileStorageArea; }
namespace Core { class LoadTimeProfiler; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace MarketplaceErrorUtils { struct StoreErrorResult; }
namespace Social { struct UserCreationData; }
namespace Webview { class PlatformArguments; }
namespace mce { class UUID; }
namespace mce { struct Image; }
// clang-format on

class AppPlatform : public ::IAppPlatform, public ::ISecureStorageKeySystem {
public:
    // AppPlatform inner types declare
    // clang-format off
    struct ReadMode;
    // clang-format on

    // AppPlatform inner types define
    struct ReadMode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mSpeculative;
        // NOLINTEND
    };

    using Listener = ::AppPlatformListener;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong> mFreeMemoryMaximumBytes;
    ::ll::TypedStorage<1, 1, bool> mRequestedRestart;
    ::ll::TypedStorage<1, 1, bool> mPointerFocusLost;
    ::ll::TypedStorage<1, 1, bool> mKeyboardVisible;
    ::ll::TypedStorage<1, 1, bool> mOnInitUriListenerRegDone;
    ::ll::TypedStorage<8, 24, std::multimap<float, AppPlatformListener*>> mListeners;
    ::ll::UntypedStorage<8, 64> mNetworkChangeSubject;
    ::ll::TypedStorage<1, 1, ::NetworkConnectionType> mNetworkConnectionType;
    ::ll::TypedStorage<8, 8, void*> mHWND;
    ::ll::TypedStorage<8, 40, std::unordered_multimap<std::string, UriListener*>> mUriListeners;
    ::ll::UntypedStorage<8, 48> mStoragePermissionRequestResultCallback;
    ::ll::TypedStorage<1, 4, ::AppLifecycleContext> mAppLifecycleContext;
    ::ll::TypedStorage<4, 4, ::AppFocusState> mFocusState;
    ::ll::TypedStorage<4, 40, std::mutex> mShareLock;
    ::ll::TypedStorage<8, 24, std::string> mShareTitle;
    ::ll::TypedStorage<8, 24, std::string> mShareText;
    ::ll::TypedStorage<8, 24, std::string> mShareUri;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IFileAccess>> mDefaultFileAccess;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IFileAccess>> mPackageFileAccess;
    ::ll::TypedStorage<8, 8, ulong> mMaximumMemoryUsage;
    ::ll::TypedStorage<8, 24, std::string> mLocale;
    ::ll::TypedStorage<8, 8, double> mActiveSeconds;
    ::ll::TypedStorage<8, 8, double> mLastActiveTime;
    ::ll::TypedStorage<1, 1, bool> mAppIsActive;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mDeviceTier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AppPlatformNetworkSettings>> mAppPlatformNetworkSettings;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mTerminating;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mSuspended;
    ::ll::TypedStorage<4, 4, int> mForcedDpi;
    ::ll::TypedStorage<4, 4, ::UIScalingRules> mForcedUIScalingRules;
    ::ll::TypedStorage<1, 1, bool> mForceUIScalingRules;
    ::ll::TypedStorage<1, 1, bool> mShowLostFocusToasts;
    ::ll::TypedStorage<1, 1, bool> mAllowLostFocusToasts;
    ::ll::TypedStorage<1, 1, bool> mAreThreadsFrozen;
    ::ll::TypedStorage<1, 1, bool> mIsLowMemoryDevice;
    ::ll::TypedStorage<1, 1, bool> mIsLowPhysicalMemoryDevice;
    ::ll::TypedStorage<1, 1, bool> mIsUserStorageInitialized;
    ::ll::UntypedStorage<8, 24> mScratchPath;
    ::ll::TypedStorage<4, 40, std::mutex> mScratchPathMutex;
    ::ll::TypedStorage<8, 24, std::string> mLastDeviceSessionId;
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mListenerLock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::SignalReceiver>> mSignalRcvr;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PlatformRuntimeInfo>> mPlatformRuntimeInfo;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PlatformBuildInfo>> mPlatformBuildInfo;
    ::ll::UntypedStorage<8, 16> mProfiler;
    ::ll::UntypedStorage<8, 16> mApplicationDataStores;
    ::ll::UntypedStorage<8, 16> mDeviceIdManager;
    ::ll::UntypedStorage<8, 16> mFilePickerManager;
    ::ll::UntypedStorage<8, 8> mAppPlatformServiceRegistrationToken;
    ::ll::TypedStorage<4, 4, uint> mCPUBoostCounter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLoadTimerOptionSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (LowMemorySeverity), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnLowMemory;
    ::ll::TypedStorage<8, 8, long> mCurrentMemorySeverityIdx;
    ::ll::TypedStorage<8, 8, std::unique_ptr<HardwareMemoryTierUtil>> mHardwareMemoryTierUtil;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ThrottledFileWriteManager>> mThrottledFileWriteManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IAppPlatformImpl>>> mImpl;
    ::ll::TypedStorage<4, 40, std::mutex> mArchiveHandlePoolMutex;
    ::ll::UntypedStorage<8, 24> mArchiveHandlePool;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AppPlatform();

    virtual bool restartRequested();

    virtual ::Core::PathBuffer<std::string> getLoggingPath() const;

    virtual bool isLowMemoryDevice() const;

    virtual bool isLowPhysicalMemoryDevice() const;

    virtual bool hasPlatformSpecificInvites() const;

    virtual bool isRealmsEnabled() const;

    virtual void initAppPlatformNetworkSettings();

    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const;

    virtual bool const areTreatmentPacksThrottled() const;

    virtual void goToExternalConsumablesStoreListing() const;

    virtual void showPlatformEmptyStoreDialog(std::function<void (bool)>&&);

    virtual bool isNetworkEnabled(bool) const;

    virtual bool isNetworkAvailable() const;

    virtual bool isLANAvailable() const;

    virtual bool isLANAllowed() const;

    virtual bool isInternetAvailable() const;

    virtual bool multiplayerRequiresPremiumAccess() const;

    virtual bool multiplayerRequiresUGCEnabled() const;

    virtual int getDefaultNetworkMaxPlayers() const;

    virtual ::BuildPlatform getBuildPlatform() const;

    virtual ulong getLowPhysicalMemoryThreshold() const;

    virtual ulong getTotalPhysicalMemory() const = 0;

    virtual ::HardwareMemoryTierUtil const& getHardwareMemoryTierUtil() const;

    virtual std::string getDeviceId() const;

    virtual void initialize();

    virtual void teardown();

    virtual ulong getHighPerformanceThreadsCount() const;

    virtual ulong getTotalHardwareThreadsCount() const;

    virtual void initializeGraphicsDeviceTier();

    virtual void addListener(::AppPlatformListener*, float);

    virtual void removeListener(::AppPlatformListener*);

    virtual ::ProcessExecutionState getProcessExecutionState() const;

    virtual void restartApp(bool);

    virtual ::Core::PathBuffer<std::string> getPackagePath() const = 0;

    virtual ::Core::PathBuffer<std::string> getDataUrl() const = 0;

    virtual void loadPNG(::mce::Image&, ::Core::Path const&);

    virtual void loadTGA(::mce::Image&, ::Core::Path const&);

    virtual void loadJPEG(::mce::Image&, ::Core::Path const&);

    virtual int getKeyFromKeyCode(int, int, int);

    virtual void textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);

    virtual void textEditComponentLostFocus();

    virtual void showKeyboard(std::string const&, int, bool, bool, bool, int const, ::glm::vec<2, float, (glm::qualifier)0> const&, float, ::InputMode);

    virtual void hideKeyboard();

    virtual bool blankLineDismissesChat() const;

    virtual bool signWrapsTextEntry() const;

    virtual bool isFullScreenKeyboard() const;

    virtual bool actionSuspendsApp(::AppAction) const;

    virtual float getKeyboardHeight() const;

    virtual bool refocusMouse(bool, bool);

    virtual void setMousePointerType(::Bedrock::Input::PointerType);

    virtual void hideMousePointer();

    virtual void showMousePointer();

    virtual void postInteractiveSignIn();

    virtual bool useHardwareMouse();

    virtual void provideHardwareMouseImageData(::mce::Image const&);

    virtual bool hasCustomSoftwareCursor() const;

    virtual ::Core::PathBuffer<std::string> getCustomSoftwareCursorAsset() const;

    virtual bool getPointerFocus();

    virtual void setPointerFocus(bool);

    virtual bool isInvertScrollEnabled() const;

    virtual void toggleSimulateTouchWithMouse();

    virtual void _fireAppSuspended();

    virtual void _fireAppResumed();

    virtual void _fireAppFocusLost();

    virtual void _fireAppFocusGained();

    virtual void _fireResizeBegin();

    virtual void _fireResizeEnd();

    virtual void _fireDeviceLost();

    virtual void _fireSurfaceCreated();

    virtual void _fireSurfaceDestroyed();

    virtual void _fireAppConfigurationChanged();

    virtual void _fireAppPaused();

    virtual void _fireAppUnpaused();

    virtual void swapBuffers() = 0;

    virtual void discardBackbuffer();

    virtual std::string getSystemLocale() const = 0;

    virtual std::string getTermsOfUseHyperlink() const;

    virtual void pickImage(std::shared_ptr<ImagePickingCallback>) = 0;

    virtual void pickFile(std::shared_ptr<FilePickerSettings>);

    virtual bool supportsAlbumExport() const;

    virtual bool supportsPDFExport() const;

    virtual std::shared_ptr<PDFWriter> createPlatformPDFWriter();

    virtual void shareFile(::Core::Path const&, std::function<void (bool)>);

    virtual bool hasHardwareBackButton();

    virtual bool supportsMSAA() const;

    virtual bool supports3rdPartyServers() const;

    virtual bool supportsManualAddedServers() const;

    virtual bool supportsFilePicking() const;

    virtual bool supportsTouch() const;

    virtual bool supportsKeyboardMouse() const;

    virtual bool supportsGamepad() const;

    virtual ::ClipboardFeatureFlags getClipboardFeatures() const;

    virtual bool supportsClipboardSet() const;

    virtual bool supportsClipboardGet() const;

    virtual bool supportsClipboardAsyncGet() const;

    virtual void setClipboard(std::string const&) const;

    virtual std::wstring getClipboardText() const;

    virtual void getClipboardTextAsync(std::function<void (const std::string&)>) const;

    virtual bool supportsShare() const;

    virtual void share() const;

    virtual bool allowSplitScreen();

    virtual float splitScreenRenderDistScalar(uint);

    virtual float uiOpenRenderDistScalar();

    virtual void pushNotificationReceived(::PushNotificationMessage const&);

    virtual void openStoragePermissionRequest(::PermissionRequestReason, std::function<void (StoragePermissionResult)>);

    virtual void setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, std::function<void (bool)>);

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual void setStorageDirectoryChangeDenied(std::function<void (FileStorageDirectory)>);

    virtual ::Bedrock::PubSub::Subscription addStorageDirectoryChangedSubscriber(std::function<void (const Core::Path&)>);

    virtual void runStoragePermissionResultCallback(::StoragePermissionResult);

    virtual bool hasExternalStoragePermission();

    virtual bool delayOptionSaveUntilCloudSync() const;

    virtual void updateTextEditBoxPosition(::RectangleArea const&, ::RectangleArea const&, float const);

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const;

    virtual void trialCorrelationStart();

    virtual void setAllowLostFocusToasts(bool);

    virtual void setShowLostFocusToasts(bool);

    virtual bool getShowLostFocusToasts();

    virtual double getTimeSFromProcessStart() const = 0;

    virtual ::Bedrock::Threading::Async<IntegrityTokenResult> requestIntegrityToken(std::string const&);

    virtual void setIntegrityToken(std::string const&);

    virtual void setIntegrityTokenErrorMessage(std::string const&);

    virtual bool supportsInPackageRecursion() const;

    virtual bool supportsXboxLiveAchievements() const;

    virtual void hideSplashScreen();

    virtual std::string getFeedbackBugsLink() const;

    virtual std::string getFeedbackHelpLink() const;

    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse(*)(std::string const&, std::string const&);

    virtual void updateLocalization(std::string const&);

    virtual void setSleepEnabled(bool);

    virtual ::Core::PathBuffer<std::string> getScratchPath();

    virtual ::Core::PathBuffer<std::string> getInternalPackStoragePath() const;

    virtual ::Core::PathBuffer<std::string> getSettingsPath();

    virtual ::Core::PathBuffer<std::string> getPackagedShaderCachePath();

    virtual ::Core::PathBuffer<std::string> getShaderCachePath();

    virtual ::Core::PathBuffer<std::string> getUserdataPathForLevels() const;

    virtual ::Core::PathBuffer<std::string> getCacheStoragePath();

    virtual ::Core::PathBuffer<std::string> getTextureCacheStoragePath();

    virtual ::Core::PathBuffer<std::string> getOnDiskScratchPath();

    virtual ::Core::PathBuffer<std::string> getOnDiskPackScratchPath();

    virtual ::Core::PathBuffer<std::string> getLevelInfoCachePath() const;

    virtual ::Core::PathBuffer<std::string> getCatalogSearchScratchPath();

    virtual ::Core::PathBuffer<std::string> getUserStorageRootPath() const;

    virtual std::shared_ptr<Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    virtual bool hasSeparatedStorageAreasForContentAcquisition() const;

    virtual ulong getOptimalLDBSize();

    virtual int getMaxLDBFilesOpen() const;

    virtual bool getDisableLDBSeekCompactions() const;

    virtual void showDialog(int);

    virtual void createUserInput(int);

    virtual void createUserInput();

    virtual int getUserInputStatus();

    virtual std::vector<std::string> getUserInput();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> getFileAccess(::ResourceFileSystem);

    virtual ::Core::PathBuffer<std::string> copyImportFileToTempFolder(::Core::Path const&);

    virtual void registerFileForCollectionWithCrashDump(::Core::Path const&);

    virtual void registerExperimentsActiveCrashDump(std::vector<std::string> const&) const;

    virtual int getScreenWidth() const;

    virtual int getScreenHeight() const;

    virtual int getDisplayWidth();

    virtual int getDisplayHeight();

    virtual void setScreenSize(int, int);

    virtual void setWindowSize(int, int);

    virtual void setWindowText(std::string const&);

    virtual std::optional<OperationMode> getOperationMode() const;

    virtual bool allowContentLogWriteToDisk();

    virtual uint getMaxClubsRequests() const;

    virtual void queueForMainThread_DEPRECATED(std::function<void ()>) = 0;

    virtual ::MPMCQueue<std::function<void ()>>& getMainThreadQueue() = 0;

    virtual bool supportsLaunchingLegacyVersion() const;

    virtual void launchLegacyVersion();

    virtual bool canManageLegacyData() const;

    virtual bool supportsDayOneExperience() const;

    virtual bool canMigrateWorldData() const;

    virtual bool isContentAutoUpdateAllowed() const;

    virtual int getMaxSimultaneousDownloads() const;

    virtual uint getMaxSimultaneousServiceRequests() const;

    virtual bool isDownloadAndImportBlocking() const;

    virtual bool isDownloadBuffered() const;

    virtual bool supportsAutoSaveOnDBCompaction() const;

    virtual std::string getTextBoxBackend() const = 0;

    virtual void setTextBoxBackend(std::string const&) = 0;

    virtual int getCaretPosition() const = 0;

    virtual void setCaretPosition(int) = 0;

    virtual void setTextBoxSelection(::TextBoxSelection);

    virtual bool supportsVibration() const;

    virtual void vibrate(int);

    virtual ::Core::PathBuffer<std::string> getAssetFileFullPath(::Core::Path const&);

    virtual ::Bedrock::Result<std::string, std::error_code> _readAssetFileInternal(::Core::PathView);

    virtual bool hasAssetFile(::Core::Path const&);

    virtual bool copyAssetFile(::Core::Path const&, ::Core::Path const&);

    virtual std::set<Core::PathBuffer<std::string>> listAssetFilesIn(::Core::Path const&, std::string const&) const;

    virtual bool supportsClientUpdate() const;

    virtual std::string getClientUpdateUrl() const;

    virtual int checkLicense();

    virtual bool hasBuyButtonWhenInvalidLicense();

    virtual void setNetworkAllowed(bool);

    virtual bool isNetworkAllowed() const;

    virtual std::optional<bool> isOnWifiConnectionTelemetryValue();

    virtual ::NetworkConnectionType getNetworkConnectionType();

    virtual void setNetworkConnectionType(::NetworkConnectionType);

    virtual bool isCrossPlatformToggleVisible() const;

    virtual bool isTelemetryAllowed();

    virtual bool isTrialWorldsTransferToFullGameAllowed() const;

    virtual void buyGame();

    virtual void finish();

    virtual bool canLaunchUri(std::string const&);

    virtual void launchUri(std::string const&);

    virtual void launchSettings();

    virtual bool useXboxControlHelpers() const;

    virtual ::PlatformType getPlatformType() const;

    virtual bool isCentennial() const;

    virtual std::string getPackageFamilyName() const;

    virtual std::string getSubPlatformString() const = 0;

    virtual int getNumberOfParticleFramesToInterpolate() const;

    virtual int getDpi() const;

    virtual void setDpi(int);

    virtual ::UIScalingRules getUIScalingRules() const;

    virtual void setUIScalingRules(::UIScalingRules);

    virtual bool hasIDEProfiler();

    virtual std::string getPlatformStringVar(int);

    virtual std::string getApplicationId() const = 0;

    virtual ulong getFreeMemory() const = 0;

    virtual ulong getMemoryLimit() const = 0;

    virtual ulong getUsedMemory() = 0;

    virtual ulong getMaximumUsedMemory();

    virtual ulong getLowMemoryEventThreshold(::LowMemorySeverity) const;

    virtual ulong getLowMemoryEventRecoveryThreshold(::LowMemorySeverity) const;

    virtual void calculateIfLowMemoryDevice();

    virtual ulong getTextureMemoryBudget() const;

    virtual ulong getSingleMipDefaultMemoryBudget() const;

    virtual void readyForApplicationExitInfo() const;

    virtual ulong getDebugMemoryInfo(std::string const&) const = 0;

    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    virtual int getMaxSimRadiusInChunks() const;

    virtual std::vector<std::string> getBroadcastAddresses();

    virtual std::vector<std::string> getIPAddresses();

    virtual bool useAppPlatformForTelemetryIPAddress();

    virtual std::string getModelName();

    virtual std::string getModelNameForUI();

    virtual void updateBootstrapSettingsFromTreatmentsAsync();

    virtual std::string createUUID() = 0;

    virtual bool isTablet() const = 0;

    virtual void registerUriListener(std::string const&, ::UriListener&);

    virtual void registerUriListener(::UriListener&);

    virtual void unregisterUriListener(::UriListener const&);

    virtual void notifyUriListeners(::ActivationUri const&);

    virtual void notifyUriListenerRegistrationDone();

    virtual void setFullscreenMode(::FullscreenMode const);

    virtual bool isNetworkThrottled() const;

    virtual bool doesLANRequireMultiplayerRestrictions() const;

    virtual void collectGraphicsHardwareDetails();

    virtual std::string getEdition() const;

    virtual ::OsVersion getOSVersion() const;

    virtual void setThreadsFrozen(bool);

    virtual bool areThreadsFrozen() const;

    virtual float getDefaultSafeZoneScaleX() const;

    virtual float getDefaultSafeZoneScaleY() const;

    virtual float getDefaultSafeZoneScaleAll() const;

    virtual float getDefaultScreenPositionX() const;

    virtual float getDefaultScreenPositionY() const;

    virtual bool isQuitCapable() const;

    virtual bool requireControllerAtStartup() const;

    virtual bool notifyControllerConnectionStateChange() const;

    virtual bool platformRequiresControllerApplet() const;

    virtual ::InputMode getDefaultInputMode() const;

    virtual ::AppFocusState getFocusState();

    virtual ::AppLifecycleContext& getAppLifecycleContext();

    virtual ulong calculateAvailableDiskFreeSpace(::Core::Path const&) = 0;

    virtual bool supportsFliteTTS() const;

    virtual std::unique_ptr<SecureStorage> getSecureStorage();

    virtual ::SecureStorageKey getSecureStorageKey(std::string const&);

    virtual void setSecureStorageKey(std::string const&, ::SecureStorageKey const&);

    virtual bool devHotReloadRenderResources() const;

    virtual bool shouldPauseDownloadsWhenEnterGame() const;

    virtual bool compareAppReceiptToLocalReceipt(std::string const&);

    virtual ::mce::UUID const& getThirdPartyPackUUID() const;

    virtual ::mce::UUID const& getPlatformBetaPackUUID() const;

    virtual bool saveTreatmentPacksAsZips() const;

    virtual bool saveEncryptedPacksAsZips() const;

    virtual bool saveEncryptedWorldTemplatePacksAsZips() const;

    virtual bool saveEncryptedPersonaPacksAsZips() const;

    virtual bool allowsResourcePackDevelopment() const;

    virtual bool supportsLegacySinglePremiumCacheDirectory() const;

    virtual bool supportsWorldShare() const;

    virtual bool hasJournalingFilesystem() const;

    virtual bool isAutoCompactionEnabled() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1000000000>> getLevelSaveInterval() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1000000000>> getOptionsSaveInterval() const;

    virtual bool usePlatformProfilePicturesOnly() const;

    virtual bool allowBetaXblSignIn() const;

    virtual bool requiresXboxLiveSigninToPlay() const;

    virtual bool requiresLiveGoldForMultiplayer() const;

    virtual bool shouldRegisterForXboxLiveNotifications() const;

    virtual bool minimizeBackgroundDownloads() const;

    virtual bool requiresAutoSaveIconExplanationPopup() const;

    virtual ::IPlatformScreenshots& getPlatformScreenshots();

    virtual uint maxFileDataRequestConcurrency() const;

    virtual float getStoreNetworkFailureTimeout() const;

    virtual std::shared_ptr<Core::FileStorageArea> createLoggingStorageArea(::Core::FileAccessType, ::Core::PathView);

    virtual uint getPlatformErrorCodeForStoreError(::MarketplaceErrorUtils::StoreErrorResult const&);

    virtual void handlePlatformSpecificCommerceError(uint, std::string const&);

    virtual bool isEduMode() const;

    virtual bool importAsFlatFile() const;

    virtual bool isWebviewSupported() const;

    virtual std::shared_ptr<WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;

    virtual bool canAppSelfTerminate() const = 0;

    virtual bool getPlatformTTSExists() const;

    virtual bool getPlatformTTSEnabled() const;

    virtual std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> getRenderSurfaceParameters() const;

    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    virtual bool isJoinableViaExternalServers() const;

    virtual void onPrimaryUserNetworkReady();

    virtual bool isDisplayInitialized() const;

    virtual bool usesAsyncOptionSaving() const;

    virtual void showPlatformStoreIcon(bool);

    virtual void showXboxLiveUserSettings();

    virtual void initializeGameStreaming();

    virtual void notifyNetworkConfigurationChanged();

    virtual void setKeepScreenOnFlag(bool);

    virtual void initializeMulticast() const;

    virtual void requestMulticastReceivePermission();

    virtual bool hasMulticastReceivePermission() const;

    virtual void releaseMulticastReceivePermission() const;

    virtual void onMinecraftGameInitComplete();

    virtual void onFullGameUnlock();

    virtual bool is24HourTimeFormat() const;

    virtual ::Bedrock::Threading::Async<bool> showOSUserDialog(std::string, std::string, std::string);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ThrottledFileWriteManager>> getThrottledFileWriteManager() const;

    virtual ::Core::PathBuffer<std::string> _getCurrentStoragePath() const = 0;

    virtual ::Core::PathBuffer<std::string> _getExternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<std::string> _getInternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<std::string> _getUserdataPath() const = 0;

    virtual ::Core::PathBuffer<std::string> _getSharedDataPath() const = 0;

    virtual void _notifyUriListeners(::ActivationUri const&, bool);

    virtual bool _tryEnableCPUBoost();

    virtual void _disableCPUBoost();

    virtual ::Bedrock::CommonPlatform* getPlatformShim() const;

    virtual void _initializeFileStorageAreas();

    virtual void _teardownFileStorageAreas();

    virtual int getPlatformDpi() const;

    virtual ::UIScalingRules getPlatformUIScalingRules() const;

    virtual ::Core::PathBuffer<std::string> getPlatformTempPath() const = 0;

    virtual void _onInitialize();

    virtual void _onTeardown();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform(bool, std::unique_ptr<IAppPlatformImpl>);

    MCNAPI void _clipboardCopyHandler(::ApplicationSignal::ClipboardCopy const&);

    MCNAPI void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const&);

    MCNAPI void _clipboardPasteRequestHandler(::ApplicationSignal::ClipboardPasteRequest const&);

    MCNAPI void _fireAppTerminated();

    MCNAPI ::IAppPlatformImpl& _getImpl();

    MCNAPI void _terminateListeners();

    MCNAPI std::unique_ptr<Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim();

    MCNAPI void addNetworkChangeObserver(::NetworkChangeObserver&);

    MCNAPI void checkAndTriggerOnLowMemory();

    MCNAPI void disableCPUBoost();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Bedrock::IApplicationDataStores>> getApplicationDataStores();

    MCNAPI std::shared_ptr<Core::FileHandlePool> getArchiveHandlePool() const;

    MCNAPI ::Core::PathBuffer<std::string> getCurrentStoragePath() const;

    MCNAPI ::UIProfile getDefaultUIProfile() const;

    MCNAPI std::string getDeviceIdWarning() const;

    MCNAPI ::Core::PathBuffer<std::string> getExternalStoragePath() const;

    MCNAPI ulong getFreeMemoryTestable() const;

    MCNAPI std::string getGraphicsDeviceTier() const;

    MCNAPI ::Core::PathBuffer<std::string> getInternalStoragePath() const;

    MCNAPI std::optional<std::locale> getLocaleForDateTimeFormatting() const;

    MCNAPI ::gsl::not_null<Bedrock::PubSub::Connector<void(LowMemorySeverity)>*> getOnLowMemoryConnector();

    MCNAPI std::unique_ptr<Bedrock::PlatformRuntimeInfo> const& getPlatformRuntimeInformation() const;

    MCNAPI std::string getShareText() const;

    MCNAPI std::string getShareTitle() const;

    MCNAPI std::string getShareUri() const;

    MCNAPI double getTotalActiveSeconds();

    MCNAPI ::Core::PathBuffer<std::string> getUserdataPath() const;

    MCNAPI bool isKeyboardVisible() const;

    MCNAPI bool isTerminating() const;

    MCNAPI void loadImage(::mce::Image&, ::Core::Path const&);

    MCNAPI ::mce::Image loadTexture(::Core::Path const&);

    MCNAPI ::mce::Image loadTextureFromStream(std::string const&);

    MCNAPI void notifyElapsedSeconds(double);

    MCNAPI void notifyTerminate();

    MCNAPI void notifyUserStorageInitialized();

    MCNAPI void processSignals();

    MCNAPI ::Bedrock::Result<std::string, std::error_code>
    readAssetFile(::Core::PathView, ::AppPlatform::ReadMode const&);

    MCNAPI bool requiresNetworkOutageMessaging() const;

    MCNAPI void setShareData(std::string, std::string, std::string);

    MCNAPI void setShareMetaData(std::string const&, std::string const&);

    MCNAPI bool tryEnableCPUBoost();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool hasPendingProtocolActivation();

    MCNAPI static bool isInitialized();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& HOME_PATH();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& LOG_PATH();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();

    MCNAPI static bool& mIsInitialized();

    MCNAPI static ::ActivationUri& mPendingProtocolActivation();

    MCNAPI static std::mutex& mProtocolMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, std::unique_ptr<IAppPlatformImpl>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $restartRequested();

    MCNAPI ::Core::PathBuffer<std::string> $getLoggingPath() const;

    MCNAPI bool $isLowMemoryDevice() const;

    MCNAPI bool $isLowPhysicalMemoryDevice() const;

    MCNAPI bool $hasPlatformSpecificInvites() const;

    MCNAPI bool $isRealmsEnabled() const;

    MCNAPI void $initAppPlatformNetworkSettings();

    MCNAPI int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;

    MCNAPI bool const $areTreatmentPacksThrottled() const;

    MCNAPI void $goToExternalConsumablesStoreListing() const;

    MCNAPI void $showPlatformEmptyStoreDialog(std::function<void(bool)>&&);

    MCNAPI bool $isNetworkEnabled(bool) const;

    MCNAPI bool $isNetworkAvailable() const;

    MCNAPI bool $isLANAvailable() const;

    MCNAPI bool $isLANAllowed() const;

    MCNAPI bool $isInternetAvailable() const;

    MCNAPI bool $multiplayerRequiresPremiumAccess() const;

    MCNAPI bool $multiplayerRequiresUGCEnabled() const;

    MCNAPI int $getDefaultNetworkMaxPlayers() const;

    MCNAPI ::BuildPlatform $getBuildPlatform() const;

    MCNAPI ulong $getLowPhysicalMemoryThreshold() const;

    MCNAPI ::HardwareMemoryTierUtil const& $getHardwareMemoryTierUtil() const;

    MCNAPI std::string $getDeviceId() const;

    MCNAPI void $initialize();

    MCNAPI void $teardown();

    MCNAPI ulong $getHighPerformanceThreadsCount() const;

    MCNAPI ulong $getTotalHardwareThreadsCount() const;

    MCNAPI void $initializeGraphicsDeviceTier();

    MCNAPI void $addListener(::AppPlatformListener*, float);

    MCNAPI void $removeListener(::AppPlatformListener*);

    MCNAPI ::ProcessExecutionState $getProcessExecutionState() const;

    MCNAPI void $restartApp(bool);

    MCNAPI void $loadPNG(::mce::Image&, ::Core::Path const&);

    MCNAPI void $loadTGA(::mce::Image&, ::Core::Path const&);

    MCNAPI void $loadJPEG(::mce::Image&, ::Core::Path const&);

    MCNAPI int $getKeyFromKeyCode(int, int, int);

    MCNAPI void $textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);

    MCNAPI void $textEditComponentLostFocus();

    MCNAPI void $showKeyboard(
        std::string const&,
        int,
        bool,
        bool,
        bool,
        int const,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        float,
        ::InputMode
    );

    MCNAPI void $hideKeyboard();

    MCNAPI bool $blankLineDismissesChat() const;

    MCNAPI bool $signWrapsTextEntry() const;

    MCNAPI bool $isFullScreenKeyboard() const;

    MCNAPI bool $actionSuspendsApp(::AppAction) const;

    MCNAPI float $getKeyboardHeight() const;

    MCNAPI bool $refocusMouse(bool, bool);

    MCNAPI void $setMousePointerType(::Bedrock::Input::PointerType);

    MCNAPI void $hideMousePointer();

    MCNAPI void $showMousePointer();

    MCNAPI void $postInteractiveSignIn();

    MCNAPI bool $useHardwareMouse();

    MCNAPI void $provideHardwareMouseImageData(::mce::Image const&);

    MCNAPI bool $hasCustomSoftwareCursor() const;

    MCNAPI ::Core::PathBuffer<std::string> $getCustomSoftwareCursorAsset() const;

    MCNAPI bool $getPointerFocus();

    MCNAPI void $setPointerFocus(bool);

    MCNAPI bool $isInvertScrollEnabled() const;

    MCNAPI void $toggleSimulateTouchWithMouse();

    MCNAPI void $_fireAppSuspended();

    MCNAPI void $_fireAppResumed();

    MCNAPI void $_fireAppFocusLost();

    MCNAPI void $_fireAppFocusGained();

    MCNAPI void $_fireResizeBegin();

    MCNAPI void $_fireResizeEnd();

    MCNAPI void $_fireDeviceLost();

    MCNAPI void $_fireSurfaceCreated();

    MCNAPI void $_fireSurfaceDestroyed();

    MCNAPI void $_fireAppConfigurationChanged();

    MCNAPI void $_fireAppPaused();

    MCNAPI void $_fireAppUnpaused();

    MCNAPI void $discardBackbuffer();

    MCNAPI std::string $getTermsOfUseHyperlink() const;

    MCNAPI void $pickFile(std::shared_ptr<FilePickerSettings>);

    MCNAPI bool $supportsAlbumExport() const;

    MCNAPI bool $supportsPDFExport() const;

    MCNAPI std::shared_ptr<PDFWriter> $createPlatformPDFWriter();

    MCNAPI void $shareFile(::Core::Path const&, std::function<void(bool)>);

    MCNAPI bool $hasHardwareBackButton();

    MCNAPI bool $supportsMSAA() const;

    MCNAPI bool $supports3rdPartyServers() const;

    MCNAPI bool $supportsManualAddedServers() const;

    MCNAPI bool $supportsFilePicking() const;

    MCNAPI bool $supportsTouch() const;

    MCNAPI bool $supportsKeyboardMouse() const;

    MCNAPI bool $supportsGamepad() const;

    MCNAPI ::ClipboardFeatureFlags $getClipboardFeatures() const;

    MCNAPI bool $supportsClipboardSet() const;

    MCNAPI bool $supportsClipboardGet() const;

    MCNAPI bool $supportsClipboardAsyncGet() const;

    MCNAPI void $setClipboard(std::string const&) const;

    MCNAPI std::wstring $getClipboardText() const;

    MCNAPI void $getClipboardTextAsync(std::function<void(const std::string&)>) const;

    MCNAPI bool $supportsShare() const;

    MCNAPI void $share() const;

    MCNAPI bool $allowSplitScreen();

    MCNAPI float $splitScreenRenderDistScalar(uint);

    MCNAPI float $uiOpenRenderDistScalar();

    MCNAPI void $pushNotificationReceived(::PushNotificationMessage const&);

    MCNAPI void $openStoragePermissionRequest(::PermissionRequestReason, std::function<void(StoragePermissionResult)>);

    MCNAPI void $setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, std::function<void(bool)>);

    MCNAPI ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory);

    MCNAPI ::FileStorageDirectory $getStorageDirectory() const;

    MCNAPI void $setStorageDirectoryChangeDenied(std::function<void(FileStorageDirectory)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        $addStorageDirectoryChangedSubscriber(std::function<void(const Core::Path&)>);

    MCNAPI void $runStoragePermissionResultCallback(::StoragePermissionResult);

    MCNAPI bool $hasExternalStoragePermission();

    MCNAPI bool $delayOptionSaveUntilCloudSync() const;

    MCNAPI void $updateTextEditBoxPosition(::RectangleArea const&, ::RectangleArea const&, float const);

    MCNAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;

    MCNAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;

    MCNAPI void $trialCorrelationStart();

    MCNAPI void $setAllowLostFocusToasts(bool);

    MCNAPI void $setShowLostFocusToasts(bool);

    MCNAPI bool $getShowLostFocusToasts();

    MCNAPI ::Bedrock::Threading::Async<IntegrityTokenResult> $requestIntegrityToken(std::string const&);

    MCNAPI void $setIntegrityToken(std::string const&);

    MCNAPI void $setIntegrityTokenErrorMessage(std::string const&);

    MCNAPI bool $supportsInPackageRecursion() const;

    MCNAPI bool $supportsXboxLiveAchievements() const;

    MCNAPI void $hideSplashScreen();

    MCNAPI std::string $getFeedbackBugsLink() const;

    MCNAPI std::string $getFeedbackHelpLink() const;

    MCNAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(std::string const&, std::string const&);

    MCNAPI void $updateLocalization(std::string const&);

    MCNAPI void $setSleepEnabled(bool);

    MCNAPI ::Core::PathBuffer<std::string> $getScratchPath();

    MCNAPI ::Core::PathBuffer<std::string> $getInternalPackStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getSettingsPath();

    MCNAPI ::Core::PathBuffer<std::string> $getPackagedShaderCachePath();

    MCNAPI ::Core::PathBuffer<std::string> $getShaderCachePath();

    MCNAPI ::Core::PathBuffer<std::string> $getUserdataPathForLevels() const;

    MCNAPI ::Core::PathBuffer<std::string> $getCacheStoragePath();

    MCNAPI ::Core::PathBuffer<std::string> $getTextureCacheStoragePath();

    MCNAPI ::Core::PathBuffer<std::string> $getOnDiskScratchPath();

    MCNAPI ::Core::PathBuffer<std::string> $getOnDiskPackScratchPath();

    MCNAPI ::Core::PathBuffer<std::string> $getLevelInfoCachePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getCatalogSearchScratchPath();

    MCNAPI ::Core::PathBuffer<std::string> $getUserStorageRootPath() const;

    MCNAPI std::shared_ptr<Core::FileStorageArea> $getOrCreateStorageAreaForUser(::Social::UserCreationData const&);

    MCNAPI bool $hasSeparatedStorageAreasForContentAcquisition() const;

    MCNAPI ulong $getOptimalLDBSize();

    MCNAPI int $getMaxLDBFilesOpen() const;

    MCNAPI bool $getDisableLDBSeekCompactions() const;

    MCNAPI void $showDialog(int);

    MCNAPI void $createUserInput(int);

    MCNAPI void $createUserInput();

    MCNAPI int $getUserInputStatus();

    MCNAPI std::vector<std::string> $getUserInput();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> $getFileAccess(::ResourceFileSystem);

    MCNAPI ::Core::PathBuffer<std::string> $copyImportFileToTempFolder(::Core::Path const&);

    MCNAPI void $registerFileForCollectionWithCrashDump(::Core::Path const&);

    MCNAPI void $registerExperimentsActiveCrashDump(std::vector<std::string> const&) const;

    MCNAPI int $getScreenWidth() const;

    MCNAPI int $getScreenHeight() const;

    MCNAPI int $getDisplayWidth();

    MCNAPI int $getDisplayHeight();

    MCNAPI void $setScreenSize(int, int);

    MCNAPI void $setWindowSize(int, int);

    MCNAPI void $setWindowText(std::string const&);

    MCNAPI std::optional<OperationMode> $getOperationMode() const;

    MCNAPI bool $allowContentLogWriteToDisk();

    MCNAPI uint $getMaxClubsRequests() const;

    MCNAPI bool $supportsLaunchingLegacyVersion() const;

    MCNAPI void $launchLegacyVersion();

    MCNAPI bool $canManageLegacyData() const;

    MCNAPI bool $supportsDayOneExperience() const;

    MCNAPI bool $canMigrateWorldData() const;

    MCNAPI bool $isContentAutoUpdateAllowed() const;

    MCNAPI int $getMaxSimultaneousDownloads() const;

    MCNAPI uint $getMaxSimultaneousServiceRequests() const;

    MCNAPI bool $isDownloadAndImportBlocking() const;

    MCNAPI bool $isDownloadBuffered() const;

    MCNAPI bool $supportsAutoSaveOnDBCompaction() const;

    MCNAPI void $setTextBoxSelection(::TextBoxSelection);

    MCNAPI bool $supportsVibration() const;

    MCNAPI void $vibrate(int);

    MCNAPI ::Core::PathBuffer<std::string> $getAssetFileFullPath(::Core::Path const&);

    MCNAPI ::Bedrock::Result<std::string, std::error_code> $_readAssetFileInternal(::Core::PathView);

    MCNAPI bool $hasAssetFile(::Core::Path const&);

    MCNAPI bool $copyAssetFile(::Core::Path const&, ::Core::Path const&);

    MCNAPI std::set<Core::PathBuffer<std::string>> $listAssetFilesIn(::Core::Path const&, std::string const&) const;

    MCNAPI bool $supportsClientUpdate() const;

    MCNAPI std::string $getClientUpdateUrl() const;

    MCNAPI int $checkLicense();

    MCNAPI bool $hasBuyButtonWhenInvalidLicense();

    MCNAPI void $setNetworkAllowed(bool);

    MCNAPI bool $isNetworkAllowed() const;

    MCNAPI std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCNAPI ::NetworkConnectionType $getNetworkConnectionType();

    MCNAPI void $setNetworkConnectionType(::NetworkConnectionType);

    MCNAPI bool $isCrossPlatformToggleVisible() const;

    MCNAPI bool $isTelemetryAllowed();

    MCNAPI void $buyGame();

    MCNAPI void $finish();

    MCNAPI bool $canLaunchUri(std::string const&);

    MCNAPI void $launchUri(std::string const&);

    MCNAPI void $launchSettings();

    MCNAPI bool $useXboxControlHelpers() const;

    MCNAPI ::PlatformType $getPlatformType() const;

    MCNAPI bool $isCentennial() const;

    MCNAPI std::string $getPackageFamilyName() const;

    MCNAPI int $getNumberOfParticleFramesToInterpolate() const;

    MCNAPI int $getDpi() const;

    MCNAPI void $setDpi(int);

    MCNAPI ::UIScalingRules $getUIScalingRules() const;

    MCNAPI void $setUIScalingRules(::UIScalingRules);

    MCNAPI bool $hasIDEProfiler();

    MCNAPI std::string $getPlatformStringVar(int);

    MCNAPI ulong $getMaximumUsedMemory();

    MCNAPI ulong $getLowMemoryEventThreshold(::LowMemorySeverity) const;

    MCNAPI ulong $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity) const;

    MCNAPI void $calculateIfLowMemoryDevice();

    MCNAPI ulong $getTextureMemoryBudget() const;

    MCNAPI ulong $getSingleMipDefaultMemoryBudget() const;

    MCNAPI void $readyForApplicationExitInfo() const;

    MCNAPI ::DeviceSunsetTier $getDeviceSunsetTier() const;

    MCNAPI int $getMaxSimRadiusInChunks() const;

    MCNAPI std::vector<std::string> $getBroadcastAddresses();

    MCNAPI std::vector<std::string> $getIPAddresses();

    MCNAPI bool $useAppPlatformForTelemetryIPAddress();

    MCNAPI std::string $getModelName();

    MCNAPI std::string $getModelNameForUI();

    MCNAPI void $updateBootstrapSettingsFromTreatmentsAsync();

    MCNAPI void $registerUriListener(std::string const&, ::UriListener&);

    MCNAPI void $registerUriListener(::UriListener&);

    MCNAPI void $unregisterUriListener(::UriListener const&);

    MCNAPI void $notifyUriListeners(::ActivationUri const&);

    MCNAPI void $notifyUriListenerRegistrationDone();

    MCNAPI void $setFullscreenMode(::FullscreenMode const);

    MCNAPI bool $isNetworkThrottled() const;

    MCNAPI bool $doesLANRequireMultiplayerRestrictions() const;

    MCNAPI void $collectGraphicsHardwareDetails();

    MCNAPI std::string $getEdition() const;

    MCNAPI ::OsVersion $getOSVersion() const;

    MCNAPI void $setThreadsFrozen(bool);

    MCNAPI bool $areThreadsFrozen() const;

    MCNAPI float $getDefaultSafeZoneScaleX() const;

    MCNAPI float $getDefaultSafeZoneScaleY() const;

    MCNAPI float $getDefaultSafeZoneScaleAll() const;

    MCNAPI float $getDefaultScreenPositionX() const;

    MCNAPI float $getDefaultScreenPositionY() const;

    MCNAPI bool $isQuitCapable() const;

    MCNAPI bool $requireControllerAtStartup() const;

    MCNAPI bool $notifyControllerConnectionStateChange() const;

    MCNAPI bool $platformRequiresControllerApplet() const;

    MCNAPI ::InputMode $getDefaultInputMode() const;

    MCNAPI ::AppFocusState $getFocusState();

    MCNAPI ::AppLifecycleContext& $getAppLifecycleContext();

    MCNAPI bool $supportsFliteTTS() const;

    MCNAPI std::unique_ptr<SecureStorage> $getSecureStorage();

    MCNAPI ::SecureStorageKey $getSecureStorageKey(std::string const&);

    MCNAPI void $setSecureStorageKey(std::string const&, ::SecureStorageKey const&);

    MCNAPI bool $devHotReloadRenderResources() const;

    MCNAPI bool $shouldPauseDownloadsWhenEnterGame() const;

    MCNAPI bool $compareAppReceiptToLocalReceipt(std::string const&);

    MCNAPI ::mce::UUID const& $getThirdPartyPackUUID() const;

    MCNAPI ::mce::UUID const& $getPlatformBetaPackUUID() const;

    MCNAPI bool $saveTreatmentPacksAsZips() const;

    MCNAPI bool $saveEncryptedPacksAsZips() const;

    MCNAPI bool $saveEncryptedWorldTemplatePacksAsZips() const;

    MCNAPI bool $saveEncryptedPersonaPacksAsZips() const;

    MCNAPI bool $allowsResourcePackDevelopment() const;

    MCNAPI bool $supportsLegacySinglePremiumCacheDirectory() const;

    MCNAPI bool $supportsWorldShare() const;

    MCNAPI bool $hasJournalingFilesystem() const;

    MCNAPI bool $isAutoCompactionEnabled() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000000>> $getLevelSaveInterval() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000000>> $getOptionsSaveInterval() const;

    MCNAPI bool $usePlatformProfilePicturesOnly() const;

    MCNAPI bool $allowBetaXblSignIn() const;

    MCNAPI bool $requiresXboxLiveSigninToPlay() const;

    MCNAPI bool $requiresLiveGoldForMultiplayer() const;

    MCNAPI bool $shouldRegisterForXboxLiveNotifications() const;

    MCNAPI bool $minimizeBackgroundDownloads() const;

    MCNAPI bool $requiresAutoSaveIconExplanationPopup() const;

    MCNAPI ::IPlatformScreenshots& $getPlatformScreenshots();

    MCNAPI uint $maxFileDataRequestConcurrency() const;

    MCNAPI float $getStoreNetworkFailureTimeout() const;

    MCNAPI std::shared_ptr<Core::FileStorageArea> $createLoggingStorageArea(::Core::FileAccessType, ::Core::PathView);

    MCNAPI uint $getPlatformErrorCodeForStoreError(::MarketplaceErrorUtils::StoreErrorResult const&);

    MCNAPI void $handlePlatformSpecificCommerceError(uint, std::string const&);

    MCNAPI bool $isEduMode() const;

    MCNAPI bool $importAsFlatFile() const;

    MCNAPI bool $isWebviewSupported() const;

    MCNAPI std::shared_ptr<WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;

    MCNAPI bool $getPlatformTTSExists() const;

    MCNAPI bool $getPlatformTTSEnabled() const;

    MCNAPI std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> $getRenderSurfaceParameters() const;

    MCNAPI bool $shouldRemoveGraphicsDeviceOnAppTermination() const;

    MCNAPI bool $isJoinableViaExternalServers() const;

    MCNAPI void $onPrimaryUserNetworkReady();

    MCNAPI bool $isDisplayInitialized() const;

    MCNAPI bool $usesAsyncOptionSaving() const;

    MCNAPI void $showPlatformStoreIcon(bool);

    MCNAPI void $showXboxLiveUserSettings();

    MCNAPI void $initializeGameStreaming();

    MCNAPI void $notifyNetworkConfigurationChanged();

    MCNAPI void $setKeepScreenOnFlag(bool);

    MCNAPI void $initializeMulticast() const;

    MCNAPI void $requestMulticastReceivePermission();

    MCNAPI bool $hasMulticastReceivePermission() const;

    MCNAPI void $releaseMulticastReceivePermission() const;

    MCNAPI void $onMinecraftGameInitComplete();

    MCNAPI void $onFullGameUnlock();

    MCNAPI bool $is24HourTimeFormat() const;

    MCNAPI ::Bedrock::Threading::Async<bool> $showOSUserDialog(std::string, std::string, std::string);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ThrottledFileWriteManager>> $getThrottledFileWriteManager() const;

    MCNAPI void $_notifyUriListeners(::ActivationUri const&, bool);

    MCNAPI bool $_tryEnableCPUBoost();

    MCNAPI void $_disableCPUBoost();

    MCNAPI ::Bedrock::CommonPlatform* $getPlatformShim() const;

    MCNAPI void $_initializeFileStorageAreas();

    MCNAPI void $_teardownFileStorageAreas();

    MCNAPI int $getPlatformDpi() const;

    MCNAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCNAPI void $_onInitialize();

    MCNAPI void $_onTeardown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
