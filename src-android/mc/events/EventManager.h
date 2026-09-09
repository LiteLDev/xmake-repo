#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/Property.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class TaskGroup;
class TaskResult;
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Json { class Value; }
namespace Social::Events { class Event; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { struct EventManagerArguments; }
// clang-format on

namespace Social::Events {

class EventManager {
public:
    // EventManager inner types define
    using DelayedTelemetryEventHandler = std::function<void(const Json::Value&, uint)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Social::Events::IEventListener>>> mEventListeners;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::Property>> mGlobalProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::Property>> mCommonProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::unordered_map<std::string, Social::Events::Property>>> mPlayerCommonProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::unordered_map<std::string, Social::Events::Property>>> mPlayerGlobalProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<Social::Events::Property>>> mDynamicProperties;
    ::ll::UntypedStorage<1, 140> mGlobalPropertiesMutex;
    ::ll::UntypedStorage<1, 140> mCommonPropertiesMutex;
    ::ll::UntypedStorage<1, 140> mPlayerCommonPropertiesMutex;
    ::ll::UntypedStorage<1, 140> mPlayerGlobalPropertiesMutex;
    ::ll::UntypedStorage<1, 140> mOfflineActionFileMutex;
    ::ll::UntypedStorage<1, 140> mOfflineTelemetryEventsMutex;
    ::ll::UntypedStorage<1, 144> mDynamicPropertiesMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<void (const Json::Value&, uint)>>> mDelayedTelemetryEventHandlers;
    ::ll::UntypedStorage<1, 140> mDelayedTelemetryEventHandlersMutex;
    ::ll::UntypedStorage<1, 140> mListenersMutex;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mGlobalSeqNum;
    ::ll::TypedStorage<1, 1, bool> mAcceptNewEvents;
    ::ll::TypedStorage<1, 1, bool> mEventRecordingDisabled;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mRecordEventTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker> mDeferEventSendingRefCount;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EventManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EventManager(::Social::Events::EventManagerArguments&&);

    MCNAPI void SendDelayedEventActions(uint);

    MCNAPI void SendDelayedTelemetryEvents(uint);

    MCNAPI void UpdateDnAPlatString();

    MCNAPI std::string _buildDnAPlatformString();

    MCNAPI void addListener(std::unique_ptr<Social::Events::IEventListener>);

    MCNAPI std::unordered_map<std::string, Social::Events::Property>
           buildCommonProperties(uint, std::vector<std::string> const&) const;

    MCNAPI void buildCommonProperties(
        std::unordered_map<std::string, Social::Events::Property>&,
        uint,
        std::vector<std::string> const&
    ) const;

    MCNAPI void clearListeners();

    MCNAPI std::optional<Social::Events::Property> getCommonProperty(std::string const&) const;

    MCNAPI ::Social::Events::Property getGlobalProperty(std::string const&) const;

    MCNAPI uint getNextSequenceNumber();

    MCNAPI ::Social::Events::Property getPlayerCommonProperty(uint, std::string const&) const;

    MCNAPI ::Social::Events::Property getPlayerGlobalProperty(uint, std::string const&) const;

    MCNAPI bool isEventRecordingEnabled() const;

    MCNAPI void recordDelayedEventAction(std::string const&);

    MCNAPI void recordDelayedTelemetryEvent(std::string const&, ::Json::Value const&);

    MCNAPI void recordEvent(::Social::Events::Event&);

    MCNAPI void registerDelayedTelemetryEventHandler(std::string const&, std::function<void(const Json::Value&, uint)>);

    MCNAPI void removeCommonProperty(std::string const&);

    MCNAPI void removeDynamicCommonProperty(std::string const&);

    MCNAPI void removeGlobalProperty(std::string const&);

    MCNAPI void removePlayerCommonProperty(uint, std::string const&);

    MCNAPI void removePlayerCommonPropertyForAllPlayers(std::string const&);

    MCNAPI void removePlayerGlobalProperty(uint, std::string const&);

    MCNAPI std::shared_ptr<void*> requestEventDeferment();

    MCNAPI void sendEvents(bool);

    MCNAPI void setAcceptNewEvents(bool);

    MCNAPI void shutdown();

    MCNAPI void stopDebugEventLoggingForAllListeners();

    MCNAPI void tick();

    MCNAPI ~EventManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::EventManagerArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
