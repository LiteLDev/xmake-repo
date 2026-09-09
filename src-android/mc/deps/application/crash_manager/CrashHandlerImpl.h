#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashFileProcessor.h"
#include "mc/deps/application/crash_manager/CrashUploadStatus.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class CrashManagerImpl; }
namespace Bedrock { class SessionInfo; }
// clang-format on

namespace Bedrock {

class CrashHandlerImpl : public ::Bedrock::CrashFileProcessor::CrashHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Bedrock::CrashManagerImpl&> mManager;
    ::ll::TypedStorage<8, 168, ::Bedrock::CrashUploadStatus> mUploadStatus;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CrashHandlerImpl& operator=(CrashHandlerImpl const&);
    CrashHandlerImpl(CrashHandlerImpl const&);
    CrashHandlerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashHandlerImpl();

    virtual std::shared_ptr<Bedrock::SessionInfo> findCrashedSessionInfo(std::string_view) const;

    virtual void notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&);

    virtual void notifyDoneWithSession(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<Bedrock::SessionInfo> $findCrashedSessionInfo(std::string_view) const;

    MCNAPI void $notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&);

    MCNAPI void $notifyDoneWithSession(std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
