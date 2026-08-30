#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerVideoCapturePacketPayload {
public:
    // PlayerVideoCapturePacketPayload inner types declare
    // clang-format off
    struct StartVideoCapture;
    struct StopVideoCapture;
    // clang-format on

    // PlayerVideoCapturePacketPayload inner types define
    struct StartVideoCapture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>         mFrameRate;
        ::ll::TypedStorage<8, 24, std::string> mFilePrefix;
        // NOLINTEND
    };

    struct StopVideoCapture {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<PlayerVideoCapturePacketPayload::StartVideoCapture, PlayerVideoCapturePacketPayload::StopVideoCapture>> mParams;
    // clang-format on
    // NOLINTEND
};
