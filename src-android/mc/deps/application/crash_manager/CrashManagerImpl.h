#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashManager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
namespace Bedrock { class CrashFileProcessor; }
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { class ICrashFileApi; }
namespace Bedrock { class SessionInfo; }
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
        ::ll::TypedStorage<8, 24, std::string>                                  mExtension;
        ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::CrashFileProcessor>> mProcessor;
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashProcessorInfo& operator=(CrashProcessorInfo const&);
        CrashProcessorInfo(CrashProcessorInfo const&);
        CrashProcessorInfo();

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
    };

    struct CrashedSessionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::SessionInfo>> mSession;
        ::ll::UntypedStorage<8, 24>                                      mFilePath;
        ::ll::TypedStorage<1, 1, bool>                                   mProcessed;
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashedSessionInfo& operator=(CrashedSessionInfo const&);
        CrashedSessionInfo(CrashedSessionInfo const&);

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
    };

    using PathVector = std::vector<Core::PathBuffer<std::string>>;

    using ProcessCrashResultHandle = ::Bedrock::Threading::Async<bool>;

    using ProcessCrashResult = bool;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashManagerImpl();

    virtual void initialize(::Bedrock::CrashManagerConfig const&);

    virtual void setCrashProcessorForFileType(std::string_view, std::shared_ptr<Bedrock::CrashFileProcessor>);

    virtual void setCrashTelemetryProcessor(::gsl::not_null<Bedrock::CrashTelemetryProcessor*>);

    virtual void processCrashes(std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool);

    virtual void notifyCrashed();

    virtual void notifySystemError(uint, std::string const&);

    virtual void recordCrashedSession(std::string_view, std::string_view, long);

    virtual void stopProcessingCrashes();

    virtual bool isCrashProcessingActive() const;

    virtual std::string const& getCrashDataRoot() const;

    virtual std::string const& getCrashedSessionFileSuffix() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize(::Bedrock::CrashManagerConfig const&);

    MCNAPI void $setCrashProcessorForFileType(std::string_view, std::shared_ptr<Bedrock::CrashFileProcessor>);

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
    // NOLINTEND
};

} // namespace Bedrock
