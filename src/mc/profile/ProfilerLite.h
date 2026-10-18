#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#endif // @header-generator platform
#include "mc/network/TrackerType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
class _ProfilerLiteTimer;
struct NetworkStatMetrics;
struct ProfilerResourceUsage;
namespace Bedrock { class ScopeExit; }
namespace Core { class Path; }
// clang-format on

class ProfilerLite {
public:
    // ProfilerLite inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ScopedData;
#else // @header-generator platform
#endif // @header-generator platform
    struct RealtimeFrameData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ScopedData;
#endif // @header-generator platform
    // clang-format on

    // ProfilerLite inner types define
    enum class ScopeTag : int {
        None            = 0,
        Root            = 1,
        PreFrame        = 2,
        BeginFrame      = 3,
        ClientInstance  = 4,
        EndFrame        = 5,
        Present         = 6,
        Input           = 7,
        ClientSimTick   = 8,
        ClientRealTick  = 9,
        ServerInstance  = 10,
        ServerSimTick   = 11,
        ServerRealTick  = 12,
        Render          = 13,
        RenderLevel     = 14,
        TickAndRenderUI = 15,
        UpdateFrame     = 16,
        UpdateGame      = 17,
        Last            = 17,
        SimTickFirst    = 8,
        SimTickLast     = 12,
        RenderTickFirst = 13,
        RenderTickLast  = 15,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RealtimeFrameData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                       mGameUpdates;
        ::ll::TypedStorage<4, 4, uint>                       mFrames;
        ::ll::TypedStorage<4, 4, float>                      mFPS;
        ::ll::TypedStorage<4, 4, float>                      mGameUpdateFPS;
        ::ll::TypedStorage<4, 4, float>                      mFrameTime;
        ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mLastFrame;
        ::ll::TypedStorage<1, 1, bool>                       mFirstFrame;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct ScopedData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, char const*>                             mName;
        ::ll::TypedStorage<4, 4, ::ProfilerLite::ScopeTag>                mScope;
        ::ll::TypedStorage<4, 4, ::ProfilerLite::ScopeTag>                mBaseScope;
        ::ll::TypedStorage<8, 8, ::ProfilerLite::ScopedData*>             mParent;
        ::ll::TypedStorage<4, 4, int>                                     mTabCount;
        ::ll::TypedStorage<8, 24, std::vector<ProfilerLite::ScopedData*>> mChildren;
        ::ll::TypedStorage<4, 4, int>                                     mHitCount;
        ::ll::TypedStorage<8, 8, double>                                  mTotalTime;
        ::ll::TypedStorage<8, 8, double>                                  mTotalInclusiveTime;
        ::ll::TypedStorage<8, 8, double>                                  mMaxTimePerLoop;
        ::ll::TypedStorage<8, 8, double>                                  mFrameAccumulatedTime;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, char const*>                                 mName;
        ::ll::TypedStorage<4, 4, ::ProfilerLite::ScopeTag>                    mScope;
        ::ll::TypedStorage<4, 4, ::ProfilerLite::ScopeTag>                    mBaseScope;
        ::ll::TypedStorage<8, 8, ::ProfilerLite::ScopedData*>                 mParent;
        ::ll::TypedStorage<4, 4, int>                                         mTabCount;
        ::ll::TypedStorage<8, 24, ::std::vector<::ProfilerLite::ScopedData*>> mChildren;
        ::ll::TypedStorage<4, 4, int>                                         mHitCount;
        ::ll::TypedStorage<8, 8, double>                                      mTotalTime;
        ::ll::TypedStorage<8, 8, double>                                      mTotalInclusiveTime;
        ::ll::TypedStorage<8, 8, double>                                      mMaxTimePerLoop;
        ::ll::TypedStorage<8, 8, double>                                      mFrameAccumulatedTime;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void resetRecursive();

        MCNAPI ~ScopedData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RealtimeFrameData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                        mGameUpdates;
        ::ll::TypedStorage<4, 4, uint>                                                        mFrames;
        ::ll::TypedStorage<4, 4, float>                                                       mFPS;
        ::ll::TypedStorage<4, 4, float>                                                       mGameUpdateFPS;
        ::ll::TypedStorage<4, 4, float>                                                       mFrameTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLastFrame;
        ::ll::TypedStorage<1, 1, bool>                                                        mFirstFrame;
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void resetRecursive();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

