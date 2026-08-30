#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/Event.h"
#include "mc/events/IEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
// clang-format on

namespace Social::Events {

class AggregationEventListener : public ::Social::Events::IEventListener {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AggregationEventListener();

    virtual void recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<AppPlatform> const&);

    virtual void sendEvents(bool);

    virtual void stopDebugEventLogging();

    virtual void sendEvent(::Social::Events::Event const&) = 0;

    virtual void _flushEventQueue();

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;

    virtual bool _isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AggregationEventListener(::Core::Path const&);

    MCNAPI AggregationEventListener(uint, uint, uint, ::Core::Path const&);

    MCNAPI void _sendNextEvent(std::unordered_map<std::string, std::deque<Social::Events::Event>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);

    MCNAPI void* $ctor(uint, uint, uint, ::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<AppPlatform> const&);

    MCNAPI void $sendEvents(bool);

    MCNAPI void $stopDebugEventLogging();

    MCNAPI void $_flushEventQueue();

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const&) const;

    MCNAPI bool $_isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
