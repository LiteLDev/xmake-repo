#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/events/AggregationEventListener.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/events/Event.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social::Events { class OneDSEventHelper; }
#else // @header-generator platform
namespace Social::Events { class Event; }
#endif // @header-generator platform
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class OneDSEventListener : public ::Social::Events::AggregationEventListener {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // OneDSEventListener inner types define
    using OnEventSerializedCallback = std::function<void(const std::string&, const std::string&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkafadd0;
    ::ll::UntypedStorage<8, 80> mUnka7b550;
    ::ll::UntypedStorage<8, 8>  mUnkf9a652;
    ::ll::UntypedStorage<8, 8>  mUnkaf557e;
    ::ll::UntypedStorage<8, 32> mUnk7c0d06;
    ::ll::UntypedStorage<8, 24> mUnke85483;
    ::ll::UntypedStorage<8, 8>  mUnk3d4c0b;
    ::ll::UntypedStorage<4, 4>  mUnkb929d9;
    ::ll::UntypedStorage<8, 32> mUnk10c2ec;
    ::ll::UntypedStorage<8, 32> mUnk6bee5d;
    ::ll::UntypedStorage<8, 32> mUnk480c9f;
    ::ll::UntypedStorage<8, 32> mUnk3cbd4d;
    ::ll::UntypedStorage<8, 32> mUnk50eed5;
    ::ll::UntypedStorage<8, 8>  mUnka96ad9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OneDSEventListener& operator=(OneDSEventListener const&);
    OneDSEventListener(OneDSEventListener const&);
#endif // @header-generator platform
    OneDSEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OneDSEventListener();
#else // @header-generator platform
    virtual ~OneDSEventListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEventTagsFilter() const;
#else // @header-generator platform
    virtual void sendEvent(::Social::Events::Event const& event) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendEvent(::Social::Events::Event const&);
#else // @header-generator platform
    virtual int getEventTagsFilter() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _flushEventQueue();
#else // @header-generator platform
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const& event) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;
#else // @header-generator platform
    virtual void _flushEventQueue() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::std::vector<::std::string> _buildEventPayloads(
        ::std::vector<::Social::Events::Event>                            events,
        ::std::function<void(::std::string const&, ::std::string const&)> onEventSerialized
#endif // @header-generator platform
    );

    MCNAPI bool _sendBatch();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendEvents(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI void _sendEvents(::std::string const& eventPayload, ::std::string const& endpoint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addDynamicPropertiesFromEvent(
        ::Json::Value& properties,
        ::brstd::flat_map<
            ::std::string,
            ::std::vector<::Social::Events::Property>,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::std::vector<::Social::Events::Property>>> const& dynamicProperties
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ENDPOINT_IDENTIFIER();
#else // @header-generator platform
    MCNAPI static ::std::string const& ENDPOINT_IDENTIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ONEDS_URL();
#else // @header-generator platform
    MCNAPI static ::std::string const& ONEDS_URL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PARTA_IDENTIFIER();
#else // @header-generator platform
    MCNAPI static ::std::string const& PARTA_IDENTIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SAFETY_ENDPOINT_IDENTIFIER();
#else // @header-generator platform
    MCNAPI static ::std::string const& SAFETY_ENDPOINT_IDENTIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SAFETY_PARTA_IDENTIFIER();

    MCNAPI static uint const& sRegularSendIntervalSecs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::string const& SAFETY_PARTA_IDENTIFIER();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI void $sendEvent(::Social::Events::Event const& event);

#endif // @header-generator platform
    MCNAPI int $getEventTagsFilter() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendEvent(::Social::Events::Event const&);
#else // @header-generator platform
    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const& event) const;
#endif // @header-generator platform

    MCNAPI void $_flushEventQueue();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_checkAgainstEventAllowlist(::Social::Events::Event const&) const;
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
