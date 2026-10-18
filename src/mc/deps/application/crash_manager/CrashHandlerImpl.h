#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashFileProcessor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/crash_manager/CrashUploadStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class CrashManagerImpl; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock { class SessionInfo; }
// clang-format on

namespace Bedrock {

class CrashHandlerImpl : public ::Bedrock::CrashFileProcessor::CrashHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Bedrock::CrashManagerImpl&> mManager;
    ::ll::TypedStorage<8, 168, ::Bedrock::CrashUploadStatus> mUploadStatus;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk3b4d5e;
    ::ll::UntypedStorage<8, 216> mUnkdcd511;
    ::ll::UntypedStorage<8, 8>   mUnk622432;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CrashHandlerImpl& operator=(CrashHandlerImpl const&);
    CrashHandlerImpl(CrashHandlerImpl const&);
    CrashHandlerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrashHandlerImpl();
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::SessionInfo> findCrashedSessionInfo(::std::string_view sessionId) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Bedrock::SessionInfo> findCrashedSessionInfo(std::string_view) const;
#else // @header-generator platform
    virtual void
    notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const& status) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&);

    virtual void notifyDoneWithSession(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void notifyDoneWithSession(::std::string_view sessionId) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Bedrock::SessionInfo> $findCrashedSessionInfo(std::string_view) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::shared_ptr<::Bedrock::SessionInfo> $findCrashedSessionInfo(::std::string_view sessionId) const;

    MCNAPI void $notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const& status);

    MCNAPI void $notifyDoneWithSession(::std::string_view sessionId);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifyDoneWithSession(std::string_view);
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
