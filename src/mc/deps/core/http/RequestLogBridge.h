#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

#endif // @header-generator platform
namespace Bedrock::Http {

class RequestLogBridge {
public:
    // RequestLogBridge inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct InFlight;
    struct StartEvent;
    struct ProgressEvent;
#else // @header-generator platform
#endif // @header-generator platform
    struct CompleteEvent;
    struct FailEvent;
#if defined(LL_PLAT_A) // @header-generator platform
    struct SharedState;
#else // @header-generator platform
    struct InFlight;
    struct ProgressEvent;
    struct StartEvent;
#endif // @header-generator platform
    struct DrainedEvents;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SharedState;
#endif // @header-generator platform
    // clang-format on

    // RequestLogBridge inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct InFlight {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<8, 8, ulong> bytesSent;
        ::ll::TypedStorage<8, 8, ulong> bytesReceived;
        ::ll::TypedStorage<8, 24, std::string> responsePreview;
        ::ll::TypedStorage<1, 1, bool> truncated;
        ::ll::TypedStorage<1, 1, bool> active;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> startTime;
        // clang-format on
        // NOLINTEND
    };

    struct StartEvent {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<8, 24, std::string> method;
        ::ll::TypedStorage<8, 24, std::string> url;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> requestHeaders;
        ::ll::TypedStorage<4, 4, uint> requestBodySize;
        ::ll::TypedStorage<8, 24, std::string> requestBodyPreview;
        ::ll::TypedStorage<1, 1, bool> requestBodyTruncated;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> startTime;
        // clang-format on
        // NOLINTEND
    };

    struct ProgressEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<8, 8, ulong> bytesSent;
        ::ll::TypedStorage<8, 8, ulong> bytesReceived;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct CompleteEvent {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<4, 4, int> statusCode;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> responseHeaders;
        ::ll::TypedStorage<8, 24, std::string> responseBodyPreview;
        ::ll::TypedStorage<1, 1, bool> bodyTruncated;
        ::ll::TypedStorage<8, 8, ulong> bytesReceived;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> endTime;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnkfc9db9;
        ::ll::UntypedStorage<4, 4>  mUnk96efe5;
        ::ll::UntypedStorage<8, 24> mUnk3f476a;
        ::ll::UntypedStorage<8, 32> mUnk385792;
        ::ll::UntypedStorage<1, 1>  mUnk30121b;
        ::ll::UntypedStorage<8, 8>  mUnk5c236b;
        ::ll::UntypedStorage<8, 8>  mUnke6ebf9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CompleteEvent& operator=(CompleteEvent const&);
        CompleteEvent(CompleteEvent const&);
        CompleteEvent();
#endif // @header-generator platform
    };

    struct FailEvent {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<8, 24, std::string> errorMessage;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> endTime;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk9c7342;
        ::ll::UntypedStorage<8, 32> mUnk60a828;
        ::ll::UntypedStorage<8, 8>  mUnke575c7;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        FailEvent& operator=(FailEvent const&);
        FailEvent(FailEvent const&);
        FailEvent();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct SharedState {
#else // @header-generator platform
    struct InFlight {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 3200, ::Bedrock::Http::RequestLogBridge::InFlight[50]>           slots;
        ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ulong>>                            index;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::StartEvent>>    starts;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::ProgressEvent>> progress;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::CompleteEvent>> completes;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::FailEvent>>     fails;
        ::ll::TypedStorage<1, 1, bool>                                                         paused;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk6acf18;
        ::ll::UntypedStorage<8, 8>  mUnk283e13;
        ::ll::UntypedStorage<8, 8>  mUnk90ac1e;
        ::ll::UntypedStorage<8, 32> mUnk6951c0;
        ::ll::UntypedStorage<1, 1>  mUnkabe8a0;
        ::ll::UntypedStorage<1, 1>  mUnk8594aa;
        ::ll::UntypedStorage<8, 8>  mUnkdeeb09;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        InFlight& operator=(InFlight const&);
        InFlight(InFlight const&);
        InFlight();
    };

    struct ProgressEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc3dd02;
        ::ll::UntypedStorage<8, 8> mUnk5b7caf;
        ::ll::UntypedStorage<8, 8> mUnk52039c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProgressEvent& operator=(ProgressEvent const&);
        ProgressEvent(ProgressEvent const&);
        ProgressEvent();
    };

    struct StartEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkddcff8;
        ::ll::UntypedStorage<8, 32> mUnk3b0d2b;
        ::ll::UntypedStorage<8, 32> mUnkafe800;
        ::ll::UntypedStorage<8, 24> mUnk631953;
        ::ll::UntypedStorage<4, 4>  mUnk10ab41;
        ::ll::UntypedStorage<8, 32> mUnk8ebe7f;
        ::ll::UntypedStorage<1, 1>  mUnkd926c2;
        ::ll::UntypedStorage<8, 8>  mUnk83406c;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartEvent& operator=(StartEvent const&);
        StartEvent(StartEvent const&);
        StartEvent();
#endif // @header-generator platform
    };

    struct DrainedEvents {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::StartEvent>>    starts;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::ProgressEvent>> progress;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::CompleteEvent>> completes;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::FailEvent>>     fails;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnkf8c72a;
        ::ll::UntypedStorage<8, 24> mUnka8a6cf;
        ::ll::UntypedStorage<8, 24> mUnk3355fc;
        ::ll::UntypedStorage<8, 24> mUnk652a8f;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DrainedEvents& operator=(DrainedEvents const&);
        DrainedEvents(DrainedEvents const&);
        DrainedEvents();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using TimePoint =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;
#else // @header-generator platform
    struct SharedState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 3600> mUnk509790;
        ::ll::UntypedStorage<8, 64>   mUnk2be308;
        ::ll::UntypedStorage<8, 24>   mUnkd268ed;
        ::ll::UntypedStorage<8, 24>   mUnkf14373;
        ::ll::UntypedStorage<8, 24>   mUnk4eb26a;
        ::ll::UntypedStorage<8, 24>   mUnk89d535;
        ::ll::UntypedStorage<1, 1>    mUnk394272;
        // NOLINTEND

    public:
        // prevent constructor by default
        SharedState& operator=(SharedState const&);
        SharedState(SharedState const&);
        SharedState();
    };
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::BasicLockbox<Bedrock::Http::RequestLogBridge::SharedState, std::mutex>&
    s_state();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::
        BasicLockbox<::Bedrock::Http::RequestLogBridge::SharedState, ::Bedrock::Threading::Mutex>&
        s_state();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
