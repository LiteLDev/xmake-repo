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

class OneDSEditorEventListener : public ::Social::Events::AggregationEventListener {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // OneDSEditorEventListener inner types define
    using OnEventSerializedCallback = std::function<void(const std::string&, const std::string&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk8228d9;
    ::ll::UntypedStorage<8, 8>  mUnk387a2d;
    ::ll::UntypedStorage<8, 8>  mUnk470474;
    ::ll::UntypedStorage<8, 24> mUnk2c3202;
    ::ll::UntypedStorage<8, 24> mUnk8729a6;
    ::ll::UntypedStorage<8, 8>  mUnka936b9;
    ::ll::UntypedStorage<4, 4>  mUnk5e9a8b;
    ::ll::UntypedStorage<8, 32> mUnk7c1190;
    ::ll::UntypedStorage<8, 32> mUnkd5fb8b;
    ::ll::UntypedStorage<8, 32> mUnkbebd7e;
    ::ll::UntypedStorage<8, 32> mUnk8c0c42;
    ::ll::UntypedStorage<8, 32> mUnkc5d5c2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OneDSEditorEventListener& operator=(OneDSEditorEventListener const&);
    OneDSEditorEventListener(OneDSEditorEventListener const&);
#endif // @header-generator platform
    OneDSEditorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OneDSEditorEventListener() = default;
#else // @header-generator platform
    virtual ~OneDSEditorEventListener() /*override*/ = default;
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
    virtual void _flushEventQueue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::string> _buildEventPayloads(
        ::std::vector<::Social::Events::Event>                            events,
        ::std::function<void(::std::string const&, ::std::string const&)> onEventSerialized
    );

    MCNAPI bool _sendBatch();
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
    MCNAPI static std::string const& EVENT_NAMESPACE();
#else // @header-generator platform
    MCNAPI static ::std::string const& EVENT_NAMESPACE();
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
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uint const& sRegularSendIntervalSecs();
#else // @header-generator platform
public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendEvent(::Social::Events::Event const& event);

    MCNAPI int $getEventTagsFilter() const;

    MCNAPI void $_flushEventQueue();


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
