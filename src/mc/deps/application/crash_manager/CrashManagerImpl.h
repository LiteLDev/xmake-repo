#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashManager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Scheduler;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock { class CrashFileProcessor; }
namespace Bedrock { class CrashTelemetryProcessor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class ICrashFileApi; }
namespace Bedrock { class SessionInfo; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { struct CrashManagerConfig; }
// clang-format on

namespace Bedrock {

class CrashManagerImpl : public ::Bedrock::CrashManager {
public:
    // CrashManagerImpl inner types declare
    // clang-format off
    struct CrashProcessorInfo;
    struct CrashedSessionInfo;
    // clang-format on

    // CrashManagerImpl inner types define
    struct CrashProcessorInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                                  mExtension;
        ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::CrashFileProcessor>> mProcessor;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkb55d17;
        ::ll::UntypedStorage<8, 16> mUnkd95fbb;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashProcessorInfo& operator=(CrashProcessorInfo const&);
        CrashProcessorInfo(CrashProcessorInfo const&);
        CrashProcessorInfo();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CrashProcessorInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct CrashedSessionInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::SessionInfo>> mSession;
        ::ll::UntypedStorage<8, 24>                                      mFilePath;
        ::ll::TypedStorage<1, 1, bool>                                   mProcessed;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnka0307c;
        ::ll::UntypedStorage<8, 32> mUnkdf1862;
        ::ll::UntypedStorage<1, 1>  mUnkdad209;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashedSessionInfo& operator=(CrashedSessionInfo const&);
        CrashedSessionInfo(CrashedSessionInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CrashedSessionInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        CrashedSessionInfo();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using PathVector = std::vector<Core::PathBuffer<std::string>>;

    using ProcessCrashResultHandle = ::Bedrock::Threading::Async<bool>;

    using ProcessCrashResult = bool;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                         mCrashDirName;
    ::ll::TypedStorage<8, 24, std::string>                                         mCrashDataRoot;
    ::ll::TypedStorage<8, 24, std::string>                                         mCrashedSessionFileSuffix;
    ::ll::TypedStorage<8, 24, std::string>                                         mSerializedCurrentSession;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mCurrentSessionUpdateSubscription;
    ::ll::TypedStorage<4, 40, std::mutex>                                          mTearDownMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mUploadWorkerPool;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TaskGroup>>                          mUploadTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::CrashManagerImpl::CrashProcessorInfo>> mSupportedExtensions;
    ::ll::UntypedStorage<8, 24>                                                           mFilesByExtension;
    ::ll::TypedStorage<8, 24, std::map<std::string, Bedrock::CrashManagerImpl::CrashedSessionInfo>> mCrashedSessions;
    ::ll::TypedStorage<8, 8, ::Bedrock::CrashTelemetryProcessor*>      mCrashTelemetryProcessor;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                        mProcessingActive;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::ICrashFileApi>> mFileApi;
    ::ll::TypedStorage<1, 1, bool>                                     mIsNetworkAvailable;
    ::ll::TypedStorage<1, 1, bool>                                     mLoggingEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1a7365;
    ::ll::UntypedStorage<8, 32> mUnk4585f0;
    ::ll::UntypedStorage<8, 32> mUnk6e472b;
    ::ll::UntypedStorage<8, 32> mUnke1a459;
    ::ll::UntypedStorage<8, 16> mUnk28673f;
    ::ll::UntypedStorage<8, 80> mUnk3030e6;
    ::ll::UntypedStorage<8, 16> mUnk2e647e;
    ::ll::UntypedStorage<8, 16> mUnkc7a812;
    ::ll::UntypedStorage<8, 24> mUnkd5ee85;
    ::ll::UntypedStorage<8, 16> mUnk20226a;
    ::ll::UntypedStorage<8, 16> mUnk426087;
    ::ll::UntypedStorage<8, 8>  mUnk936f0f;
    ::ll::UntypedStorage<1, 1>  mUnkb940bb;
    ::ll::UntypedStorage<8, 16> mUnk265ed5;
    ::ll::UntypedStorage<1, 1>  mUnk6afa2c;
    ::ll::UntypedStorage<1, 1>  mUnkbbb515;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashManagerImpl& operator=(CrashManagerImpl const&);
    CrashManagerImpl(CrashManagerImpl const&);
    CrashManagerImpl();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrashManagerImpl();
#else // @header-generator platform
    virtual ~CrashManagerImpl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize(::Bedrock::CrashManagerConfig const&);
#else // @header-generator platform
    virtual void initialize(::Bedrock::CrashManagerConfig const& config) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCrashProcessorForFileType(std::string_view, std::shared_ptr<Bedrock::CrashFileProcessor>);
#else // @header-generator platform
    virtual void setCrashProcessorForFileType(
        ::std::string_view                               fileExtension,
        ::std::shared_ptr<::Bedrock::CrashFileProcessor> processor
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCrashTelemetryProcessor(::gsl::not_null<Bedrock::CrashTelemetryProcessor*>);
#else // @header-generator platform
    virtual void
    setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> processor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void processCrashes(std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool);
#else // @header-generator platform
    virtual void processCrashes(
        ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> workerPool,
        ::Scheduler&                                            scheduler,
        bool                                                    isNetworkAvailable
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyCrashed();
#else // @header-generator platform
    virtual void notifyCrashed() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifySystemError(uint, std::string const&);
#else // @header-generator platform
    virtual void notifySystemError(uint errorCode, ::std::string const& errorMessage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void recordCrashedSession(std::string_view, std::string_view, long);
#else // @header-generator platform
    virtual void recordCrashedSession(
        ::std::string_view sessionId,
        ::std::string_view serializedSession,
        int64              crashTime
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopProcessingCrashes();
#else // @header-generator platform
    virtual void stopProcessingCrashes() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isCrashProcessingActive() const;
#else // @header-generator platform
    virtual bool isCrashProcessingActive() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getCrashDataRoot() const;
#else // @header-generator platform
    virtual ::std::string const& getCrashDataRoot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getCrashedSessionFileSuffix() const;
#else // @header-generator platform
    virtual ::std::string const& getCrashedSessionFileSuffix() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<bool>
    _processOneCrash(::Core::PathBuffer<std::string> const&, ::Bedrock::CrashFileProcessor*);

    MCNAPI void _queueTask(std::string_view, std::function<void()>&&);

    MCNAPI void _resetProcessingState();

    MCNAPI void _scanCrashFiles();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<bool>
    _processOneCrash(::Core::PathBuffer<::std::string> const& filePath, ::Bedrock::CrashFileProcessor* processor);

    MCNAPI void _queueTask(::std::string_view name, ::std::function<void()>&& task);

    MCNAPI void _resetProcessingState();

    MCNAPI void _scanCrashFiles();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initialize(::Bedrock::CrashManagerConfig const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $initialize(::Bedrock::CrashManagerConfig const& config);

    MCNAPI void $setCrashProcessorForFileType(
        ::std::string_view                               fileExtension,
        ::std::shared_ptr<::Bedrock::CrashFileProcessor> processor
    );

    MCNAPI void $setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> processor);

    MCNAPI void $processCrashes(
        ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> workerPool,
        ::Scheduler&                                            scheduler,
        bool                                                    isNetworkAvailable
    );

    MCNAPI void $notifyCrashed();

    MCNAPI void $notifySystemError(uint errorCode, ::std::string const& errorMessage);

    MCNAPI void
    $recordCrashedSession(::std::string_view sessionId, ::std::string_view serializedSession, int64 crashTime);

    MCNAPI void $stopProcessingCrashes();

    MCNAPI bool $isCrashProcessingActive() const;

    MCNAPI ::std::string const& $getCrashDataRoot() const;

    MCNAPI ::std::string const& $getCrashedSessionFileSuffix() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCrashProcessorForFileType(std::string_view, std::shared_ptr<Bedrock::CrashFileProcessor>);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCrashTelemetryProcessor(::gsl::not_null<Bedrock::CrashTelemetryProcessor*>);

    MCNAPI void $processCrashes(std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool);

    MCNAPI void $notifyCrashed();

    MCNAPI void $notifySystemError(uint, std::string const&);

    MCNAPI void $recordCrashedSession(std::string_view, std::string_view, long);

    MCNAPI void $stopProcessingCrashes();

    MCNAPI bool $isCrashProcessingActive() const;

    MCNAPI std::string const& $getCrashDataRoot() const;

    MCNAPI std::string const& $getCrashedSessionFileSuffix() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
