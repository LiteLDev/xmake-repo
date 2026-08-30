#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/Url.h"

struct SignalingClientConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::Bedrock::Http::Url>                              mSignalingUri;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPingFrequency;
    // NOLINTEND
};
