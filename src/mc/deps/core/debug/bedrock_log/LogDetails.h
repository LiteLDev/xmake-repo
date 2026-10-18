#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "cstdarg"
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/diagnostics/LogAreaID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/diagnostics/bedrock_log/LogAreaFilter.h"
#include "mc/platform/diagnostics/bedrock_log/LogChannel.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class LogSettingsUpdater;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class LogSettingsUpdater;
#endif // @header-generator platform
// clang-format on

namespace BedrockLog {

struct LogDetails {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80>  mUnkd6e125;
    ::ll::UntypedStorage<1, 1>   mUnk3fa36f;
    ::ll::UntypedStorage<1, 1>   mUnk9c26d4;
    ::ll::UntypedStorage<1, 1>   mUnk9ff44e;
    ::ll::UntypedStorage<8, 32>  mUnk13ee41;
    ::ll::UntypedStorage<8, 32>  mUnkdd0f61;
    ::ll::UntypedStorage<8, 296> mUnk52b3f7;
    ::ll::UntypedStorage<1, 1>   mUnk98388d;
    ::ll::UntypedStorage<1, 1>   mUnkbd562e;
    ::ll::UntypedStorage<1, 1>   mUnk8dc1a4;
    ::ll::UntypedStorage<1, 1>   mUnkef8f13;
    ::ll::UntypedStorage<1, 1>   mUnk94b151;
    ::ll::UntypedStorage<1, 1>   mUnk39777d;
    ::ll::UntypedStorage<1, 1>   mUnk2f550b;
    ::ll::UntypedStorage<1, 1>   mUnke5f581;
    ::ll::UntypedStorage<1, 1>   mUnkf140b5;
    ::ll::UntypedStorage<1, 1>   mUnkd577e9;
    ::ll::UntypedStorage<4, 4>   mUnk2ef1c2;
    ::ll::UntypedStorage<8, 8>   mUnkbdf6bc;
    ::ll::UntypedStorage<8, 8>   mUnk3dc6d5;
    ::ll::UntypedStorage<1, 1>   mUnk381674;
    ::ll::UntypedStorage<8, 8>   mUnk4c7730;
    ::ll::UntypedStorage<8, 8>   mUnk9d155d;
    ::ll::UntypedStorage<4, 4>   mUnke1734c;
    ::ll::UntypedStorage<8, 16>  mUnka42560;
    ::ll::UntypedStorage<8, 16>  mUnkba0ae8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LogDetails& operator=(LogDetails const&);
    LogDetails(LogDetails const&);
    LogDetails();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _logToFile(std::string const&);
#else // @header-generator platform
    MCAPI void _logToFile(::std::string const& debugEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _log_va(::LogAreaID, uint, char const*, int, int, char const*, ::__va_list);
#else // @header-generator platform
    MCAPI void _log_va(
        ::LogAreaID _area,
        uint        _priority,
        char const* _function,
        int         line,
        int         _messageId,
        char const* pszFormat,
        char*       argptr
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _makeLogString(std::string, ::LogAreaID, uint, std::string, int, int, std::string const&);
#else // @header-generator platform
    MCAPI ::std::string _makeLogString(
        ::std::string        timestamp,
        ::LogAreaID          area,
        uint                 priority,
        ::std::string        functionName,
        int                  lineNumber,
        int                  messageId,
        ::std::string const& logMessage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _openLogFile();
#else // @header-generator platform
    MCAPI void _openLogFile();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    createLog(::Core::Path const&, std::string const&, std::string const&, bool, ::LogSettingsUpdater*, double const);
#else // @header-generator platform
    MCAPI void closeLog();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateLogSetting(std::string const&, bool);
#else // @header-generator platform
    MCAPI void createLog(
        ::Core::Path const&   _logFilePath,
        ::std::string const&  _logFileName,
        ::std::string const&  _debugLogTimestamp,
        bool                  createLogFile,
        ::LogSettingsUpdater* _settings,
        double const          _logCycleInS
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LogDetails();
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void updateLogFilter(
        ::std::unique_ptr<::LogSettingsUpdater> options,
        ::std::string const&                    filterType,
        ::std::vector<::std::string> const&     filters,
        ::std::string&                          result,
        bool                                    toggle
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void updateLogSetting(::std::string const& setting, bool newValue);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BedrockLog
