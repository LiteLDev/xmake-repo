#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "android/native_window.h"
#else // @header-generator platform
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/platform/PlatformType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/secure_storage/ISecureStorageKeySystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/UniqueService.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/UIProfile.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActivationUri;
#else // @header-generator platform
#endif // @header-generator platform
class AppPlatformListener;
class AppPlatformNetworkSettings;
class BatteryMonitorInterface;
class FilePickerSettings;
class HardwareMemoryTierUtil;
class IAppPlatformImpl;
class IFileAccess;
class IPlatformScreenshots;
#if defined(LL_PLAT_A) // @header-generator platform
class ImagePickingCallback;
class NetworkChangeObserver;
#else // @header-generator platform
#endif // @header-generator platform
class PDFWriter;
class PropertyBag;
#if defined(LL_PLAT_A) // @header-generator platform
class PushNotificationMessage;
class RectangleArea;
#else // @header-generator platform
#endif // @header-generator platform
class SecureStorage;
class SecureStorageKey;
#if defined(LL_PLAT_A) // @header-generator platform
class SuspendHandler;
#else // @header-generator platform
#endif // @header-generator platform
class ThermalMonitorInterface;
#if defined(LL_PLAT_A) // @header-generator platform
class ThrottledFileWriteManager;
#else // @header-generator platform
#endif // @header-generator platform
class UriListener;
class WebviewInterface;
#if defined(LL_PLAT_A) // @header-generator platform
struct AndroidSurfaceParameters;
#else // @header-generator platform
#endif // @header-generator platform
struct IntegrityTokenResult;
struct TextBoxSelection;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPaste; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Bedrock { class CommonPlatform; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
namespace mce { class UUID; }
namespace mce { struct Image; }
class ActivationUri;
class ImagePickingCallback;
class NetworkChangeObserver;
class PushNotificationMessage;
class RectangleArea;
class ThrottledFileWriteManager;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPaste; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Bedrock { class CommonPlatform; }
#endif // @header-generator platform
namespace MarketplaceErrorUtils { struct StoreErrorResult; }
namespace Social { struct UserCreationData; }
namespace Webview { class PlatformArguments; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
namespace mce { struct Image; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool> mSpeculative;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnka0c5b9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ReadMode& operator=(ReadMode const&);
        ReadMode(ReadMode const&);
        ReadMode();
#endif // @header-generator platform
    };

    using Listener = ::AppPlatformListener;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong> mFreeMemoryMaximumBytes;
    ::ll::TypedStorage<1, 1, bool> mRequestedRestart;
    ::ll::TypedStorage<1, 1, bool> mPointerFocusLost;
    ::ll::TypedStorage<1, 1, bool> mKeyboardVisible;
    ::ll::TypedStorage<1, 1, bool> mOnInitUriListenerRegDone;
    ::ll::TypedStorage<8, 24, std::multimap<float, AppPlatformListener*>> mListeners;
    ::ll::UntypedStorage<8, 64> mNetworkChangeSubject;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                                          mFreeMemoryMaximumBytes;
    ::ll::TypedStorage<1, 1, bool>                                            mRequestedRestart;
    ::ll::TypedStorage<1, 1, bool>                                            mPointerFocusLost;
    ::ll::TypedStorage<1, 1, bool>                                            mKeyboardVisible;
    ::ll::TypedStorage<1, 1, bool>                                            mOnInitUriListenerRegDone;
    ::ll::TypedStorage<8, 16, ::std::multimap<float, ::AppPlatformListener*>> mListeners;
    ::ll::TypedStorage<8, 104, ::Core::Subject<::NetworkChangeObserver, ::Bedrock::Threading::Mutex>>
                                                      mNetworkChangeSubject;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::NetworkConnectionType> mNetworkConnectionType;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    ::ll::TypedStorage<8, 8, void*>                                                     mHWND;
    ::ll::TypedStorage<8, 64, ::std::unordered_multimap<::std::string, ::UriListener*>> mUriListeners;
#endif
    ::ll::TypedStorage<8, 64, ::std::function<void(::StoragePermissionResult)>> mStoragePermissionRequestResultCallback;
    ::ll::TypedStorage<1, 4, ::AppLifecycleContext>                             mAppLifecycleContext;
    ::ll::TypedStorage<4, 4, ::AppFocusState>                                   mFocusState;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mShareLock;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mShareTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mShareText;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mShareUri;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IFileAccess>>                  mDefaultFileAccess;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IFileAccess>>                  mPackageFileAccess;
    ::ll::TypedStorage<8, 8, uint64>                                            mMaximumMemoryUsage;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mLocale;
    ::ll::TypedStorage<8, 8, double>                                            mActiveSeconds;
    ::ll::TypedStorage<8, 8, double>                                            mLastActiveTime;
    ::ll::TypedStorage<1, 1, bool>                                              mAppIsActive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                   mDeviceTier;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AppPlatformNetworkSettings>>   mAppPlatformNetworkSettings;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                               mTerminating;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                               mSuspended;
    ::ll::TypedStorage<4, 4, int>                                               mForcedDpi;
    ::ll::TypedStorage<4, 4, ::UIScalingRules>                                  mForcedUIScalingRules;
    ::ll::TypedStorage<1, 1, bool>                                              mForceUIScalingRules;
    ::ll::TypedStorage<1, 1, bool>                                              mShowLostFocusToasts;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowLostFocusToasts;
    ::ll::TypedStorage<1, 1, bool>                                              mAreThreadsFrozen;
    ::ll::TypedStorage<1, 1, bool>                                              mIsLowMemoryDevice;
    ::ll::TypedStorage<1, 1, bool>                                              mIsLowPhysicalMemoryDevice;
    ::ll::TypedStorage<1, 1, bool>                                              mIsUserStorageInitialized;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mScratchPath;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mScratchPathMutex;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mLastDeviceSessionId;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                           mListenerLock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::SignalReceiver>>      mSignalRcvr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PlatformRuntimeInfo>> mPlatformRuntimeInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PlatformBuildInfo>>   mPlatformBuildInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueService<::Core::LoadTimeProfiler>>          mProfiler;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueService<::Bedrock::IApplicationDataStores>> mApplicationDataStores;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueService<::Bedrock::DeviceIdManager>>        mDeviceIdManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueService<::Bedrock::FilePickerManager>>      mFilePickerManager;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::AppPlatform>> mAppPlatformServiceRegistrationToken;
    ::ll::TypedStorage<4, 4, uint>                                      mCPUBoostCounter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mLoadTimerOptionSubscription;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::LowMemorySeverity), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
                                                                          mOnLowMemory;
    ::ll::TypedStorage<8, 8, int64>                                       mCurrentMemorySeverityIdx;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::HardwareMemoryTierUtil>> mHardwareMemoryTierUtil;
#ifdef LL_PLAT_C
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ThrottledFileWriteManager>> mThrottledFileWriteManager;
#endif
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IAppPlatformImpl>>> mImpl;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                           mArchiveHandlePoolMutex;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Core::FileHandlePool>>               mArchiveHandlePool;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~AppPlatform() /*override*/;
#endif // @header-generator platform

    virtual void initialize();

    virtual void teardown();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getHighPerformanceThreadsCount() const;
#else // @header-generator platform
    virtual void initAppPlatformNetworkSettings() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalHardwareThreadsCount() const;
#else // @header-generator platform
    virtual uint64 getHighPerformanceThreadsCount() const;

    virtual uint64 getTotalHardwareThreadsCount() const;
#endif // @header-generator platform

    virtual void initializeGraphicsDeviceTier();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addListener(::AppPlatformListener*, float);
#else // @header-generator platform
    virtual void addListener(::AppPlatformListener* l, float priority);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeListener(::AppPlatformListener*);
#else // @header-generator platform
    virtual void removeListener(::AppPlatformListener* l);
#endif // @header-generator platform