    using EventSource = ::brstd::function_ref<
#if defined(LL_PLAT_A) // @header-generator platform
        void(brstd::function_ref<void(const std::string&, double), void(const std::string&, double)>)>;
#else // @header-generator platform
        void(::brstd::function_ref<void(::std::string const&, double), void(::std::string const&, double)>)>;

    using EventVisitor = ::brstd::function_ref<void(::std::string const&, double)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 144, std::array<ProfilerLite::ScopedData*, 18>> mCustomScopeDatas;
    ::ll::TypedStorage<8, 96, ::ProfilerLite::ScopedData>                 mUninitializedScopedData;
    ::ll::UntypedStorage<8, 24>                                           mLogFileName;
    ::ll::UntypedStorage<8, 304>                                          mLogFile;
    ::ll::UntypedStorage<8, 24>                                           mScreenLoadLogFileName;
    ::ll::UntypedStorage<8, 304>                                          mScreenLoadLogFile;
    ::ll::UntypedStorage<8, 24>                                           mEventLogFileName;
    ::ll::UntypedStorage<8, 304>                                          mEventLogFile;
    ::ll::UntypedStorage<8, 24>                                           mSecondaryLogFileName;
    ::ll::UntypedStorage<8, 304>                                          mSecondaryLogFile;
    ::ll::UntypedStorage<8, 24>                                           mSecondaryScreenLoadLogFileName;
    ::ll::UntypedStorage<8, 304>                                          mSecondaryScreenLoadLogFile;
    ::ll::UntypedStorage<8, 24>                                           mSecondaryEventLogFileName;
    ::ll::UntypedStorage<8, 304>                                          mSecondaryEventLogFile;
    ::ll::TypedStorage<4, 4, float>                                       mSecondsPerUpdate;
    ::ll::TypedStorage<8, 8, double>                                      mTime;
    ::ll::TypedStorage<8, 8, double>                                      mStartTime;
    ::ll::TypedStorage<8, 8, double>                                      mNextUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                      mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                      mBenchmarkModeTime;
    ::ll::TypedStorage<4, 4, int>                                         mTicksToNextMemoryUpdate;
    ::ll::TypedStorage<1, 1, bool>                                        mBenchmarkModeDone;
    ::ll::TypedStorage<1, 1, bool>                                        mBenchmarkModeIsSetup;
    ::ll::TypedStorage<1, 1, bool>                                        mDefaultEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mForceEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldCheckTreatments;
    ::ll::TypedStorage<1, 1, bool>                                        mCanLogToSecondaryFile;
    ::ll::TypedStorage<8, 8, ::_ProfilerLiteTimer*>                       mActiveScope;
    ::ll::UntypedStorage<8, 24>                                           mThreadedActiveScopes;
    ::ll::TypedStorage<8, 24, std::string>                                mCurrentGamestate;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDebugServerTickTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDebugServerNetworkTime;
    ::ll::TypedStorage<4, 4, float>                                                       mDebugRemoteServerTickTime;
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                    mTelemetry;
    ::ll::TypedStorage<8, 24, std::string>                                                mCachedProfileString;
    ::ll::TypedStorage<4, 16, std::array<uint, 4>>                                        mLastNetworkStatSampleNum;
    ::ll::TypedStorage<8, 8, ulong>                                                       mPrevTotalBytesWritten;
    ::ll::TypedStorage<8, 8, ulong>                                                       mPrevTotalBytesRead;
    ::ll::TypedStorage<8, 40, ::ProfilerLite::RealtimeFrameData>                          mFrameData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 144, ::std::array<::ProfilerLite::ScopedData*, 18>> mCustomScopeDatas;
    ::ll::TypedStorage<8, 96, ::ProfilerLite::ScopedData>                     mUninitializedScopedData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                      mLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mScreenLoadLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                      mScreenLoadLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mEventLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                      mEventLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mSecondaryLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                      mSecondaryLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mSecondaryScreenLoadLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                      mSecondaryScreenLoadLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mSecondaryEventLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                      mSecondaryEventLogFile;
#ifdef LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMemTrackerConfigurationToggleSubscription;
#endif
    ::ll::TypedStorage<4, 4, float>                                                 mSecondsPerUpdate;
    ::ll::TypedStorage<8, 8, double>                                                mTime;
    ::ll::TypedStorage<8, 8, double>                                                mStartTime;
    ::ll::TypedStorage<8, 8, double>                                                mNextUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                mBenchmarkModeTime;
    ::ll::TypedStorage<4, 4, int>                                                   mTicksToNextMemoryUpdate;
    ::ll::TypedStorage<1, 1, bool>                                                  mBenchmarkModeDone;
    ::ll::TypedStorage<1, 1, bool>                                                  mBenchmarkModeIsSetup;
    ::ll::TypedStorage<1, 1, bool>                                                  mDefaultEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  mForceEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  mShouldCheckTreatments;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanLogToSecondaryFile;
    ::ll::TypedStorage<8, 8, ::_ProfilerLiteTimer*>                                 mActiveScope;
    ::ll::TypedStorage<8, 16, ::std::map<::std::thread::id, ::_ProfilerLiteTimer*>> mThreadedActiveScopes;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mCurrentGamestate;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mDebugServerTickTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mDebugServerNetworkTime;
    ::ll::TypedStorage<4, 4, float>                                                 mDebugRemoteServerTickTime;
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                              mTelemetry;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mCachedProfileString;
    ::ll::TypedStorage<4, 16, ::std::array<uint, 4>>                                mLastNetworkStatSampleNum;
    ::ll::TypedStorage<8, 8, uint64>                                                mPrevTotalBytesWritten;
    ::ll::TypedStorage<8, 8, uint64>                                                mPrevTotalBytesRead;
    ::ll::TypedStorage<8, 40, ::ProfilerLite::RealtimeFrameData>                    mFrameData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _getProfileStringRecursive(::ProfilerLite::ScopedData&, ulong&, ulong&, char*&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _getProfileStringRecursive(
        ::ProfilerLite::ScopedData& scope,
        uint64&                     writeCount,
        uint64&                     remainingLength,
        char*&                      stringBuilderTemp
    );

    MCFOLD void _shutdown();

    MCAPI void applyProfilerOptions(bool isClientDiagnosticsEnabled);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _shutdown();
#else // @header-generator platform
    MCAPI ::_ProfilerLiteTimer* getActiveScope(::std::thread::id threadId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyProfilerOptions(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::ScopeExit init(::Core::Path const& logFilePath);

    MCAPI void initWithFlightingAndOptions(bool isClientDiagnosticsEnabled);

    MCAPI void logMultipleTimedEvents(
        ::brstd::function_ref<
            void(::brstd::function_ref<void(::std::string const&, double), void(::std::string const&, double)>)> events
    );

    MCAPI void logScreenCreationEvent(::std::string const& screenName, double creationTime, uchar clientID);

    MCAPI void reset();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateAndSetServerNetworkTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
#else // @header-generator platform
    MCAPI void setActiveScope(::std::thread::id threadId, ::_ProfilerLiteTimer* newScope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateAndSetServerTickTimes(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000000>> getServerTickTime() const;

    MCNAPI ::Bedrock::ScopeExit init(::Core::Path const&);

    MCNAPI void initWithFlightingAndOptions(bool);

    MCNAPI bool isBenchmarkModeDone();

    MCNAPI void logMultipleTimedEvents(
        ::brstd::function_ref<
            void(brstd::function_ref<void(const std::string&, double), void(const std::string&, double)>)>
    );

    MCNAPI void logScreenCreationEvent(std::string const&, double, uchar);

    MCNAPI void reset();

    MCNAPI bool tick(bool, bool, bool, int, ::ProfilerResourceUsage const&, bool);

    MCNAPI ~ProfilerLite();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool tick(
        bool                           isVSynced,
        bool                           frameDiscarded,
        bool                           outputProfilerInfo,
        int                            benchmarkModeStartTime,
        ::ProfilerResourceUsage const& resources,
        bool                           logPackets
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void getNetworkStats(::NetworkStatMetrics&, uint&, ::TrackerType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    _writeHeadersIfEmpty(::std::string const& header, ::Core::Path logFileName, ::Core::OutputFileStream& file);

    MCAPI static void getNetworkStats(::NetworkStatMetrics& stats, uint& lastSampleNum, ::TrackerType type);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ProfilerLite& gProfilerLiteInstance();

    MCNAPI static std::__thread_id& sEmptyThreadID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::ProfilerLite& gProfilerLiteInstance();
#endif // @header-generator platform
    // NOLINTEND
};
