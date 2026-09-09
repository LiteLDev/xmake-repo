#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/IsMarketplaceContent.h"
#include "mc/PerfContextGameplayMode.h"
#include "mc/PerfContextGameplayModeResolver.h"
#include "mc/events/NetworkType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/profile/FrameAnomalyDetectorSummary.h"
#include "mc/util/PerfContextEvent.h"
#include "mc/util/PerfContextTrackerReport.h"

// auto generated forward declare list
// clang-format off
class Level;
class PerfContextTrackerReportLite;
// clang-format on

class PerfContextTracker {
public:
    // PerfContextTracker inner types declare
    // clang-format off
    class Duration;
    class Timer;
    class EventScope;
    // clang-format on

    // PerfContextTracker inner types define
    class Duration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDuration;
        ::ll::TypedStorage<8, 8, ulong>                                                       mCount;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Duration();

        virtual void reset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $reset();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class Timer : public ::PerfContextTracker::Duration {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mRunning;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStart;
        // clang-format on
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Timer();

        virtual void reset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $reset();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class EventScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PerfContextEvent>           mEventType;
        ::ll::TypedStorage<8, 40, ::PerfContextTracker::Timer> mTimer;
        // NOLINTEND

    public:
        // prevent constructor by default
        EventScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit EventScope(::PerfContextEvent);

        MCNAPI ~EventScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::PerfContextEvent);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using EventReporter =
        ::brstd::function_ref<void(const PerfContextTrackerReport&) const, void(const PerfContextTrackerReport&)>;

    using GatherData = ::brstd::function_ref<void() const, void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                    mInternalLock;
    ::ll::TypedStorage<1, 1, bool>                                           mActive;
    ::ll::TypedStorage<8, 24, std::string>                                   mActiveContext;
    ::ll::TypedStorage<8, 40, ::PerfContextTracker::Timer>                   mContextTimer;
    ::ll::TypedStorage<8, 288, std::array<PerfContextTracker::Duration, 12>> mEventDurations;
    ::ll::TypedStorage<8, 264, ::PerfContextTrackerReport>                   mReport;
    ::ll::TypedStorage<4, 4, uint>                                           mClientCount;
    ::ll::TypedStorage<4, 4, uint>                                           mRenderDistance;
    ::ll::TypedStorage<4, 4, uint>                                           mSimDistance;
    ::ll::TypedStorage<4, 4, uint>                                           mSentPackets;
    ::ll::TypedStorage<4, 4, uint>                                           mSentPacketsSize;
    ::ll::TypedStorage<4, 4, uint>                                           mReceivedPackets;
    ::ll::UntypedStorage<4, 16>                                              mReceivedPacketsSize;
    ::ll::UntypedStorage<8, 48>                                              mFrameAnomalySummaryProvider;
    ::ll::TypedStorage<8, 16, ::PerfContextGameplayModeResolver>             mGameplayModeResolver;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerfContextTracker();

    MCNAPI void _reset();

    MCNAPI bool _tryBeginContext(
        std::string const&,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
    );

    MCNAPI void _tryEndContext(
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
    );

    MCNAPI void _tryReport(
        ::brstd::function_ref<void(const PerfContextTrackerReport&) const, void(const PerfContextTrackerReport&)>,
        ::brstd::function_ref<void() const, void()>
    );

    MCNAPI bool _tryRestartContext(
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
    );

    MCNAPI void clear();

    MCNAPI ::PerfContextGameplayMode getGameplayMode();

    MCNAPI void incrementPacketReceivedInfo(uint);

    MCNAPI void incrementPacketSentInfo(uint);

    MCNAPI void notifyEnterGame(::IsMarketplaceContent);

    MCNAPI void notifyExitGame();

    MCNAPI void notifySetGameNetworkType(::NetworkType);

    MCNAPI void notifySetLevel(::Level*);

    MCNAPI void onAppResume();

    MCNAPI void onAppSuspend();

    MCNAPI ::PerfContextTrackerReportLite peekReportLite() const;

    MCNAPI void setActorRenderCount(int);

    MCNAPI void setMobCount(uint);

    MCNAPI void tick(
        std::string const&,
        uint,
        uint,
        uint,
        ::brstd::function_ref<void(const PerfContextTrackerReport&) const, void(const PerfContextTrackerReport&)>,
        ::brstd::function_ref<void() const, void()>
    );

    MCNAPI ~PerfContextTracker();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PerfContextTracker& getInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
