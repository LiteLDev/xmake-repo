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
        SYNCHRONOUS  = 0,
        ASYNCHRONOUS = 1,
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
            ::ll::TypedStorage<8, 24, std::string> mStatusMessage;
            ::ll::TypedStorage<8, 24, std::string> mUploadError;
            ::ll::TypedStorage<8, 24, std::string> mUploadURI;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~StatusUpdate();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~CrashHandler() = default;

        virtual std::shared_ptr<Bedrock::SessionInfo> findCrashedSessionInfo(std::string_view) const = 0;

        virtual void notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&) = 0;

        virtual void notifyDoneWithSession(std::string_view) = 0;
        // NOLINTEND
    };

    using ProcessCrashHandle = ::Bedrock::Threading::Async<bool>;

    using NotNullCrashHandlerPtr = ::gsl::not_null<std::shared_ptr<Bedrock::CrashFileProcessor::CrashHandler>>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CrashFileProcessor() = default;

    virtual bool getSessionIDFromFile(std::string&, ::Core::PathBuffer<std::string> const&) const = 0;

    virtual ::Bedrock::CrashFileProcessor::ProcessMode beginCrashProcessing(ulong, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&) = 0;

    virtual ::Bedrock::Threading::Async<bool> processCrash(::gsl::not_null<std::shared_ptr<Bedrock::CrashFileProcessor::CrashHandler>> const&, ::Core::PathBuffer<std::string> const&) = 0;

    virtual void doneCrashProcessing() = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
