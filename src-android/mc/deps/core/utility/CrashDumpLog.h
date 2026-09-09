#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CrashDumpLogSink;
struct CrashDumpEventData;
struct CrashDumpFrameData;
struct CrashDumpGameplayData;
struct CrashDumpKeyValueData;
struct CrashDumpRenderData;
struct CrashDump_AllData;
// clang-format on

class CrashDumpLog {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void logEvent(::CrashDumpEventData const&);

    MCNAPI static void logFrame(::CrashDumpFrameData const&);

    MCNAPI static void logKeyValue(::CrashDumpKeyValueData const&);

    MCNAPI static void logRenderCall(::CrashDumpRenderData const&);

    MCNAPI static void setAssertMessage(char const*, int, char const*, char const*);

    MCNAPI static void setBehaviorPackIds(std::vector<std::string> const&);

    MCNAPI static bool setDeviceID(std::string const&);

    MCNAPI static bool setDeviceSessionID(std::string const&);

    MCNAPI static void setEditorWorld(bool);

    MCNAPI static void setGameVersion(char const*);

    MCNAPI static void setGraphicsMode(short);

    MCNAPI static void setMainSceneStack(std::vector<std::string> const&);

    MCNAPI static void setPlatform(char const*);

    MCNAPI static void setPlayerSceneStack(int, std::vector<std::string> const&);

    MCNAPI static void setResourcePackIds(std::vector<std::string> const&);

    MCNAPI static void setTotalMemory(ulong);

    MCNAPI static void setWorldSeed(long);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CrashDump_AllData*& mAllData();

    MCNAPI static std::mutex& mAssertDataMutex();

    MCNAPI static std::unique_ptr<std::thread>& mCrashDumpLog_logThread();

    MCNAPI static std::mutex& mCrashDumpThreadMutex();

    MCNAPI static std::condition_variable& mCrashDumpThreadMutexCV();

    MCNAPI static std::mutex& mEventDataMutex();

    MCNAPI static std::mutex& mFrameDataMutex();

    MCNAPI static std::mutex& mGameplayDataMutex();

    MCNAPI static std::mutex& mGlobalDataMutex();

    MCNAPI static bool& mIsThreadRunning();

    MCNAPI static std::mutex& mKeyValueDataMutex();

    MCNAPI static std::mutex& mPlayerDataMutex();

    MCNAPI static std::mutex& mRenderDataMutex();

    MCNAPI static ::CrashDumpLogSink*& mSink();
    // NOLINTEND
};
