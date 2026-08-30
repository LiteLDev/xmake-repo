#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/bedrock_log/LogAreaFilter.h"
#include "mc/platform/diagnostics/bedrock_log/LogChannel.h"

// auto generated forward declare list
// clang-format off
class LogSettingsUpdater;
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {

struct LogDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::recursive_mutex>            mLogMutex;
    ::ll::TypedStorage<1, 1, bool>                             mLogFilteringEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mUseLogFile;
    ::ll::TypedStorage<1, 1, bool>                             mLogFileCreated;
    ::ll::UntypedStorage<8, 24>                                mDebugLogFileName;
    ::ll::UntypedStorage<8, 24>                                mLogFilePath;
    ::ll::UntypedStorage<8, 304>                               mLogFile;
    ::ll::TypedStorage<1, 1, bool>                             mFlushImmediate;
    ::ll::TypedStorage<1, 1, bool>                             mTimestamp;
    ::ll::TypedStorage<1, 1, bool>                             mTrace;
    ::ll::TypedStorage<1, 1, bool>                             mPriority;
    ::ll::TypedStorage<1, 1, bool>                             mArea;
    ::ll::TypedStorage<1, 1, bool>                             mThreadId;
    ::ll::TypedStorage<1, 1, bool>                             mAppend;
    ::ll::TypedStorage<1, 1, bool>                             mProcessId;
    ::ll::TypedStorage<1, 1, bool>                             mMessageId;
    ::ll::TypedStorage<1, 1, bool>                             mSilent;
    ::ll::TypedStorage<4, 4, uint>                             mPriorityFilter;
    ::ll::TypedStorage<8, 8, ::BedrockLog::LogAreaFilter>      mAreaFilter;
    ::ll::TypedStorage<8, 8, double>                           mFlushDelayTime;
    ::ll::TypedStorage<1, 1, bool>                             mCycleLog;
    ::ll::TypedStorage<8, 8, double>                           mLastOpenTime;
    ::ll::TypedStorage<8, 8, double>                           mCycleTime;
    ::ll::TypedStorage<4, 4, ::BedrockLog::LogChannel>         mChannel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLogAreaChangedObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLogPriorityChangedObserver;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _logToFile(std::string const&);

    MCNAPI void _log_va(::LogAreaID, uint, char const*, int, int, char const*, ::__va_list);

    MCNAPI std::string _makeLogString(std::string, ::LogAreaID, uint, std::string, int, int, std::string const&);

    MCNAPI void _openLogFile();

    MCNAPI void
    createLog(::Core::Path const&, std::string const&, std::string const&, bool, ::LogSettingsUpdater*, double const);

    MCNAPI void updateLogSetting(std::string const&, bool);

    MCNAPI ~LogDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BedrockLog
