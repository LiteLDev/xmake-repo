#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlinePlayRequest {
public:
    // OnlinePlayRequest inner types declare
    // clang-format off
    struct WhenReady;
    struct AfterDelay;
    struct OnSignal;
    // clang-format on

    // OnlinePlayRequest inner types define
    struct WhenReady {};

    struct AfterDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> delaySeconds;
        // NOLINTEND
    };

    struct OnSignal {};

    using Mode = std::variant<
        Audio::OnlinePlayRequest::WhenReady,
        Audio::OnlinePlayRequest::AfterDelay,
        Audio::OnlinePlayRequest::OnSignal>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::variant<Audio::OnlinePlayRequest::WhenReady, Audio::OnlinePlayRequest::AfterDelay, Audio::OnlinePlayRequest::OnSignal>> mode;
    ::ll::TypedStorage<4, 4, float> volume;
    ::ll::TypedStorage<4, 4, float> pitch;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> musicEventName;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    OnlinePlayRequest& operator=(OnlinePlayRequest const&);
    OnlinePlayRequest(OnlinePlayRequest const&);
};

} // namespace Audio
