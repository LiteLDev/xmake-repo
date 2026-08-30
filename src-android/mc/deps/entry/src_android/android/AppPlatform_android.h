#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/native_window.h"
#include "jni.h"
#include "mc/android/file/StorageAreaManager_android.h"
#include "mc/deps/application/AppAction.h"
#include "mc/deps/application/AppPlatform.h"
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/application/StoragePermissionResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/PermissionRequestReason.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class AndroidNetworkMonitor;
class FilePickerSettings;
class GameActivity;
class ImagePickingCallback;
class PDFWriter;
class PropertyBag;
class SecureStorage;
class SecureStorageKey;
class TaskGroup;
class WebviewInterface;
struct AndroidNetworkData;
struct AndroidSurfaceParameters;
struct GameActivity;
struct IntegrityTokenResult;
struct MC_ENGINE;
struct TextBoxSelection;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace Webview { class PlatformArguments; }
namespace mce { struct Image; }
// clang-format on

class AppPlatform_android : public ::AppPlatform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    _screenWidth;
    ::ll::TypedStorage<4, 4, int>                                    _screenHeight;
    ::ll::TypedStorage<4, 4, int>                                    _displayWidth;
    ::ll::TypedStorage<4, 4, int>                                    _displayHeight;
    ::ll::TypedStorage<8, 24, std::string>                           _modelName;
    ::ll::TypedStorage<8, 288, ::StorageAreaManager_android>         mStorageAreaManager;
    ::ll::UntypedStorage<8, 48>                                      mSetStorageLocationInOptions;
    ::ll::UntypedStorage<8, 48>                                      mSetStoragePathRoot;
    ::ll::UntypedStorage<8, 24>                                      mScratchPath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IntegrityTokenResult>>  mIntegrityTokenResult;
    ::ll::TypedStorage<1, 1, bool>                                   mIsAwaitingIntegrityToken;
    ::ll::TypedStorage<8, 8, ::GameActivity*>                        _gameActivity;
    ::ll::TypedStorage<1, 1, bool>                                   mIsTablet;
    ::ll::TypedStorage<4, 4, int>                                    mApiVersion;
    ::ll::TypedStorage<4, 4, int>                                    mSdkVersion;
    ::ll::TypedStorage<8, 16, std::shared_ptr<FilePickerSettings>>   mPickFileSettings;
    ::ll::TypedStorage<1, 1, bool>                                   mMulticastInitialized;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AndroidNetworkMonitor>> mNetworkMonitor;
    ::ll::UntypedStorage<8, 88>                                      mStorageDirectoryChangedSubscribers;
    ::ll::TypedStorage<8, 8, ::_jobject*>                            mInstance;
    ::ll::UntypedStorage<8, 8>                                       engine;
    ::ll::TypedStorage<8, 8, ::_JavaVM*>                             _vm;
    ::ll::TypedStorage<1, 1, bool>                                   _isInited;
    ::ll::UntypedStorage<8, 616>                                     mMainThreadQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>             mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                   mIsTextBoxFocused;
    ::ll::UntypedStorage<8, 16>                                      mAppPlatformServiceRegistrationToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AppPlatform_android();

    virtual ::Core::PathBuffer<std::string> getLoggingPath() const;

    virtual bool isNetworkEnabled(bool) const;

    virtual ::BuildPlatform getBuildPlatform() const;

    virtual std::string getPlatformString() const;

    virtual ulong getLowPhysicalMemoryThreshold() const;

    virtual ulong getTotalPhysicalMemory() const;

    virtual ulong getHighPerformanceThreadsCount() const;

    virtual void initializeGraphicsDeviceTier();

    virtual ::Core::PathBuffer<std::string> getPackagePath() const;

    virtual ::Core::PathBuffer<std::string> getDataUrl() const;

    virtual void loadPNG(::mce::Image&, ::Core::Path const&);

    virtual void loadTGA(::mce::Image&, ::Core::Path const&);

    virtual void loadJPEG(::mce::Image&, ::Core::Path const&);

    virtual int getKeyFromKeyCode(int, int, int);

    virtual void textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);

    virtual void textEditComponentLostFocus();

    virtual void showKeyboard(std::string const&, int, bool, bool, bool, int const, ::glm::vec<2, float, (glm::qualifier)0> const&, float, ::InputMode);

    virtual void hideKeyboard();

    virtual bool isFullScreenKeyboard() const;

    virtual bool actionSuspendsApp(::AppAction) const;

    virtual float getKeyboardHeight() const;

    virtual bool refocusMouse(bool, bool);

    virtual void hideMousePointer();

    virtual void showMousePointer();

    virtual void swapBuffers();

    virtual std::string getSystemLocale() const;

    virtual void pickImage(std::shared_ptr<ImagePickingCallback>);

    virtual void pickFile(std::shared_ptr<FilePickerSettings>);

    virtual bool supportsAlbumExport() const;

    virtual std::shared_ptr<PDFWriter> createPlatformPDFWriter();

    virtual void shareFile(::Core::Path const&, std::function<void (bool)>);

    virtual bool hasHardwareBackButton();

    virtual bool supportsFilePicking() const;

    virtual bool supportsTouch() const;

    virtual bool supportsKeyboardMouse() const;

    virtual bool supportsGamepad() const;

    virtual ::ClipboardFeatureFlags getClipboardFeatures() const;

    virtual void setClipboard(std::string const&) const;

    virtual bool supportsShare() const;

    virtual void share() const;

    virtual void openStoragePermissionRequest(::PermissionRequestReason, std::function<void (StoragePermissionResult)>);

    virtual void setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, std::function<void (bool)>);

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual void setStorageDirectoryChangeDenied(std::function<void (FileStorageDirectory)>);

    virtual ::Bedrock::PubSub::Subscription addStorageDirectoryChangedSubscriber(std::function<void (const Core::Path&)>);

    virtual void runStoragePermissionResultCallback(::StoragePermissionResult);

    virtual bool hasExternalStoragePermission();

    virtual void trialCorrelationStart();

    virtual double getTimeSFromProcessStart() const;

    virtual ::Bedrock::Threading::Async<IntegrityTokenResult> requestIntegrityToken(std::string const&);

    virtual void setIntegrityToken(std::string const&);

    virtual void setIntegrityTokenErrorMessage(std::string const&);

    virtual bool supportsInPackageRecursion() const;

    virtual void updateLocalization(std::string const&);

    virtual ::Core::PathBuffer<std::string> getSettingsPath();

    virtual ::Core::PathBuffer<std::string> getUserdataPathForLevels() const;

    virtual void showDialog(int);

    virtual void createUserInput();

    virtual int getUserInputStatus();

    virtual std::vector<std::string> getUserInput();

    virtual int getScreenWidth() const;

    virtual int getScreenHeight() const;

    virtual int getDisplayWidth();

    virtual int getDisplayHeight();

    virtual void setScreenSize(int, int);

    virtual bool allowContentLogWriteToDisk();

    virtual void queueForMainThread_DEPRECATED(std::function<void ()>);

    virtual ::MPMCQueue<std::function<void ()>>& getMainThreadQueue();

    virtual std::string getTextBoxBackend() const;

    virtual void setTextBoxBackend(std::string const&);

    virtual int getCaretPosition() const;

    virtual void setCaretPosition(int);

    virtual void setTextBoxSelection(::TextBoxSelection);

    virtual bool supportsVibration() const;

    virtual void vibrate(int);

    virtual ::Core::PathBuffer<std::string> getAssetFileFullPath(::Core::Path const&);

    virtual bool supportsClientUpdate() const;

    virtual std::string getClientUpdateUrl() const;

    virtual int checkLicense();

    virtual bool hasBuyButtonWhenInvalidLicense();

    virtual std::optional<bool> isOnWifiConnectionTelemetryValue();

    virtual void buyGame();

    virtual void finish();

    virtual bool canLaunchUri(std::string const&);

    virtual void launchUri(std::string const&);

    virtual void launchSettings();

    virtual ::PlatformType getPlatformType() const;

    virtual std::string getSubPlatformString() const;

    virtual std::string getPlatformStringVar(int);

    virtual std::string getApplicationId() const;

    virtual ulong getFreeMemory() const;

    virtual ulong getMemoryLimit() const;

    virtual ulong getUsedMemory();

    virtual ulong getLowMemoryEventThreshold(::LowMemorySeverity) const;

    virtual ulong getLowMemoryEventRecoveryThreshold(::LowMemorySeverity) const;

    virtual void readyForApplicationExitInfo() const;

    virtual ulong getDebugMemoryInfo(std::string const&) const;

    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    virtual std::vector<std::string> getBroadcastAddresses();

    virtual std::vector<std::string> getIPAddresses();

    virtual bool useAppPlatformForTelemetryIPAddress();

    virtual std::string getModelName();

    virtual std::string createUUID();

    virtual bool isTablet() const;

    virtual bool isNetworkThrottled() const;

    virtual std::string getEdition() const;

    virtual ::InputMode getDefaultInputMode() const;

    virtual ulong calculateAvailableDiskFreeSpace(::Core::Path const&);

    virtual bool supportsFliteTTS() const;

    virtual std::unique_ptr<SecureStorage> getSecureStorage();

    virtual ::SecureStorageKey getSecureStorageKey(std::string const&);

    virtual void setSecureStorageKey(std::string const&, ::SecureStorageKey const&);

    virtual bool shouldRegisterForXboxLiveNotifications() const;

    virtual bool importAsFlatFile() const;

    virtual bool isWebviewSupported() const;

    virtual std::shared_ptr<WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;

    virtual bool canAppSelfTerminate() const;

    virtual bool getPlatformTTSExists() const;

    virtual bool getPlatformTTSEnabled() const;

    virtual std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> getRenderSurfaceParameters() const;

    virtual void setKeepScreenOnFlag(bool);

    virtual void initializeMulticast() const;

    virtual void requestMulticastReceivePermission();

    virtual bool hasMulticastReceivePermission() const;

    virtual void releaseMulticastReceivePermission() const;

    virtual bool is24HourTimeFormat() const;

    virtual ::Core::PathBuffer<std::string> _getCurrentStoragePath() const;

    virtual ::Core::PathBuffer<std::string> _getExternalStoragePath() const;

    virtual ::Core::PathBuffer<std::string> _getInternalStoragePath() const;

    virtual ::Core::PathBuffer<std::string> _getUserdataPath() const;

    virtual ::Core::PathBuffer<std::string> _getSharedDataPath() const;

    virtual void _teardownFileStorageAreas();

    virtual int getPlatformDpi() const;

    virtual ::UIScalingRules getPlatformUIScalingRules() const;

    virtual ::Core::PathBuffer<std::string> getPlatformTempPath() const;

    virtual void _onInitialize();

    virtual void _onTeardown();

    virtual void initWithActivity(::GameActivity*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform_android();

    MCNAPI std::string _CallStringMethod(::_JNIEnv*, ::_jmethodID*);

    MCNAPI void _loadImageViaJNI(::mce::Image&, ::Core::Path const&);

    MCNAPI void copyToPickedFile(::Core::Path const&);

    MCNAPI std::shared_ptr<FilePickerSettings> getPickFileSettings() const;

    MCNAPI int init(::_JavaVM*);

    MCNAPI int initConsts(::MC_ENGINE*);

    MCNAPI bool isTextBoxFocused() const;

    MCNAPI void setApiVersion(int);

    MCNAPI void update();
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
    MCNAPI ::Core::PathBuffer<std::string> $getLoggingPath() const;

    MCNAPI bool $isNetworkEnabled(bool) const;

    MCNAPI ::BuildPlatform $getBuildPlatform() const;

    MCNAPI std::string $getPlatformString() const;

    MCNAPI ulong $getLowPhysicalMemoryThreshold() const;

    MCNAPI ulong $getTotalPhysicalMemory() const;

    MCNAPI ulong $getHighPerformanceThreadsCount() const;

    MCNAPI void $initializeGraphicsDeviceTier();

    MCNAPI ::Core::PathBuffer<std::string> $getPackagePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getDataUrl() const;

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

    MCNAPI bool $isFullScreenKeyboard() const;

    MCNAPI bool $actionSuspendsApp(::AppAction) const;

    MCNAPI float $getKeyboardHeight() const;

    MCNAPI bool $refocusMouse(bool, bool);

    MCNAPI void $hideMousePointer();

    MCNAPI void $showMousePointer();

    MCNAPI void $swapBuffers();

    MCNAPI std::string $getSystemLocale() const;

    MCNAPI void $pickImage(std::shared_ptr<ImagePickingCallback>);

    MCNAPI void $pickFile(std::shared_ptr<FilePickerSettings>);

    MCNAPI bool $supportsAlbumExport() const;

    MCNAPI std::shared_ptr<PDFWriter> $createPlatformPDFWriter();

    MCNAPI void $shareFile(::Core::Path const&, std::function<void(bool)>);

    MCNAPI bool $hasHardwareBackButton();

    MCNAPI bool $supportsFilePicking() const;

    MCNAPI bool $supportsTouch() const;

    MCNAPI bool $supportsKeyboardMouse() const;

    MCNAPI bool $supportsGamepad() const;

    MCNAPI ::ClipboardFeatureFlags $getClipboardFeatures() const;

    MCNAPI void $setClipboard(std::string const&) const;

    MCNAPI bool $supportsShare() const;

    MCNAPI void $share() const;

    MCNAPI void $openStoragePermissionRequest(::PermissionRequestReason, std::function<void(StoragePermissionResult)>);

    MCNAPI void $setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, std::function<void(bool)>);

    MCNAPI ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory);

    MCNAPI ::FileStorageDirectory $getStorageDirectory() const;

    MCNAPI void $setStorageDirectoryChangeDenied(std::function<void(FileStorageDirectory)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        $addStorageDirectoryChangedSubscriber(std::function<void(const Core::Path&)>);

    MCNAPI void $runStoragePermissionResultCallback(::StoragePermissionResult);

    MCNAPI bool $hasExternalStoragePermission();

    MCNAPI void $trialCorrelationStart();

    MCNAPI double $getTimeSFromProcessStart() const;

    MCNAPI ::Bedrock::Threading::Async<IntegrityTokenResult> $requestIntegrityToken(std::string const&);

    MCNAPI void $setIntegrityToken(std::string const&);

    MCNAPI void $setIntegrityTokenErrorMessage(std::string const&);

    MCNAPI bool $supportsInPackageRecursion() const;

    MCNAPI void $updateLocalization(std::string const&);

    MCNAPI ::Core::PathBuffer<std::string> $getSettingsPath();

    MCNAPI ::Core::PathBuffer<std::string> $getUserdataPathForLevels() const;

    MCNAPI void $showDialog(int);

    MCNAPI void $createUserInput();

    MCNAPI int $getUserInputStatus();

    MCNAPI std::vector<std::string> $getUserInput();

    MCNAPI int $getScreenWidth() const;

    MCNAPI int $getScreenHeight() const;

    MCNAPI int $getDisplayWidth();

    MCNAPI int $getDisplayHeight();

    MCNAPI void $setScreenSize(int, int);

    MCNAPI bool $allowContentLogWriteToDisk();

    MCNAPI void $queueForMainThread_DEPRECATED(std::function<void()>);

    MCNAPI ::MPMCQueue<std::function<void()>>& $getMainThreadQueue();

    MCNAPI std::string $getTextBoxBackend() const;

    MCNAPI void $setTextBoxBackend(std::string const&);

    MCNAPI int $getCaretPosition() const;

    MCNAPI void $setCaretPosition(int);

    MCNAPI void $setTextBoxSelection(::TextBoxSelection);

    MCNAPI bool $supportsVibration() const;

    MCNAPI void $vibrate(int);

    MCNAPI ::Core::PathBuffer<std::string> $getAssetFileFullPath(::Core::Path const&);

    MCNAPI bool $supportsClientUpdate() const;

    MCNAPI std::string $getClientUpdateUrl() const;

    MCNAPI int $checkLicense();

    MCNAPI bool $hasBuyButtonWhenInvalidLicense();

    MCNAPI std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCNAPI void $buyGame();

    MCNAPI void $finish();

    MCNAPI bool $canLaunchUri(std::string const&);

    MCNAPI void $launchUri(std::string const&);

    MCNAPI void $launchSettings();

    MCNAPI ::PlatformType $getPlatformType() const;

    MCNAPI std::string $getSubPlatformString() const;

    MCNAPI std::string $getPlatformStringVar(int);

    MCNAPI std::string $getApplicationId() const;

    MCNAPI ulong $getFreeMemory() const;

    MCNAPI ulong $getMemoryLimit() const;

    MCNAPI ulong $getUsedMemory();

    MCNAPI ulong $getLowMemoryEventThreshold(::LowMemorySeverity) const;

    MCNAPI ulong $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity) const;

    MCNAPI void $readyForApplicationExitInfo() const;

    MCNAPI ulong $getDebugMemoryInfo(std::string const&) const;

    MCNAPI ::DeviceSunsetTier $getDeviceSunsetTier() const;

    MCNAPI std::vector<std::string> $getBroadcastAddresses();

    MCNAPI std::vector<std::string> $getIPAddresses();

    MCNAPI bool $useAppPlatformForTelemetryIPAddress();

    MCNAPI std::string $getModelName();

    MCNAPI std::string $createUUID();

    MCNAPI bool $isTablet() const;

    MCNAPI bool $isNetworkThrottled() const;

    MCNAPI std::string $getEdition() const;

    MCNAPI ::InputMode $getDefaultInputMode() const;

    MCNAPI ulong $calculateAvailableDiskFreeSpace(::Core::Path const&);

    MCNAPI bool $supportsFliteTTS() const;

    MCNAPI std::unique_ptr<SecureStorage> $getSecureStorage();

    MCNAPI ::SecureStorageKey $getSecureStorageKey(std::string const&);

    MCNAPI void $setSecureStorageKey(std::string const&, ::SecureStorageKey const&);

    MCNAPI bool $shouldRegisterForXboxLiveNotifications() const;

    MCNAPI bool $importAsFlatFile() const;

    MCNAPI bool $isWebviewSupported() const;

    MCNAPI std::shared_ptr<WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;

    MCNAPI bool $canAppSelfTerminate() const;

    MCNAPI bool $getPlatformTTSExists() const;

    MCNAPI bool $getPlatformTTSEnabled() const;

    MCNAPI std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> $getRenderSurfaceParameters() const;

    MCNAPI void $setKeepScreenOnFlag(bool);

    MCNAPI void $initializeMulticast() const;

    MCNAPI void $requestMulticastReceivePermission();

    MCNAPI bool $hasMulticastReceivePermission() const;

    MCNAPI void $releaseMulticastReceivePermission() const;

    MCNAPI bool $is24HourTimeFormat() const;

    MCNAPI ::Core::PathBuffer<std::string> $_getCurrentStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $_getExternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $_getInternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $_getUserdataPath() const;

    MCNAPI ::Core::PathBuffer<std::string> $_getSharedDataPath() const;

    MCNAPI void $_teardownFileStorageAreas();

    MCNAPI int $getPlatformDpi() const;

    MCNAPI ::UIScalingRules $getPlatformUIScalingRules() const;

    MCNAPI ::Core::PathBuffer<std::string> $getPlatformTempPath() const;

    MCNAPI void $_onInitialize();

    MCNAPI void $_onTeardown();

    MCNAPI void $initWithActivity(::GameActivity*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
