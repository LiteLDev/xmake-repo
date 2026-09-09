#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/events/AggregationEventListener.h"
#include "mc/events/Event.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace Social::Events { class OneDSEventHelper; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class OneDSEventListener : public ::Social::Events::AggregationEventListener {
public:
    // OneDSEventListener inner types define
    using OnEventSerializedCallback = std::function<void(const std::string&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mDisabledByExperiment;
    ::ll::TypedStorage<4, 40, std::mutex> mCacheMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastSend;
    ::ll::TypedStorage<8, 24, std::string> mEventNamespace;
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::Event>> mCachedEvents;
    ::ll::TypedStorage<8, 8, ulong> mSeqNum;
    ::ll::TypedStorage<4, 4, uint> mDroppedEvents;
    ::ll::TypedStorage<8, 24, std::string> mLocale;
    ::ll::TypedStorage<8, 24, std::string> mDeviceID;
    ::ll::TypedStorage<8, 24, std::string> mGameVersion;
    ::ll::TypedStorage<8, 24, std::string> mEdition;
    ::ll::TypedStorage<8, 24, std::string> mPlatInfoOSVersion;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::Events::OneDSEventHelper>> mOneDSEventHelper;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OneDSEventListener();

    virtual int getEventTagsFilter() const;

    virtual void sendEvent(::Social::Events::Event const&);

    virtual void _flushEventQueue();

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addDynamicPropertiesFromEvent(
        ::Json::Value&,
        ::brstd::flat_map<
            std::string,
            std::vector<Social::Events::Property>,
            std::less<std::string>,
            std::vector<std::string>,
            std::vector<std::vector<Social::Events::Property>>> const&
    );

    MCNAPI std::vector<std::string> _buildEventPayloads(
        std::vector<Social::Events::Event>,
        std::function<void(const std::string&, const std::string&)>
    );

    MCNAPI bool _sendBatch();

    MCNAPI void _sendEvents(std::string const&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& ENDPOINT_IDENTIFIER();

    MCNAPI static std::string const& ONEDS_URL();

    MCNAPI static std::string const& PARTA_IDENTIFIER();

    MCNAPI static std::string const& SAFETY_ENDPOINT_IDENTIFIER();

    MCNAPI static std::string const& SAFETY_PARTA_IDENTIFIER();

    MCNAPI static uint const& sRegularSendIntervalSecs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEventTagsFilter() const;

    MCNAPI void $sendEvent(::Social::Events::Event const&);

    MCNAPI void $_flushEventQueue();

    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
