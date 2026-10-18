#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/IsMarketplaceContent.h"
#include "mc/PerfContextGameplayMode.h"
#include "mc/PerfContextGameplayModeResolver.h"
#include "mc/events/NetworkType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/profile/FrameAnomalyDetectorSummary.h"
#include "mc/util/PerfContextEvent.h"
#include "mc/util/PerfContextTrackerReport.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
class PerfContextTrackerReport;
#endif // @header-generator platform
class PerfContextTrackerReportLite;
// clang-format on

class PerfContextTracker {
public:
    // PerfContextTracker inner types declare
    // clang-format off
    class Duration;
#if defined(LL_PLAT_A) // @header-generator platform
    class Timer;
#else // @header-generator platform
#endif // @header-generator platform
    class EventScope;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class Timer;
#endif // @header-generator platform
    // clang-format on

    // PerfContextTracker inner types define
    class Duration {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDuration;
        ::ll::TypedStorage<8, 8, ulong>                                                       mCount;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk954db5;
        ::ll::UntypedStorage<8, 8> mUnk3c6902;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Duration& operator=(Duration const&);
        Duration(Duration const&);
        Duration();
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~Duration();
#else // @header-generator platform
        virtual ~Duration() = default;
#endif // @header-generator platform

        virtual void reset();
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $reset();
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

    class EventScope {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::PerfContextEvent>           mEventType;
        ::ll::TypedStorage<8, 40, ::PerfContextTracker::Timer> mTimer;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnkad1144;
        ::ll::UntypedStorage<8, 40> mUnk7fb3d1;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        EventScope& operator=(EventScope const&);
        EventScope(EventScope const&);
#endif // @header-generator platform
        EventScope();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit EventScope(::PerfContextEvent);

#else // @header-generator platform
#endif // @header-generator platform
        MCNAPI ~EventScope();
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::PerfContextEvent);
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using EventReporter =
        ::brstd::function_ref<void(const PerfContextTrackerReport&) const, void(const PerfContextTrackerReport&)>;
#else // @header-generator platform
    class Timer : public ::PerfContextTracker::Duration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk93228d;
        ::ll::UntypedStorage<8, 8> mUnk5ef954;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using GatherData = ::brstd::function_ref<void() const, void()>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        Timer& operator=(Timer const&);
        Timer(Timer const&);
        Timer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void reset() /*override*/;
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
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80>  mUnk7bb973;
    ::ll::UntypedStorage<1, 1>   mUnkee6e42;
    ::ll::UntypedStorage<8, 32>  mUnk2b7e27;
    ::ll::UntypedStorage<8, 40>  mUnkeefdc7;
    ::ll::UntypedStorage<8, 288> mUnk7e0308;
    ::ll::UntypedStorage<8, 272> mUnk8e863b;
    ::ll::UntypedStorage<4, 4>   mUnkf2b035;
    ::ll::UntypedStorage<4, 4>   mUnke5955e;
    ::ll::UntypedStorage<4, 4>   mUnk4f5d25;
    ::ll::UntypedStorage<4, 4>   mUnkaed369;
    ::ll::UntypedStorage<4, 4>   mUnkccc016;
    ::ll::UntypedStorage<4, 4>   mUnk66f8d6;
    ::ll::UntypedStorage<4, 4>   mUnk800a03;
    ::ll::UntypedStorage<8, 64>  mUnk39cda4;
    ::ll::UntypedStorage<8, 16>  mUnke4d432;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&);
    PerfContextTracker(PerfContextTracker const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerfContextTracker();

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool _tryBeginContext(::std::string const& contextName, ::std::chrono::steady_clock::time_point const& now);

    MCNAPI void _tryEndContext(::std::chrono::steady_clock::time_point const& now);

    MCNAPI void clear();

    MCNAPI void onAppResume();

    MCNAPI void onAppSuspend();

    MCNAPI ::PerfContextTrackerReportLite peekReportLite() const;

    MCNAPI void tick(
        ::std::string const& currentContext,
        uint                 clientCount,
        uint                 renderDistance,
        uint                 simDistance,
        ::brstd::function_ref<void(::PerfContextTrackerReport const&) const, void(::PerfContextTrackerReport const&)>
                                                    reporter,
        ::brstd::function_ref<void() const, void()> gatherData
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
