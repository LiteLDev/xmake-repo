#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CrashDumpLogSink;
#else // @header-generator platform
#endif // @header-generator platform
struct CrashDumpEventData;
#if defined(LL_PLAT_A) // @header-generator platform
struct CrashDumpFrameData;
struct CrashDumpGameplayData;
#else // @header-generator platform
#endif // @header-generator platform
struct CrashDumpKeyValueData;
#if defined(LL_PLAT_A) // @header-generator platform
struct CrashDumpRenderData;
#else // @header-generator platform
#endif // @header-generator platform
struct CrashDump_AllData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

class CrashDumpLog {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void logEvent(::CrashDumpEventData const&);
#else // @header-generator platform
    MCNAPI static void crashDumpLogThreadRoutine();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void logFrame(::CrashDumpFrameData const&);
#else // @header-generator platform
    MCNAPI static void logEvent(::CrashDumpEventData const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void logKeyValue(::CrashDumpKeyValueData const&);
#else // @header-generator platform
    MCNAPI static void logKeyValue(::CrashDumpKeyValueData const& keyValueData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void logRenderCall(::CrashDumpRenderData const&);
#else // @header-generator platform
    MCNAPI static void setAssertMessage(char const* desc, int line, char const* file, char const* function);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setAssertMessage(char const*, int, char const*, char const*);
#else // @header-generator platform
    MCNAPI static void setBehaviorPackIds(::std::vector<::std::string> const& packIds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setBehaviorPackIds(std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI static bool setDeviceID(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool setDeviceID(std::string const&);
#else // @header-generator platform
    MCNAPI static bool setDeviceSessionID(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool setDeviceSessionID(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void setMainSceneStack(::std::vector<::std::string> const& sceneNames);

    MCNAPI static void setPlayerSceneStack(int playerIndex, ::std::vector<::std::string> const& sceneNames);

    MCNAPI static void setResourcePackIds(::std::vector<::std::string> const& packIds);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setEditorWorld(bool);
#else // @header-generator platform
    MCNAPI static bool startCrashDumpLogThread();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setGameVersion(char const*);

    MCNAPI static void setGraphicsMode(short);

    MCNAPI static void setMainSceneStack(std::vector<std::string> const&);

    MCNAPI static void setPlatform(char const*);

    MCNAPI static void setPlayerSceneStack(int, std::vector<std::string> const&);

    MCNAPI static void setResourcePackIds(std::vector<std::string> const&);

    MCNAPI static void setTotalMemory(ulong);

    MCNAPI static void setWorldSeed(long);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI static void stopCrashDumpLogThread();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CrashDump_AllData*& mAllData();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mAssertDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mAssertDataMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<std::thread>& mCrashDumpLog_logThread();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::std::thread>& mCrashDumpLog_logThread();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mCrashDumpThreadMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mCrashDumpThreadMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::condition_variable& mCrashDumpThreadMutexCV();
#else // @header-generator platform
    MCNAPI static ::std::condition_variable& mCrashDumpThreadMutexCV();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mEventDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mEventDataMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mFrameDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mFrameDataMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mGameplayDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mGameplayDataMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mGlobalDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mGlobalDataMutex();
#endif // @header-generator platform

    MCNAPI static bool& mIsThreadRunning();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mKeyValueDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mKeyValueDataMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mPlayerDataMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mPlayerDataMutex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& mRenderDataMutex();

    MCNAPI static ::CrashDumpLogSink*& mSink();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& mRenderDataMutex();
#endif // @header-generator platform
    // NOLINTEND
};
