#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/Property.h"
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
class TaskResult;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
namespace Social::Events { class Event; }
namespace Social::Events { class IEventListener; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Social::Events { class Property; }
#endif // @header-generator platform
namespace Social::Events { struct EventManagerArguments; }
// clang-format on

namespace Social::Events {

class EventManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // EventManager inner types define
    using DelayedTelemetryEventHandler = std::function<void(const Json::Value&, uint)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkabddfc;
    ::ll::UntypedStorage<8, 24> mUnk9a5b18;
    ::ll::UntypedStorage<8, 64> mUnk2488f5;
    ::ll::UntypedStorage<8, 64> mUnk429183;
    ::ll::UntypedStorage<8, 64> mUnk5f726d;
    ::ll::UntypedStorage<8, 64> mUnk2e00a0;
    ::ll::UntypedStorage<8, 64> mUnkeac8cb;
    ::ll::UntypedStorage<8, 8>  mUnk70a5fe;
    ::ll::UntypedStorage<8, 8>  mUnk5ff13c;
    ::ll::UntypedStorage<8, 8>  mUnk27720e;
    ::ll::UntypedStorage<8, 8>  mUnke742b0;
    ::ll::UntypedStorage<8, 8>  mUnkb0340f;
    ::ll::UntypedStorage<8, 8>  mUnkb904e5;
    ::ll::UntypedStorage<8, 8>  mUnk7e8048;
    ::ll::UntypedStorage<8, 64> mUnke7aafa;
    ::ll::UntypedStorage<8, 8>  mUnk646108;
    ::ll::UntypedStorage<8, 8>  mUnk4a6715;
    ::ll::UntypedStorage<4, 4>  mUnk3ce00c;
    ::ll::UntypedStorage<1, 1>  mUnk6fc9f0;
    ::ll::UntypedStorage<1, 1>  mUnk60b46f;
    ::ll::UntypedStorage<8, 8>  mUnk7ec861;
    ::ll::UntypedStorage<8, 16> mUnkc396ea;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EventManager& operator=(EventManager const&);
    EventManager(EventManager const&);
#endif // @header-generator platform
    EventManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EventManager(::Social::Events::EventManagerArguments&&);
#else // @header-generator platform
    MCNAPI explicit EventManager(::Social::Events::EventManagerArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void SendDelayedEventActions(uint);

    MCNAPI void SendDelayedTelemetryEvents(uint);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void SendDelayedEventActions(uint primaryUserId);

    MCNAPI void SendDelayedTelemetryEvents(uint primaryUserId);
#endif
#endif // @header-generator platform

    MCNAPI void UpdateDnAPlatString();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _buildDnAPlatformString();
#else // @header-generator platform
    MCNAPI ::std::string _buildDnAPlatformString();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addListener(std::unique_ptr<Social::Events::IEventListener>);

    MCNAPI std::unordered_map<std::string, Social::Events::Property>
           buildCommonProperties(uint, std::vector<std::string> const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Result<::TaskResult> _processDelayedTelemetryEvents(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& filePath,
        uint                                                      primaryUserId
    ) const;

    MCNAPI void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);
#endif
#endif // @header-generator platform

    MCNAPI void buildCommonProperties(
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_map<std::string, Social::Events::Property>&,
        uint,
        std::vector<std::string> const&
#else // @header-generator platform
        ::std::unordered_map<::std::string, ::Social::Events::Property>& props,
        uint                                                             userId,
        ::std::vector<::std::string> const&                              exclude
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearListeners();
#else // @header-generator platform
    MCNAPI ::std::optional<::Social::Events::Property> getCommonProperty(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Social::Events::Property> getCommonProperty(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::Social::Events::Property getGlobalProperty(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::Events::Property getGlobalProperty(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::Social::Events::Property getPlayerCommonProperty(uint userId, ::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getNextSequenceNumber();
#else // @header-generator platform
    MCNAPI ::Social::Events::Property getPlayerGlobalProperty(uint userId, ::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::Events::Property getPlayerCommonProperty(uint, std::string const&) const;
#else // @header-generator platform
    MCNAPI void recordEvent(::Social::Events::Event& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void removePlayerCommonProperty(uint userId, ::std::string const& name);
#endif // @header-generator platform

    MCNAPI ~EventManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::Events::EventManagerArguments&&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Social::Events::EventManagerArguments&& args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