    virtual ::ProcessExecutionState getProcessExecutionState() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void restartApp(bool);
#else // @header-generator platform
    virtual void restartApp(bool restart);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPackagePath() const = 0;
#else // @header-generator platform
    virtual bool restartRequested() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getDataUrl() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPackagePath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadPNG(::mce::Image&, ::Core::Path const&);
#else // @header-generator platform
    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadTGA(::mce::Image&, ::Core::Path const&);
#else // @header-generator platform
    virtual bool const areTreatmentPacksThrottled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadJPEG(::mce::Image&, ::Core::Path const&);
#else // @header-generator platform
    virtual ::HardwareMemoryTierUtil const& getHardwareMemoryTierUtil() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getKeyFromKeyCode(int, int, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::Core::PathBuffer<::std::string> getDataUrl() const = 0;

    virtual void loadPNG(::mce::Image& out, ::Core::Path const& filename);

    virtual void loadTGA(::mce::Image& out, ::Core::Path const& filename);

    virtual void loadJPEG(::mce::Image& out, ::Core::Path const& filename);

    virtual int getKeyFromKeyCode(int, int, int);

    virtual void textEditComponentGainedFocus(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline
    );

    virtual void textEditComponentLostFocus();

    virtual void showKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        int const            controllerId,
        ::glm::vec2 const&   position,
        float                controlHeight,
        ::InputMode          inputMode
    );

    virtual void hideKeyboard();

    virtual bool blankLineDismissesChat() const;

    virtual bool signWrapsTextEntry() const;

    virtual bool isFullScreenKeyboard() const;

    virtual bool actionSuspendsApp(::AppAction) const;

    virtual float getKeyboardHeight() const;

    virtual bool refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    virtual void setMousePointerType(::Bedrock::Input::PointerType pointerType);

    virtual void hideMousePointer();

    virtual void showMousePointer();

    virtual void postInteractiveSignIn();

    virtual bool useHardwareMouse();

    virtual void provideHardwareMouseImageData(::mce::Image const&);

    virtual bool hasCustomSoftwareCursor() const;

    virtual ::Core::PathBuffer<::std::string> getCustomSoftwareCursorAsset() const;

    virtual bool getPointerFocus();

    virtual void setPointerFocus(bool lostFocus);

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

    virtual ::std::string getSystemLocale() const = 0;

    virtual ::std::string getTermsOfUseHyperlink() const;

    virtual void pickImage(::std::shared_ptr<::ImagePickingCallback> callback) = 0;

    virtual void pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    virtual bool supportsAlbumExport() const;

    virtual bool supportsPDFExport() const;

    virtual ::std::shared_ptr<::PDFWriter> createPlatformPDFWriter();

    virtual void shareFile(::Core::Path const&, ::std::function<void(bool)>);

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

    virtual void setClipboard(::std::string const& value) const;

    virtual ::std::wstring getClipboardText() const;

    virtual void getClipboardTextAsync(::std::function<void(::std::string const&)>) const;

    virtual bool supportsShare() const;

    virtual void share() const;

    virtual bool allowSplitScreen();

    virtual float splitScreenRenderDistScalar(uint numPlayers);

    virtual float uiOpenRenderDistScalar();

    virtual void pushNotificationReceived(::PushNotificationMessage const& msg);

    virtual void openStoragePermissionRequest(
        ::PermissionRequestReason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    virtual void setStorageDirectory(
        ::FileStorageDirectory      dir,
        bool                        isCallback,
        ::PropertyBag const&        extraData,
        ::std::function<void(bool)> onComplete
    );

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual void setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)>);

    virtual ::Bedrock::PubSub::Subscription
    addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)> callback);

    virtual void runStoragePermissionResultCallback(::StoragePermissionResult result);

    virtual bool hasExternalStoragePermission();

    virtual bool delayOptionSaveUntilCloudSync() const;

    virtual void updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    );

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const;

    virtual void trialCorrelationStart();

    virtual void setAllowLostFocusToasts(bool allowLostFocusToasts);

    virtual void setShowLostFocusToasts(bool showLostFocusToasts);

    virtual bool getShowLostFocusToasts();

    virtual double getTimeSFromProcessStart() const = 0;

#endif
    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const& nonceToken);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);
#else // @header-generator platform
    virtual void setIntegrityToken(::std::string const& integrityToken);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void setIntegrityTokenErrorMessage(::std::string const& errorMessage);
#endif // @header-generator platform

    virtual bool supportsInPackageRecursion() const;

    virtual bool supportsXboxLiveAchievements() const;

    virtual void hideSplashScreen();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFeedbackBugsLink() const;
#else // @header-generator platform
    virtual ::std::string getFeedbackBugsLink() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFeedbackHelpLink() const;
#else // @header-generator platform
    virtual ::std::string getFeedbackHelpLink() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse(*)(std::string const&, std::string const&);
#else // @header-generator platform
    virtual auto getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateLocalization(std::string const&);
#else // @header-generator platform
    virtual void updateLocalization(::std::string const&);
#endif // @header-generator platform

    virtual void setSleepEnabled(bool);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getScratchPath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getInternalPackStoragePath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getInternalPackStoragePath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getSettingsPath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getSettingsPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPackagedShaderCachePath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getShaderCachePath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getUserdataPathForLevels() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getShaderCachePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getCacheStoragePath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getUserdataPathForLevels() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getTextureCacheStoragePath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getCacheStoragePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getOnDiskScratchPath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getTextureCacheStoragePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getOnDiskPackScratchPath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getOnDiskScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getLevelInfoCachePath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getOnDiskPackScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getCatalogSearchScratchPath();
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getLevelInfoCachePath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getUserStorageRootPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getCatalogSearchScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const;

    virtual ::std::shared_ptr<::Core::FileStorageArea> getOrCreateStorageAreaForUser(::Social::UserCreationData const&);
#endif // @header-generator platform

    virtual bool hasSeparatedStorageAreasForContentAcquisition() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getOptimalLDBSize();
#else // @header-generator platform
    virtual uint64 getOptimalLDBSize();
#endif // @header-generator platform

    virtual int getMaxLDBFilesOpen() const;

    virtual bool getDisableLDBSeekCompactions() const;

    virtual void showDialog(int);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createUserInput(int);

#else // @header-generator platform
#endif // @header-generator platform
    virtual void createUserInput();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual void createUserInput(int dialogId);
#endif // @header-generator platform

    virtual int getUserInputStatus();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getUserInput();
