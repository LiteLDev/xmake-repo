#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"

namespace Bedrock::Http {

class RequestLogBridge {
public:
    // RequestLogBridge inner types declare
    // clang-format off
    struct InFlight;
    struct StartEvent;
    struct ProgressEvent;
    struct CompleteEvent;
    struct FailEvent;
    struct SharedState;
    struct DrainedEvents;
    // clang-format on

    // RequestLogBridge inner types define
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

    struct CompleteEvent {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<4, 4, int> statusCode;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> responseHeaders;
        ::ll::TypedStorage<8, 24, std::string> responseBodyPreview;
        ::ll::TypedStorage<1, 1, bool> bodyTruncated;
        ::ll::TypedStorage<8, 8, ulong> bytesReceived;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> endTime;
        // clang-format on
        // NOLINTEND
    };

    struct FailEvent {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> callId;
        ::ll::TypedStorage<8, 24, std::string> errorMessage;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> endTime;
        // clang-format on
        // NOLINTEND
    };

    struct SharedState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 3200, ::Bedrock::Http::RequestLogBridge::InFlight[50]>           slots;
        ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ulong>>                            index;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::StartEvent>>    starts;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::ProgressEvent>> progress;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::CompleteEvent>> completes;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::FailEvent>>     fails;
        ::ll::TypedStorage<1, 1, bool>                                                         paused;
        // NOLINTEND
    };

    struct DrainedEvents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::StartEvent>>    starts;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::ProgressEvent>> progress;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::CompleteEvent>> completes;
        ::ll::TypedStorage<8, 24, std::vector<Bedrock::Http::RequestLogBridge::FailEvent>>     fails;
        // NOLINTEND
    };

    using TimePoint =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::BasicLockbox<Bedrock::Http::RequestLogBridge::SharedState, std::mutex>&
    s_state();
    // NOLINTEND
};

} // namespace Bedrock::Http
