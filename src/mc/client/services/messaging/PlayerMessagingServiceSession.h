#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Json { class Value; }
// clang-format on

class PlayerMessagingServiceSession : public ::std::enable_shared_from_this<PlayerMessagingServiceSession> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&> mOwner;
    ::ll::TypedStorage<4, 20, ::RetryDelay> mStartSessionRequestDelay;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mSessionStarted;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mStartingSession;
    ::ll::TypedStorage<8, 24, std::string> mSessionID;
    ::ll::TypedStorage<8, 24, std::string> mPreviousSessionId;
    ::ll::TypedStorage<8, 24, std::string> mContinuationToken;
    ::ll::TypedStorage<4, 4, int> mReportFrequency;
    ::ll::TypedStorage<4, 4, int> mTotalNumberOfMessages;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mRefreshingSession;
    ::ll::TypedStorage<4, 20, ::RetryDelay> mRefreshSessionDelay;
    ::ll::TypedStorage<1, 1, bool> mSessionFailed;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mRefreshingPlayerSafetySession;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsPlayerSafetySessionRefreshWindowActive;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPlayerSafetyRefreshSessionTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPlayerSafetyRefreshWindowActivationTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mPlayerSafetyRefreshSessionDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPlayerSafetyRefreshInterval;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingServiceSession& operator=(PlayerMessagingServiceSession const&);
    PlayerMessagingServiceSession(PlayerMessagingServiceSession const&);
    PlayerMessagingServiceSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerMessagingServiceSession(::PlayerMessagingService&);

    MCNAPI bool _handleServerResponse(::Json::Value&);

    MCNAPI void _loadPreviousSession();

    MCNAPI void _saveSession();

    MCNAPI void _sendSessionStart();

    MCNAPI void _tryRefreshSession();

    MCNAPI void _tryStartSession();

    MCNAPI void activatePlayerSafetySessionRefreshWindow();

    MCNAPI void retrieveMoreMessagesForInboxCategory(std::string const&, std::string const&);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService&);
    // NOLINTEND
};
#else // @header-generator platform
class PlayerMessagingServiceSession {};
#endif // @header-generator platform