#else // @header-generator platform
    virtual ::std::vector<::std::string> getUserInput();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> getFileAccess(::ResourceFileSystem);
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem fileSystem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> copyImportFileToTempFolder(::Core::Path const&);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath);
#endif // @header-generator platform

    virtual void registerFileForCollectionWithCrashDump(::Core::Path const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerExperimentsActiveCrashDump(std::vector<std::string> const&) const;
#else // @header-generator platform
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;
#endif // @header-generator platform

    virtual int getScreenWidth() const;

    virtual int getScreenHeight() const;

    virtual int getDisplayWidth();

    virtual int getDisplayHeight();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setScreenSize(int, int);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void setScreenSize(int, int);
#else // LL_PLAT_C
    virtual void setScreenSize(int width, int height);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWindowSize(int, int);
#else // @header-generator platform
    virtual void setWindowSize(int width, int height);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWindowText(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void setWindowText(::std::string const& title);
#else // LL_PLAT_C
    virtual void setWindowText(::std::string const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<OperationMode> getOperationMode() const;
#else // @header-generator platform
    virtual ::std::optional<::OperationMode> getOperationMode() const;
#endif // @header-generator platform

    virtual bool allowContentLogWriteToDisk();

    virtual uint getMaxClubsRequests() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void queueForMainThread_DEPRECATED(std::function<void ()>) = 0;
#else // @header-generator platform
    virtual void queueForMainThread_DEPRECATED(::std::function<void()> callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MPMCQueue<std::function<void ()>>& getMainThreadQueue() = 0;
#else // @header-generator platform
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() = 0;
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getTextBoxBackend() const = 0;
#else // @header-generator platform
    virtual ::std::string getTextBoxBackend() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTextBoxBackend(std::string const&) = 0;
#else // @header-generator platform
    virtual void setTextBoxBackend(::std::string const& newText) = 0;
#endif // @header-generator platform

    virtual int getCaretPosition() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCaretPosition(int) = 0;
#else // @header-generator platform
    virtual void setCaretPosition(int position) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTextBoxSelection(::TextBoxSelection);
#else // @header-generator platform
    virtual void setTextBoxSelection(::TextBoxSelection selection);
#endif // @header-generator platform

    virtual bool supportsVibration() const;

    virtual void vibrate(int);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getAssetFileFullPath(::Core::Path const&);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> _readAssetFileInternal(::Core::PathView);
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> _readAssetFileInternal(::Core::PathView filename);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAssetFile(::Core::Path const&);
#else // @header-generator platform
    virtual bool hasAssetFile(::Core::Path const& filename);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool copyAssetFile(::Core::Path const&, ::Core::Path const&);
#else // @header-generator platform
    virtual bool copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::set<Core::PathBuffer<std::string>> listAssetFilesIn(::Core::Path const&, std::string const&) const;
#else // @header-generator platform
    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;
#endif // @header-generator platform

    virtual bool supportsClientUpdate() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getClientUpdateUrl() const;
#else // @header-generator platform
    virtual ::std::string getClientUpdateUrl() const;
#endif // @header-generator platform

    virtual int checkLicense();

    virtual bool hasBuyButtonWhenInvalidLicense();

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual bool isNetworkAvailable() const /*override*/;

    virtual bool isLANAvailable() const /*override*/;

    virtual bool isNetworkEnabled(bool) const /*override*/;

#endif // @header-generator platform
    virtual void setNetworkAllowed(bool);

    virtual bool isNetworkAllowed() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<bool> isOnWifiConnectionTelemetryValue();
#else // @header-generator platform
    virtual bool isInternetAvailable() const /*override*/;

    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue();
#endif // @header-generator platform

    virtual ::NetworkConnectionType getNetworkConnectionType();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setNetworkConnectionType(::NetworkConnectionType);
#else // @header-generator platform
    virtual void setNetworkConnectionType(::NetworkConnectionType connectionType);

    virtual int getDefaultNetworkMaxPlayers() const /*override*/;

    virtual bool multiplayerRequiresPremiumAccess() const /*override*/;

    virtual bool multiplayerRequiresUGCEnabled() const /*override*/;
#endif // @header-generator platform

    virtual bool isCrossPlatformToggleVisible() const;

    virtual bool isTelemetryAllowed();

    virtual bool isTrialWorldsTransferToFullGameAllowed() const;

    virtual void buyGame();

    virtual void finish();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canLaunchUri(std::string const&);
#else // @header-generator platform
    virtual bool canLaunchUri(::std::string const& uri);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void launchUri(std::string const&);
#else // @header-generator platform
    virtual void launchUri(::std::string const& uri);
#endif // @header-generator platform

    virtual void launchSettings();

    virtual bool useXboxControlHelpers() const;

    virtual ::PlatformType getPlatformType() const;

    virtual bool isCentennial() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPackageFamilyName() const;
#else // @header-generator platform
    virtual ::std::string getPackageFamilyName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getSubPlatformString() const = 0;
#else // @header-generator platform
    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    virtual ::std::string getSubPlatformString() const = 0;
#endif // @header-generator platform

    virtual int getNumberOfParticleFramesToInterpolate() const;

    virtual int getDpi() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDpi(int);
#else // @header-generator platform
    virtual void setDpi(int dpi);
#endif // @header-generator platform

    virtual ::UIScalingRules getUIScalingRules() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUIScalingRules(::UIScalingRules);
#else // @header-generator platform
    virtual void setUIScalingRules(::UIScalingRules UIScalingRules);
#endif // @header-generator platform

    virtual bool hasIDEProfiler();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPlatformStringVar(int);
#else // @header-generator platform
    virtual ::std::string getPlatformStringVar(int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getApplicationId() const = 0;
#else // @header-generator platform
    virtual ::std::string getApplicationId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getFreeMemory() const = 0;
#else // @header-generator platform
    virtual uint64 getFreeMemory() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getMemoryLimit() const = 0;
#else // @header-generator platform
    virtual uint64 getMemoryLimit() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getUsedMemory() = 0;
#else // @header-generator platform
    virtual uint64 getUsedMemory() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getMaximumUsedMemory();
#else // @header-generator platform
    virtual uint64 getTotalPhysicalMemory() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getLowMemoryEventThreshold(::LowMemorySeverity) const;
#else // @header-generator platform
    virtual uint64 getMaximumUsedMemory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getLowMemoryEventRecoveryThreshold(::LowMemorySeverity) const;
#else // @header-generator platform
    virtual uint64 getLowMemoryEventThreshold(::LowMemorySeverity) const;

    virtual uint64 getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;

    virtual uint64 getLowPhysicalMemoryThreshold() const /*override*/;
#endif // @header-generator platform

    virtual void calculateIfLowMemoryDevice();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTextureMemoryBudget() const;
#else // @header-generator platform
    virtual bool isLowMemoryDevice() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSingleMipDefaultMemoryBudget() const;
#else // @header-generator platform
    virtual bool isLowPhysicalMemoryDevice() const /*override*/;

    virtual uint64 getTextureMemoryBudget() const;

    virtual uint64 getSingleMipDefaultMemoryBudget() const;
#endif // @header-generator platform

    virtual void readyForApplicationExitInfo() const;
#if defined(LL_PLAT_A) // @header-generator platform

    virtual ulong getDebugMemoryInfo(std::string const&) const = 0;
#else // @header-generator platform
#endif // @header-generator platform

    virtual ::DeviceSunsetTier getDeviceSunsetTier() const;

    virtual int getMaxSimRadiusInChunks() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getBroadcastAddresses();
#else // @header-generator platform
    virtual ::std::vector<::std::string> getBroadcastAddresses();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getIPAddresses();
#else // @header-generator platform
    virtual ::std::vector<::std::string> getIPAddresses();
#endif // @header-generator platform

    virtual bool useAppPlatformForTelemetryIPAddress();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getModelName();
#else // @header-generator platform
    virtual ::std::string getModelName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getModelNameForUI();
#else // @header-generator platform
    virtual ::std::string getModelNameForUI();
#endif // @header-generator platform

    virtual void updateBootstrapSettingsFromTreatmentsAsync();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string createUUID() = 0;

    virtual bool isTablet() const = 0;

    virtual void registerUriListener(std::string const&, ::UriListener&);

    virtual void registerUriListener(::UriListener&);

    virtual void unregisterUriListener(::UriListener const&);

    virtual void notifyUriListeners(::ActivationUri const&);

    virtual void notifyUriListenerRegistrationDone();

    virtual void setFullscreenMode(::FullscreenMode const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::std::string getDeviceId() const /*override*/;

    virtual ::std::string createUUID() = 0;

    virtual bool isTablet() const = 0;

    virtual void registerUriListener(::UriListener& listener);

    virtual void registerUriListener(::std::string const& verb, ::UriListener& listener);

    virtual void unregisterUriListener(::UriListener const& listener);

    virtual void notifyUriListeners(::ActivationUri const& uri);

    virtual void notifyUriListenerRegistrationDone();

#endif
    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode);
#endif // @header-generator platform

    virtual bool isNetworkThrottled() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual bool isLANAllowed() const /*override*/;
#endif // @header-generator platform

    virtual bool doesLANRequireMultiplayerRestrictions() const;

    virtual void collectGraphicsHardwareDetails();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getEdition() const;
#else // @header-generator platform
    virtual ::std::string getEdition() const;
#endif // @header-generator platform

    virtual ::OsVersion getOSVersion() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setThreadsFrozen(bool);
#else // @header-generator platform
    virtual void setThreadsFrozen(bool frozen);
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong calculateAvailableDiskFreeSpace(::Core::Path const&) = 0;
#else // @header-generator platform
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const& rootPath) = 0;
#endif // @header-generator platform

    virtual bool supportsFliteTTS() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<SecureStorage> getSecureStorage();
#else // @header-generator platform
    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SecureStorageKey getSecureStorageKey(std::string const&);
#else // @header-generator platform
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSecureStorageKey(std::string const&, ::SecureStorageKey const&);
#else // @header-generator platform
    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;
#endif // @header-generator platform

    virtual bool devHotReloadRenderResources() const;

    virtual bool shouldPauseDownloadsWhenEnterGame() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool compareAppReceiptToLocalReceipt(std::string const&);
#else // @header-generator platform
    virtual bool compareAppReceiptToLocalReceipt(::std::string const&);
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::chrono::duration<long long, std::ratio<1, 1000000000>> getLevelSaveInterval() const;
#else // @header-generator platform
    virtual ::std::chrono::nanoseconds getLevelSaveInterval() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::chrono::duration<long long, std::ratio<1, 1000000000>> getOptionsSaveInterval() const;
#else // @header-generator platform
    virtual ::std::chrono::nanoseconds getOptionsSaveInterval() const;

    virtual bool hasPlatformSpecificInvites() const /*override*/;
#endif // @header-generator platform

    virtual bool usePlatformProfilePicturesOnly() const;

    virtual bool allowBetaXblSignIn() const;

    virtual bool requiresXboxLiveSigninToPlay() const;

    virtual bool requiresLiveGoldForMultiplayer() const;

    virtual bool shouldRegisterForXboxLiveNotifications() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual bool isRealmsEnabled() const /*override*/;

#endif // @header-generator platform
    virtual bool minimizeBackgroundDownloads() const;

    virtual bool requiresAutoSaveIconExplanationPopup() const;

    virtual ::IPlatformScreenshots& getPlatformScreenshots();

    virtual uint maxFileDataRequestConcurrency() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual void goToExternalConsumablesStoreListing() const /*override*/;

#endif // @header-generator platform
    virtual float getStoreNetworkFailureTimeout() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Core::FileStorageArea> createLoggingStorageArea(::Core::FileAccessType, ::Core::PathView);
#else // @header-generator platform
    virtual ::std::shared_ptr<::Core::FileStorageArea>
    createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);
#endif // @header-generator platform

    virtual uint getPlatformErrorCodeForStoreError(::MarketplaceErrorUtils::StoreErrorResult const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handlePlatformSpecificCommerceError(uint, std::string const&);
#else // @header-generator platform
    virtual void handlePlatformSpecificCommerceError(uint, ::std::string const&);
#endif // @header-generator platform

    virtual bool isEduMode() const;

    virtual bool importAsFlatFile() const;

    virtual bool isWebviewSupported() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&& args) const;
#else // LL_PLAT_C
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const;
#endif
#endif // @header-generator platform

    virtual bool canAppSelfTerminate() const = 0;

    virtual bool getPlatformTTSExists() const;

    virtual bool getPlatformTTSEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> getRenderSurfaceParameters() const;
#else // @header-generator platform
    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const;
#endif // @header-generator platform

    virtual bool shouldRemoveGraphicsDeviceOnAppTermination() const;

    virtual bool isJoinableViaExternalServers() const;

    virtual void onPrimaryUserNetworkReady();

    virtual bool isDisplayInitialized() const;

    virtual bool usesAsyncOptionSaving() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void showPlatformStoreIcon(bool);
#else // @header-generator platform
    virtual void showPlatformStoreIcon(bool shouldShow);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void showXboxLiveUserSettings();
#else // @header-generator platform
    virtual void showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual void showXboxLiveUserSettings();

#endif
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> showOSUserDialog(std::string, std::string, std::string);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> showOSUserDialog(::std::string, ::std::string, ::std::string);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ThrottledFileWriteManager>> getThrottledFileWriteManager() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::Bedrock::NotNullNonOwnerPtr<::ThrottledFileWriteManager> getThrottledFileWriteManager() const;

#endif
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getCurrentStoragePath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getExternalStoragePath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getInternalStoragePath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getUserdataPath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> _getSharedDataPath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getSharedDataPath() const = 0;

    virtual void _notifyUriListeners(::ActivationUri const&, bool);

#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual void _notifyUriListeners(::ActivationUri const& uri, bool ignoreVerb);

#endif
#endif // @header-generator platform
    virtual bool _tryEnableCPUBoost();

    virtual void _disableCPUBoost();

    virtual ::Bedrock::CommonPlatform* getPlatformShim() const;

    virtual void _initializeFileStorageAreas();

    virtual void _teardownFileStorageAreas();

    virtual int getPlatformDpi() const;

    virtual ::UIScalingRules getPlatformUIScalingRules() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPlatformTempPath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const = 0;
#endif // @header-generator platform

    virtual void _onInitialize();

    virtual void _onTeardown();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AppPlatform(bool, std::unique_ptr<IAppPlatformImpl>);
#else // @header-generator platform
    MCAPI AppPlatform(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clipboardCopyHandler(::ApplicationSignal::ClipboardCopy const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _clipboardCopyHandler(::ApplicationSignal::ClipboardCopy const& signal);

    MCAPI void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const& signal);

    MCAPI void _clipboardPasteRequestHandler(::ApplicationSignal::ClipboardPasteRequest const& signal);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _terminateListeners();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clipboardPasteRequestHandler(::ApplicationSignal::ClipboardPasteRequest const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void checkAndTriggerOnLowMemory();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fireAppTerminated();
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::Core::FileHandlePool> getArchiveHandlePool() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IAppPlatformImpl& _getImpl();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getDeviceIdWarning() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _terminateListeners();
#else // @header-generator platform
    MCAPI ::std::string getGraphicsDeviceTier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim();
#else // @header-generator platform
    MCAPI ::std::optional<::std::locale> getLocaleForDateTimeFormatting() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addNetworkChangeObserver(::NetworkChangeObserver&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getShareText() const;

    MCAPI ::std::string getShareTitle() const;

    MCAPI ::std::string getShareUri() const;

    MCAPI double getTotalActiveSeconds();

    MCAPI void loadImage(::mce::Image& out, ::Core::Path const& filename);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkAndTriggerOnLowMemory();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::std::string>
    readAssetFile(::Core::PathView filename, ::AppPlatform::ReadMode const& readMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool requiresNetworkOutageMessaging() const;

    MCAPI void setShareData(::std::string shareTitle, ::std::string shareText, ::std::string shareUri);

    MCAPI void setShareMetaData(::std::string const& shareTitle, ::std::string const& shareText);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasPendingProtocolActivation();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static ::Bedrock::Result<::std::string> _readAssetFileGeneric(::Core::PathView filename);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isInitialized();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void imGuiAddInputChar(ushort c);

    MCAPI static bool mouseInputHandledByImGui();

    MCAPI static bool updateImGuiKeyboard(uchar param, bool isDown);

    MCAPI static void updateImGuiMouseButton(uchar button, bool isDown);

    MCAPI static void updateImGuiMousePosition(float x, float y);

    MCAPI static void updateImGuiMouseScrollBar(float value);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& HOME_PATH();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_PATH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& LOG_PATH();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& LOG_PATH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SETTINGS_PATH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& SHADERCACHE_PATH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool& mIsInitialized();

    MCNAPI static ::ActivationUri& mPendingProtocolActivation();

    MCNAPI static std::mutex& mProtocolMutex();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool& mIsInitialized();

    MCAPI static ::ActivationUri& mPendingProtocolActivation();

    MCAPI static ::Bedrock::Threading::Mutex& mProtocolMutex();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool, std::unique_ptr<IAppPlatformImpl>);
#else // @header-generator platform
    MCAPI void* $ctor(bool registerService, ::std::unique_ptr<::IAppPlatformImpl> impl);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $restartRequested();
#else // @header-generator platform
    MCAPI void $initialize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getLoggingPath() const;
#else // @header-generator platform
    MCAPI void $teardown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLowMemoryDevice() const;
#else // @header-generator platform
    MCAPI void $initAppPlatformNetworkSettings();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLowPhysicalMemoryDevice() const;
#else // @header-generator platform
    MCAPI uint64 $getHighPerformanceThreadsCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasPlatformSpecificInvites() const;
#else // @header-generator platform
    MCAPI uint64 $getTotalHardwareThreadsCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRealmsEnabled() const;
#else // @header-generator platform
    MCFOLD void $initializeGraphicsDeviceTier();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initAppPlatformNetworkSettings();
#else // @header-generator platform
    MCAPI void $addListener(::AppPlatformListener* l, float priority);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;
#else // @header-generator platform
    MCAPI void $removeListener(::AppPlatformListener* l);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const $areTreatmentPacksThrottled() const;
#else // @header-generator platform
    MCAPI ::ProcessExecutionState $getProcessExecutionState() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $goToExternalConsumablesStoreListing() const;
#else // @header-generator platform
    MCAPI void $restartApp(bool restart);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $showPlatformEmptyStoreDialog(std::function<void(bool)>&&);
#else // @header-generator platform
    MCAPI bool $restartRequested();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNetworkEnabled(bool) const;
#else // @header-generator platform
    MCFOLD int const $numberOfThrottledTreatmentPacksToImportPerMinute() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNetworkAvailable() const;
#else // @header-generator platform
    MCFOLD bool const $areTreatmentPacksThrottled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLANAvailable() const;
#else // @header-generator platform
    MCAPI ::HardwareMemoryTierUtil const& $getHardwareMemoryTierUtil() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLANAllowed() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<::IntegrityTokenResult> $requestIntegrityToken(::std::string const& nonceToken);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInternetAvailable() const;
#else // @header-generator platform
    MCFOLD void $setIntegrityToken(::std::string const& integrityToken);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $multiplayerRequiresPremiumAccess() const;
#else // @header-generator platform
    MCFOLD void $setIntegrityTokenErrorMessage(::std::string const& errorMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $multiplayerRequiresUGCEnabled() const;
#else // @header-generator platform
    MCFOLD bool $supportsInPackageRecursion() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDefaultNetworkMaxPlayers() const;
#else // @header-generator platform
    MCFOLD bool $supportsXboxLiveAchievements() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BuildPlatform $getBuildPlatform() const;
#else // @header-generator platform
    MCFOLD void $hideSplashScreen();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getLowPhysicalMemoryThreshold() const;
#else // @header-generator platform
    MCAPI ::std::string $getFeedbackBugsLink() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HardwareMemoryTierUtil const& $getHardwareMemoryTierUtil() const;
#else // @header-generator platform
    MCAPI ::std::string $getFeedbackHelpLink() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getDeviceId() const;
#else // @header-generator platform
    MCAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initialize();
#else // @header-generator platform
    MCFOLD void $updateLocalization(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $teardown();
#else // @header-generator platform
    MCFOLD void $setSleepEnabled(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getHighPerformanceThreadsCount() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getTotalHardwareThreadsCount() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getInternalPackStoragePath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeGraphicsDeviceTier();
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getSettingsPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addListener(::AppPlatformListener*, float);
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getLoggingPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeListener(::AppPlatformListener*);
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ProcessExecutionState $getProcessExecutionState() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getShaderCachePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $restartApp(bool);
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getUserdataPathForLevels() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadPNG(::mce::Image&, ::Core::Path const&);
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getCacheStoragePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadTGA(::mce::Image&, ::Core::Path const&);
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getTextureCacheStoragePath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadJPEG(::mce::Image&, ::Core::Path const&);
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getOnDiskScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getKeyFromKeyCode(int, int, int);
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getOnDiskPackScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getLevelInfoCachePath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $textEditComponentLostFocus();
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getCatalogSearchScratchPath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getUserStorageRootPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hideKeyboard();
#else // @header-generator platform
    MCFOLD ::std::shared_ptr<::Core::FileStorageArea> $getOrCreateStorageAreaForUser(::Social::UserCreationData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $blankLineDismissesChat() const;
#else // @header-generator platform
    MCFOLD bool $hasSeparatedStorageAreasForContentAcquisition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $signWrapsTextEntry() const;
#else // @header-generator platform
    MCFOLD uint64 $getOptimalLDBSize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFullScreenKeyboard() const;
#else // @header-generator platform
    MCAPI int $getMaxLDBFilesOpen() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $actionSuspendsApp(::AppAction) const;
#else // @header-generator platform
    MCFOLD bool $getDisableLDBSeekCompactions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getKeyboardHeight() const;
#else // @header-generator platform
    MCFOLD void $showDialog(int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $refocusMouse(bool, bool);
#else // @header-generator platform
    MCFOLD void $createUserInput();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setMousePointerType(::Bedrock::Input::PointerType);
#else // @header-generator platform
    MCAPI void $createUserInput(int dialogId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hideMousePointer();
#else // @header-generator platform
    MCFOLD int $getUserInputStatus();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $showMousePointer();
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $getUserInput();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postInteractiveSignIn();
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem fileSystem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useHardwareMouse();
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $provideHardwareMouseImageData(::mce::Image const&);
#else // @header-generator platform
    MCFOLD void $registerFileForCollectionWithCrashDump(::Core::Path const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomSoftwareCursor() const;
#else // @header-generator platform
    MCFOLD void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getCustomSoftwareCursorAsset() const;
#else // @header-generator platform
    MCAPI int $getScreenWidth() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getPointerFocus();
#else // @header-generator platform
    MCAPI int $getScreenHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPointerFocus(bool);
#else // @header-generator platform
    MCAPI int $getDisplayWidth();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvertScrollEnabled() const;
#else // @header-generator platform
    MCAPI int $getDisplayHeight();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $toggleSimulateTouchWithMouse();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $setScreenSize(int, int);
#else // LL_PLAT_C
    MCFOLD void $setScreenSize(int width, int height);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppSuspended();
#else // @header-generator platform
    MCFOLD void $setWindowSize(int width, int height);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppResumed();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $setWindowText(::std::string const& title);
#else // LL_PLAT_C
    MCFOLD void $setWindowText(::std::string const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppFocusLost();
#else // @header-generator platform
    MCFOLD ::std::optional<::OperationMode> $getOperationMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppFocusGained();
#else // @header-generator platform
    MCFOLD bool $allowContentLogWriteToDisk();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireResizeBegin();
#else // @header-generator platform
    MCFOLD uint $getMaxClubsRequests() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireResizeEnd();
#else // @header-generator platform
    MCFOLD bool $supportsLaunchingLegacyVersion() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireDeviceLost();
#else // @header-generator platform
    MCFOLD void $launchLegacyVersion();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireSurfaceCreated();
#else // @header-generator platform
    MCFOLD bool $canManageLegacyData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireSurfaceDestroyed();
#else // @header-generator platform
    MCFOLD bool $supportsDayOneExperience() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppConfigurationChanged();
#else // @header-generator platform
    MCFOLD bool $canMigrateWorldData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppPaused();
#else // @header-generator platform
    MCFOLD bool $isContentAutoUpdateAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fireAppUnpaused();
#else // @header-generator platform
    MCAPI int $getMaxSimultaneousDownloads() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $discardBackbuffer();
#else // @header-generator platform
    MCFOLD uint $getMaxSimultaneousServiceRequests() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getTermsOfUseHyperlink() const;
#else // @header-generator platform
    MCFOLD bool $isDownloadAndImportBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pickFile(std::shared_ptr<FilePickerSettings>);
#else // @header-generator platform
    MCFOLD bool $isDownloadBuffered() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsAlbumExport() const;
#else // @header-generator platform
    MCFOLD bool $supportsAutoSaveOnDBCompaction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsPDFExport() const;
#else // @header-generator platform
    MCAPI void $setTextBoxSelection(::TextBoxSelection selection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<PDFWriter> $createPlatformPDFWriter();
#else // @header-generator platform
    MCFOLD bool $supportsVibration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $shareFile(::Core::Path const&, std::function<void(bool)>);
#else // @header-generator platform
    MCFOLD void $vibrate(int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasHardwareBackButton();
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsMSAA() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::std::string> $_readAssetFileInternal(::Core::PathView filename);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supports3rdPartyServers() const;
#else // @header-generator platform
    MCAPI bool $hasAssetFile(::Core::Path const& filename);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsManualAddedServers() const;
#else // @header-generator platform
    MCAPI bool $copyAssetFile(::Core::Path const& filename, ::Core::Path const& destination);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsFilePicking() const;
#else // @header-generator platform
    MCAPI ::std::set<::Core::PathBuffer<::std::string>>
    $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsTouch() const;
#else // @header-generator platform
    MCFOLD bool $supportsClientUpdate() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsKeyboardMouse() const;
#else // @header-generator platform
    MCAPI ::std::string $getClientUpdateUrl() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsGamepad() const;
#else // @header-generator platform
    MCFOLD int $checkLicense();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClipboardFeatureFlags $getClipboardFeatures() const;
#else // @header-generator platform
    MCFOLD bool $hasBuyButtonWhenInvalidLicense();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsClipboardSet() const;
#else // @header-generator platform
    MCAPI bool $isNetworkAvailable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsClipboardGet() const;
#else // @header-generator platform
    MCFOLD bool $isLANAvailable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsClipboardAsyncGet() const;
#else // @header-generator platform
    MCFOLD bool $isNetworkEnabled(bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setClipboard(std::string const&) const;
#else // @header-generator platform
    MCFOLD void $setNetworkAllowed(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::wstring $getClipboardText() const;
#else // @header-generator platform
    MCFOLD bool $isNetworkAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getClipboardTextAsync(std::function<void(const std::string&)>) const;
#else // @header-generator platform
    MCFOLD bool $isInternetAvailable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsShare() const;
#else // @header-generator platform
    MCFOLD ::std::optional<bool> $isOnWifiConnectionTelemetryValue();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $share() const;
#else // @header-generator platform
    MCFOLD ::NetworkConnectionType $getNetworkConnectionType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowSplitScreen();
#else // @header-generator platform
    MCAPI void $setNetworkConnectionType(::NetworkConnectionType connectionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $splitScreenRenderDistScalar(uint);
#else // @header-generator platform
    MCAPI int $getDefaultNetworkMaxPlayers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $uiOpenRenderDistScalar();
#else // @header-generator platform
    MCFOLD bool $multiplayerRequiresPremiumAccess() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pushNotificationReceived(::PushNotificationMessage const&);
#else // @header-generator platform
    MCFOLD bool $multiplayerRequiresUGCEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openStoragePermissionRequest(::PermissionRequestReason, std::function<void(StoragePermissionResult)>);
#else // @header-generator platform
    MCFOLD bool $isCrossPlatformToggleVisible() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, std::function<void(bool)>);
#else // @header-generator platform
    MCFOLD bool $isTelemetryAllowed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory);
#else // @header-generator platform
    MCFOLD void $buyGame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FileStorageDirectory $getStorageDirectory() const;
#else // @header-generator platform
    MCFOLD void $finish();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStorageDirectoryChangeDenied(std::function<void(FileStorageDirectory)>);
#else // @header-generator platform
    MCFOLD bool $canLaunchUri(::std::string const& uri);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription
        $addStorageDirectoryChangedSubscriber(std::function<void(const Core::Path&)>);
#else // @header-generator platform
    MCFOLD void $launchUri(::std::string const& uri);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $runStoragePermissionResultCallback(::StoragePermissionResult);
#else // @header-generator platform
    MCFOLD void $launchSettings();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasExternalStoragePermission();
#else // @header-generator platform
    MCFOLD bool $useXboxControlHelpers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $delayOptionSaveUntilCloudSync() const;
#else // @header-generator platform
    MCFOLD ::PlatformType $getPlatformType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateTextEditBoxPosition(::RectangleArea const&, ::RectangleArea const&, float const);
#else // @header-generator platform
    MCFOLD bool $isCentennial() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;
#else // @header-generator platform
    MCFOLD ::std::string $getPackageFamilyName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;
#else // @header-generator platform
    MCFOLD ::BuildPlatform $getBuildPlatform() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $trialCorrelationStart();
#else // @header-generator platform
    MCFOLD int $getNumberOfParticleFramesToInterpolate() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setAllowLostFocusToasts(bool);
#else // @header-generator platform
    MCAPI int $getDpi() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setShowLostFocusToasts(bool);
#else // @header-generator platform
    MCAPI void $setDpi(int dpi);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getShowLostFocusToasts();
#else // @header-generator platform
    MCAPI ::UIScalingRules $getUIScalingRules() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<IntegrityTokenResult> $requestIntegrityToken(std::string const&);
#else // @header-generator platform
    MCAPI void $setUIScalingRules(::UIScalingRules UIScalingRules);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setIntegrityToken(std::string const&);
#else // @header-generator platform
    MCFOLD bool $hasIDEProfiler();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setIntegrityTokenErrorMessage(std::string const&);
#else // @header-generator platform
    MCAPI ::std::string $getPlatformStringVar(int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsInPackageRecursion() const;
#else // @header-generator platform
    MCAPI uint64 $getMaximumUsedMemory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsXboxLiveAchievements() const;
#else // @header-generator platform
    MCFOLD uint64 $getLowMemoryEventThreshold(::LowMemorySeverity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hideSplashScreen();
#else // @header-generator platform
    MCAPI uint64 $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity severity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getFeedbackBugsLink() const;
#else // @header-generator platform
    MCAPI uint64 $getLowPhysicalMemoryThreshold() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getFeedbackHelpLink() const;
#else // @header-generator platform
    MCAPI void $calculateIfLowMemoryDevice();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(std::string const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $isLowMemoryDevice() const;
#else // LL_PLAT_C
    MCAPI bool $isLowMemoryDevice() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateLocalization(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $isLowPhysicalMemoryDevice() const;
#else // LL_PLAT_C
    MCAPI bool $isLowPhysicalMemoryDevice() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSleepEnabled(bool);
#else // @header-generator platform
    MCFOLD uint64 $getTextureMemoryBudget() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getScratchPath();
#else // @header-generator platform
    MCFOLD uint64 $getSingleMipDefaultMemoryBudget() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getInternalPackStoragePath() const;
#else // @header-generator platform
    MCFOLD void $readyForApplicationExitInfo() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getSettingsPath();
#else // @header-generator platform
    MCFOLD ::DeviceSunsetTier $getDeviceSunsetTier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPackagedShaderCachePath();
#else // @header-generator platform
    MCAPI int $getMaxSimRadiusInChunks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getShaderCachePath();
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $getBroadcastAddresses();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getUserdataPathForLevels() const;
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $getIPAddresses();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getCacheStoragePath();
#else // @header-generator platform
    MCFOLD bool $useAppPlatformForTelemetryIPAddress();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getTextureCacheStoragePath();
#else // @header-generator platform
    MCAPI ::std::string $getModelName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getOnDiskScratchPath();
#else // @header-generator platform
    MCAPI ::std::string $getModelNameForUI();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getOnDiskPackScratchPath();
#else // @header-generator platform
    MCFOLD void $updateBootstrapSettingsFromTreatmentsAsync();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getLevelInfoCachePath() const;
#else // @header-generator platform
    MCFOLD void $setFullscreenMode(::FullscreenMode const fullscreenMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getCatalogSearchScratchPath();
#else // @header-generator platform
    MCAPI bool $isNetworkThrottled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getUserStorageRootPath() const;
#else // @header-generator platform
    MCFOLD bool $isLANAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Core::FileStorageArea> $getOrCreateStorageAreaForUser(::Social::UserCreationData const&);
#else // @header-generator platform
    MCFOLD bool $doesLANRequireMultiplayerRestrictions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasSeparatedStorageAreasForContentAcquisition() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $collectGraphicsHardwareDetails();
#else // LL_PLAT_C
    MCFOLD void $collectGraphicsHardwareDetails();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getOptimalLDBSize();
#else // @header-generator platform
    MCAPI ::std::string $getEdition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxLDBFilesOpen() const;
#else // @header-generator platform
    MCFOLD ::OsVersion $getOSVersion() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getDisableLDBSeekCompactions() const;
#else // @header-generator platform
    MCAPI void $setThreadsFrozen(bool frozen);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $showDialog(int);
#else // @header-generator platform
    MCAPI bool $areThreadsFrozen() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $createUserInput(int);
#else // @header-generator platform
    MCFOLD float $getDefaultSafeZoneScaleX() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $createUserInput();
#else // @header-generator platform
    MCFOLD float $getDefaultSafeZoneScaleY() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getUserInputStatus();
#else // @header-generator platform
    MCFOLD float $getDefaultSafeZoneScaleAll() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getUserInput();
#else // @header-generator platform
    MCFOLD float $getDefaultScreenPositionX() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> $getFileAccess(::ResourceFileSystem);
#else // @header-generator platform
    MCFOLD float $getDefaultScreenPositionY() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $copyImportFileToTempFolder(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $isQuitCapable() const;
#else // LL_PLAT_C
    MCFOLD bool $isQuitCapable() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerFileForCollectionWithCrashDump(::Core::Path const&);
#else // @header-generator platform
    MCFOLD bool $requireControllerAtStartup() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerExperimentsActiveCrashDump(std::vector<std::string> const&) const;
#else // @header-generator platform
    MCFOLD bool $notifyControllerConnectionStateChange() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getScreenWidth() const;
#else // @header-generator platform
    MCFOLD bool $platformRequiresControllerApplet() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getScreenHeight() const;
#else // @header-generator platform
    MCAPI ::InputMode $getDefaultInputMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDisplayWidth();
#else // @header-generator platform
    MCAPI ::AppFocusState $getFocusState();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDisplayHeight();
#else // @header-generator platform
    MCAPI ::AppLifecycleContext& $getAppLifecycleContext();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setScreenSize(int, int);
#else // @header-generator platform
    MCFOLD bool $supportsFliteTTS() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWindowSize(int, int);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWindowText(std::string const&);
#else // @header-generator platform
    MCAPI ::SecureStorageKey $getSecureStorageKey(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<OperationMode> $getOperationMode() const;
#else // @header-generator platform
    MCFOLD void $setSecureStorageKey(::std::string const&, ::SecureStorageKey const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowContentLogWriteToDisk();
#else // @header-generator platform
    MCFOLD bool $devHotReloadRenderResources() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getMaxClubsRequests() const;
#else // @header-generator platform
    MCFOLD bool $shouldPauseDownloadsWhenEnterGame() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsLaunchingLegacyVersion() const;
#else // @header-generator platform
    MCFOLD bool $compareAppReceiptToLocalReceipt(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $launchLegacyVersion();
#else // @header-generator platform
    MCFOLD ::mce::UUID const& $getThirdPartyPackUUID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canManageLegacyData() const;
#else // @header-generator platform
    MCFOLD ::mce::UUID const& $getPlatformBetaPackUUID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsDayOneExperience() const;
#else // @header-generator platform
    MCFOLD bool $saveTreatmentPacksAsZips() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canMigrateWorldData() const;
#else // @header-generator platform
    MCFOLD bool $saveEncryptedPacksAsZips() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isContentAutoUpdateAllowed() const;
#else // @header-generator platform
    MCFOLD bool $saveEncryptedWorldTemplatePacksAsZips() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxSimultaneousDownloads() const;
#else // @header-generator platform
    MCFOLD bool $saveEncryptedPersonaPacksAsZips() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getMaxSimultaneousServiceRequests() const;
#else // @header-generator platform
    MCFOLD bool $allowsResourcePackDevelopment() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDownloadAndImportBlocking() const;
#else // @header-generator platform
    MCFOLD bool $supportsLegacySinglePremiumCacheDirectory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDownloadBuffered() const;
#else // @header-generator platform
    MCFOLD bool $supportsWorldShare() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsAutoSaveOnDBCompaction() const;
#else // @header-generator platform
    MCFOLD bool $hasJournalingFilesystem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTextBoxSelection(::TextBoxSelection);
#else // @header-generator platform
    MCFOLD bool $isAutoCompactionEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsVibration() const;
#else // @header-generator platform
    MCAPI ::std::chrono::nanoseconds $getLevelSaveInterval() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $vibrate(int);
#else // @header-generator platform
    MCAPI ::std::chrono::nanoseconds $getOptionsSaveInterval() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getAssetFileFullPath(::Core::Path const&);
#else // @header-generator platform
    MCFOLD bool $hasPlatformSpecificInvites() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $_readAssetFileInternal(::Core::PathView);
#else // @header-generator platform
    MCFOLD bool $usePlatformProfilePicturesOnly() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAssetFile(::Core::Path const&);
#else // @header-generator platform
    MCFOLD bool $allowBetaXblSignIn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $copyAssetFile(::Core::Path const&, ::Core::Path const&);
#else // @header-generator platform
    MCFOLD bool $requiresXboxLiveSigninToPlay() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::set<Core::PathBuffer<std::string>> $listAssetFilesIn(::Core::Path const&, std::string const&) const;
#else // @header-generator platform
    MCFOLD bool $requiresLiveGoldForMultiplayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsClientUpdate() const;
#else // @header-generator platform
    MCFOLD bool $shouldRegisterForXboxLiveNotifications() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getClientUpdateUrl() const;
#else // @header-generator platform
    MCAPI bool $isRealmsEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $checkLicense();
#else // @header-generator platform
    MCFOLD bool $minimizeBackgroundDownloads() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBuyButtonWhenInvalidLicense();
#else // @header-generator platform
    MCFOLD bool $requiresAutoSaveIconExplanationPopup() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setNetworkAllowed(bool);
#else // @header-generator platform
    MCAPI ::IPlatformScreenshots& $getPlatformScreenshots();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNetworkAllowed() const;
#else // @header-generator platform
    MCFOLD uint $maxFileDataRequestConcurrency() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> $isOnWifiConnectionTelemetryValue();
#else // @header-generator platform
    MCFOLD void $goToExternalConsumablesStoreListing() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkConnectionType $getNetworkConnectionType();
#else // @header-generator platform
    MCAPI float $getStoreNetworkFailureTimeout() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setNetworkConnectionType(::NetworkConnectionType);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::Core::FileStorageArea>
    $createLoggingStorageArea(::Core::FileAccessType fileAccessType, ::Core::PathView loggingPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCrossPlatformToggleVisible() const;
#else // @header-generator platform
    MCFOLD uint $getPlatformErrorCodeForStoreError(::MarketplaceErrorUtils::StoreErrorResult const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTelemetryAllowed();
#else // @header-generator platform
    MCFOLD void $handlePlatformSpecificCommerceError(uint, ::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buyGame();
#else // @header-generator platform
    MCFOLD bool $isEduMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $finish();
#else // @header-generator platform
    MCFOLD bool $importAsFlatFile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canLaunchUri(std::string const&);
#else // @header-generator platform
    MCFOLD bool $isWebviewSupported() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $launchUri(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&& args) const;
#else // LL_PLAT_C
    MCFOLD ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&&) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $launchSettings();
#else // @header-generator platform
    MCFOLD bool $getPlatformTTSExists() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useXboxControlHelpers() const;
#else // @header-generator platform
    MCFOLD bool $getPlatformTTSEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlatformType $getPlatformType() const;
#else // @header-generator platform
    MCAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCentennial() const;
#else // @header-generator platform
    MCFOLD bool $shouldRemoveGraphicsDeviceOnAppTermination() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getPackageFamilyName() const;
#else // @header-generator platform
    MCFOLD bool $isJoinableViaExternalServers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getNumberOfParticleFramesToInterpolate() const;
#else // @header-generator platform
    MCFOLD void $onPrimaryUserNetworkReady();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDpi() const;
#else // @header-generator platform
    MCFOLD bool $isDisplayInitialized() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDpi(int);
#else // @header-generator platform
    MCFOLD bool $usesAsyncOptionSaving() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::UIScalingRules $getUIScalingRules() const;
#else // @header-generator platform
    MCFOLD void $showPlatformStoreIcon(bool shouldShow);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setUIScalingRules(::UIScalingRules);
#else // @header-generator platform
    MCAPI void $showPlatformEmptyStoreDialog(::std::function<void(bool)>&& callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasIDEProfiler();
#else // @header-generator platform
    MCFOLD void $initializeGameStreaming();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getPlatformStringVar(int);
#else // @header-generator platform
    MCAPI void $notifyNetworkConfigurationChanged();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getMaximumUsedMemory();
#else // @header-generator platform
    MCFOLD void $setKeepScreenOnFlag(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getLowMemoryEventThreshold(::LowMemorySeverity) const;
#else // @header-generator platform
    MCFOLD void $initializeMulticast() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getLowMemoryEventRecoveryThreshold(::LowMemorySeverity) const;
#else // @header-generator platform
    MCFOLD void $requestMulticastReceivePermission();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $calculateIfLowMemoryDevice();
#else // @header-generator platform
    MCFOLD bool $hasMulticastReceivePermission() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getTextureMemoryBudget() const;
#else // @header-generator platform
    MCFOLD void $releaseMulticastReceivePermission() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getSingleMipDefaultMemoryBudget() const;
#else // @header-generator platform
    MCFOLD void $onMinecraftGameInitComplete();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readyForApplicationExitInfo() const;
#else // @header-generator platform
    MCFOLD void $onFullGameUnlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DeviceSunsetTier $getDeviceSunsetTier() const;
#else // @header-generator platform
    MCFOLD bool $is24HourTimeFormat() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxSimRadiusInChunks() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<bool> $showOSUserDialog(::std::string, ::std::string, ::std::string);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getBroadcastAddresses();
#else // @header-generator platform
    MCFOLD bool $_tryEnableCPUBoost();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getIPAddresses();
#else // @header-generator platform
    MCFOLD void $_disableCPUBoost();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useAppPlatformForTelemetryIPAddress();
#else // @header-generator platform
    MCFOLD ::Bedrock::CommonPlatform* $getPlatformShim() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getModelName();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $_initializeFileStorageAreas();
#else // LL_PLAT_C
    MCAPI void $_initializeFileStorageAreas();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getModelNameForUI();
#else // @header-generator platform
    MCAPI void $_teardownFileStorageAreas();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateBootstrapSettingsFromTreatmentsAsync();
#else // @header-generator platform
    MCFOLD int $getPlatformDpi() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerUriListener(std::string const&, ::UriListener&);
#else // @header-generator platform
    MCAPI ::UIScalingRules $getPlatformUIScalingRules() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerUriListener(::UriListener&);
#else // @header-generator platform
    MCFOLD void $_onInitialize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $unregisterUriListener(::UriListener const&);
#else // @header-generator platform
    MCFOLD void $_onTeardown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifyUriListeners(::ActivationUri const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $loadPNG(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD void $loadTGA(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD void $loadJPEG(::mce::Image& out, ::Core::Path const& filename);

    MCFOLD int $getKeyFromKeyCode(int, int, int);

    MCFOLD void $textEditComponentGainedFocus(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline
    );

    MCFOLD void $textEditComponentLostFocus();

    MCAPI void $showKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        int const            controllerId,
        ::glm::vec2 const&   position,
        float                controlHeight,
        ::InputMode          inputMode
    );

    MCAPI void $hideKeyboard();

    MCAPI bool $blankLineDismissesChat() const;

    MCFOLD bool $signWrapsTextEntry() const;

    MCFOLD bool $isFullScreenKeyboard() const;

    MCFOLD bool $actionSuspendsApp(::AppAction) const;

    MCFOLD float $getKeyboardHeight() const;

    MCAPI bool $refocusMouse(bool lostMouse, bool oldMouseGrabbed);

    MCFOLD void $setMousePointerType(::Bedrock::Input::PointerType pointerType);

    MCFOLD void $hideMousePointer();

    MCFOLD void $showMousePointer();

    MCFOLD void $postInteractiveSignIn();

    MCFOLD bool $useHardwareMouse();

    MCFOLD void $provideHardwareMouseImageData(::mce::Image const&);

    MCFOLD bool $hasCustomSoftwareCursor() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getCustomSoftwareCursorAsset() const;

    MCAPI bool $getPointerFocus();

    MCAPI void $setPointerFocus(bool lostFocus);

    MCFOLD bool $isInvertScrollEnabled() const;

    MCFOLD void $toggleSimulateTouchWithMouse();

    MCAPI void $_fireAppSuspended();

    MCAPI void $_fireAppResumed();

    MCAPI void $_fireAppFocusLost();

    MCAPI void $_fireAppFocusGained();

    MCAPI void $_fireResizeBegin();

    MCAPI void $_fireResizeEnd();

    MCAPI void $_fireDeviceLost();

    MCAPI void $_fireSurfaceCreated();

    MCAPI void $_fireSurfaceDestroyed();

    MCFOLD void $_fireAppConfigurationChanged();

    MCAPI void $_fireAppPaused();

    MCAPI void $_fireAppUnpaused();

    MCFOLD void $discardBackbuffer();

    MCAPI ::std::string $getTermsOfUseHyperlink() const;

    MCFOLD void $pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    MCFOLD bool $supportsAlbumExport() const;

    MCFOLD bool $supportsPDFExport() const;

    MCFOLD ::std::shared_ptr<::PDFWriter> $createPlatformPDFWriter();

    MCAPI void $shareFile(::Core::Path const&, ::std::function<void(bool)>);

    MCFOLD bool $hasHardwareBackButton();

    MCFOLD bool $supportsMSAA() const;

    MCFOLD bool $supports3rdPartyServers() const;

    MCFOLD bool $supportsManualAddedServers() const;

    MCFOLD bool $supportsFilePicking() const;

    MCFOLD bool $supportsTouch() const;

    MCFOLD bool $supportsKeyboardMouse() const;

    MCFOLD bool $supportsGamepad() const;

    MCFOLD ::ClipboardFeatureFlags $getClipboardFeatures() const;

    MCAPI bool $supportsClipboardSet() const;

    MCAPI bool $supportsClipboardGet() const;

    MCAPI bool $supportsClipboardAsyncGet() const;

    MCFOLD void $setClipboard(::std::string const& value) const;

    MCAPI ::std::wstring $getClipboardText() const;

    MCFOLD void $getClipboardTextAsync(::std::function<void(::std::string const&)>) const;

    MCFOLD bool $supportsShare() const;

    MCFOLD void $share() const;

    MCAPI bool $allowSplitScreen();

    MCAPI float $splitScreenRenderDistScalar(uint numPlayers);

    MCAPI float $uiOpenRenderDistScalar();

    MCAPI void $pushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $openStoragePermissionRequest(
        ::PermissionRequestReason,
        ::std::function<void(::StoragePermissionResult)> resultCallback
    );

    MCFOLD void $setStorageDirectory(
        ::FileStorageDirectory      dir,
        bool                        isCallback,
        ::PropertyBag const&        extraData,
        ::std::function<void(bool)> onComplete
    );

    MCFOLD ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory);

    MCFOLD ::FileStorageDirectory $getStorageDirectory() const;

    MCFOLD void $setStorageDirectoryChangeDenied(::std::function<void(::FileStorageDirectory)>);

    MCFOLD ::Bedrock::PubSub::Subscription
    $addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)> callback);

    MCAPI void $runStoragePermissionResultCallback(::StoragePermissionResult result);

    MCFOLD bool $hasExternalStoragePermission();

    MCFOLD bool $delayOptionSaveUntilCloudSync() const;

    MCFOLD void $updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    );

    MCAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;

    MCAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;

    MCFOLD void $trialCorrelationStart();

    MCAPI void $setAllowLostFocusToasts(bool allowLostFocusToasts);

    MCAPI void $setShowLostFocusToasts(bool showLostFocusToasts);

    MCAPI bool $getShowLostFocusToasts();

    MCAPI ::std::string $getDeviceId() const;

    MCAPI void $registerUriListener(::UriListener& listener);

    MCAPI void $registerUriListener(::std::string const& verb, ::UriListener& listener);

    MCAPI void $unregisterUriListener(::UriListener const& listener);

    MCAPI void $notifyUriListeners(::ActivationUri const& uri);

    MCAPI void $notifyUriListenerRegistrationDone();

    MCFOLD void $showXboxLiveUserSettings();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ThrottledFileWriteManager> $getThrottledFileWriteManager() const;

    MCAPI void $_notifyUriListeners(::ActivationUri const& uri, bool ignoreVerb);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifyUriListenerRegistrationDone();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
