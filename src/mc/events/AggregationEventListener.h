#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/events/Event.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/events/IEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Social::Events { class Event; }
#endif // @header-generator platform
// clang-format on

namespace Social::Events {

class AggregationEventListener : public ::Social::Events::IEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mMaxSecondsBetweenSends;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeOfLastSend;
    ::ll::TypedStorage<1, 1, bool> mSendDebugEventsToFile;
    ::ll::UntypedStorage<8, 24> mLogFileName;
    ::ll::TypedStorage<4, 40, std::mutex> mLogFileMutex;
    ::ll::UntypedStorage<8, 304> mLogFile;
    ::ll::TypedStorage<4, 40, std::mutex> mEventQueueMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::deque<Social::Events::Event>>> mNonAggregatedEventQueue;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::deque<Social::Events::Event>>> mAggregatedEventQueue;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::deque<Social::Events::Event>>> mCustomAggregatedEventQueue;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsSendingEvents;
    ::ll::TypedStorage<4, 4, uint> mCurrentEventQueueCount;
    ::ll::TypedStorage<4, 4, uint> mMaxEventsInBatch;
    ::ll::TypedStorage<4, 4, uint> mRegularSendIntervalSecs;
    ::ll::TypedStorage<4, 4, uint> mThrottledSendIntervalSecs;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnk5906f0;
    ::ll::UntypedStorage<8, 8>   mUnk6d36a6;
    ::ll::UntypedStorage<1, 1>   mUnka30829;
    ::ll::UntypedStorage<8, 32>  mUnk11517d;
    ::ll::UntypedStorage<8, 80>  mUnk9aa06e;
    ::ll::UntypedStorage<8, 296> mUnk7e3094;
    ::ll::UntypedStorage<8, 80>  mUnk63885d;
    ::ll::UntypedStorage<8, 64>  mUnk73b293;
    ::ll::UntypedStorage<8, 64>  mUnke6df3f;
    ::ll::UntypedStorage<8, 64>  mUnk99b689;
    ::ll::UntypedStorage<1, 1>   mUnk76b524;
    ::ll::UntypedStorage<4, 4>   mUnkd93415;
    ::ll::UntypedStorage<4, 4>   mUnk2079a4;
    ::ll::UntypedStorage<4, 4>   mUnk5e5b2e;
    ::ll::UntypedStorage<4, 4>   mUnkdb1c91;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AggregationEventListener& operator=(AggregationEventListener const&);
    AggregationEventListener(AggregationEventListener const&);
    AggregationEventListener();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AggregationEventListener();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~AggregationEventListener() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~AggregationEventListener() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<AppPlatform> const&);
#else // @header-generator platform
    virtual void recordEvent(
        ::Social::Events::Event const&                   event,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendEvents(bool);
#else // @header-generator platform
    virtual void sendEvents(bool forceSend) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopDebugEventLogging();
#else // @header-generator platform
    virtual void sendEvent(::Social::Events::Event const& event) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendEvent(::Social::Events::Event const&) = 0;
#else // @header-generator platform
    virtual void stopDebugEventLogging() /*override*/;
#endif // @header-generator platform

    virtual void _flushEventQueue();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;
#else // @header-generator platform
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const;
#endif // @header-generator platform

    virtual bool _isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AggregationEventListener(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit AggregationEventListener(::Core::Path const& logFileName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AggregationEventListener(uint, uint, uint, ::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI explicit AggregationEventListener(::Core::Path const& logFileName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendNextEvent(std::unordered_map<std::string, std::deque<Social::Events::Event>>&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI AggregationEventListener(
        uint                regBatchSize,
        uint                regSendInterval,
        uint                throttledSendInterval,
        ::Core::Path const& logFileName
    );
#endif

    MCNAPI void _recordAggregatedEvent(
        ::Social::Events::Event const&                                              event,
        ::std::unordered_map<::std::string, ::std::deque<::Social::Events::Event>>& eventQueue
    );

    MCNAPI void _sendNextEvent(::std::unordered_map<::std::string, ::std::deque<::Social::Events::Event>>& queueToSend);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& logFileName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, uint, uint, ::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Core::Path const& logFileName);
#endif

#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(uint regBatchSize, uint regSendInterval, uint throttledSendInterval, ::Core::Path const& logFileName);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<AppPlatform> const&);
#else // @header-generator platform
    MCNAPI void
    $recordEvent(::Social::Events::Event const& event, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendEvents(bool);
#else // @header-generator platform
    MCNAPI void $sendEvents(bool forceSend);
#endif // @header-generator platform

    MCNAPI void $stopDebugEventLogging();

    MCNAPI void $_flushEventQueue();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const&) const;
#else // @header-generator platform
    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;
#endif // @header-generator platform

    MCNAPI bool $_isListenerReadyForEvents() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
