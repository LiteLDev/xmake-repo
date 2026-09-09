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

class OneDSEditorEventListener : public ::Social::Events::AggregationEventListener {
public:
    // OneDSEditorEventListener inner types define
    using OnEventSerializedCallback = std::function<void(const std::string&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                       mCacheMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                        mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::Events::OneDSEventHelper>> mOneDSEventHelper;
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::Event>>               mCachedEvents;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                         mDroppedEventNames;
    ::ll::TypedStorage<8, 8, ulong>                                             mSeqNum;
    ::ll::TypedStorage<4, 4, uint>                                              mDroppedEvents;
    ::ll::TypedStorage<8, 24, std::string>                                      mLocale;
    ::ll::TypedStorage<8, 24, std::string>                                      mDeviceID;
    ::ll::TypedStorage<8, 24, std::string>                                      mGameVersion;
    ::ll::TypedStorage<8, 24, std::string>                                      mEdition;
    ::ll::TypedStorage<8, 24, std::string>                                      mPlatInfoOSVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEditorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OneDSEditorEventListener() = default;

    virtual int getEventTagsFilter() const;

    virtual void sendEvent(::Social::Events::Event const&);

    virtual void _flushEventQueue();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& ENDPOINT_IDENTIFIER();

    MCNAPI static std::string const& EVENT_NAMESPACE();

    MCNAPI static std::string const& ONEDS_URL();

    MCNAPI static std::string const& PARTA_IDENTIFIER();

    MCNAPI static uint const& sRegularSendIntervalSecs();
    // NOLINTEND
};

} // namespace Social::Events
