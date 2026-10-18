#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class CrashFileProcessor {
public:
    // CrashFileProcessor inner types declare
    // clang-format off
    class CrashHandler;
    // clang-format on

    // CrashFileProcessor inner types define
    enum class ProcessMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
        SYNCHRONOUS  = 0,
        ASYNCHRONOUS = 1,
#else // @header-generator platform
        Synchronous  = 0,
        Asynchronous = 1,
#endif // @header-generator platform
    };

    class CrashHandler {
    public:
        // CrashHandler inner types declare
        // clang-format off
        struct StatusUpdate;
        // clang-format on

        // CrashHandler inner types define
        struct StatusUpdate {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::string> mStatusMessage;
            ::ll::TypedStorage<8, 24, std::string> mUploadError;
            ::ll::TypedStorage<8, 24, std::string> mUploadURI;
#else // @header-generator platform
            ::ll::UntypedStorage<8, 32> mUnk70a7bc;
            ::ll::UntypedStorage<8, 32> mUnka1d85a;
            ::ll::UntypedStorage<8, 32> mUnk5990f6;
#endif // @header-generator platform
            // NOLINTEND

        public:
#if defined(LL_PLAT_A) // @header-generator platform
            // member functions
            // NOLINTBEGIN
            MCNAPI ~StatusUpdate();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
#else // @header-generator platform
            // prevent constructor by default
            StatusUpdate& operator=(StatusUpdate const&);
            StatusUpdate(StatusUpdate const&);
            StatusUpdate();
#endif // @header-generator platform
        };

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~CrashHandler() = default;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::shared_ptr<Bedrock::SessionInfo> findCrashedSessionInfo(std::string_view) const = 0;
#else // @header-generator platform
        virtual ::std::shared_ptr<::Bedrock::SessionInfo>
        findCrashedSessionInfo(::std::string_view sessionId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&) = 0;
#else // @header-generator platform
        virtual void
        notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const& status) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void notifyDoneWithSession(std::string_view) = 0;
#else // @header-generator platform
        virtual void notifyDoneWithSession(::std::string_view sessionId) = 0;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using ProcessCrashHandle = ::Bedrock::Threading::Async<bool>;

    using NotNullCrashHandlerPtr = ::gsl::not_null<std::shared_ptr<Bedrock::CrashFileProcessor::CrashHandler>>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~CrashFileProcessor() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getSessionIDFromFile(std::string&, ::Core::PathBuffer<std::string> const&) const = 0;
#else // @header-generator platform
    virtual bool
    getSessionIDFromFile(::std::string& outSessionID, ::Core::PathBuffer<::std::string> const& filePath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::CrashFileProcessor::ProcessMode beginCrashProcessing(ulong, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::CrashFileProcessor::ProcessMode
    beginCrashProcessing(uint64, ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>, ::Scheduler&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> processCrash(::gsl::not_null<std::shared_ptr<Bedrock::CrashFileProcessor::CrashHandler>> const&, ::Core::PathBuffer<std::string> const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> processCrash(
        ::gsl::not_null<::std::shared_ptr<::Bedrock::CrashFileProcessor::CrashHandler>> const& handler,
        ::Core::PathBuffer<::std::string> const&                                               filePath
    ) = 0;
#endif // @header-generator platform

    virtual void doneCrashProcessing() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
