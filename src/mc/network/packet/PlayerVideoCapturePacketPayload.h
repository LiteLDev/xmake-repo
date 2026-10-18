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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>         mFrameRate;
        ::ll::TypedStorage<8, 24, std::string> mFilePrefix;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>           mFrameRate;
        ::ll::TypedStorage<8, 32, ::std::string> mFilePrefix;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct StopVideoCapture {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<PlayerVideoCapturePacketPayload::StartVideoCapture, PlayerVideoCapturePacketPayload::StopVideoCapture>> mParams;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::PlayerVideoCapturePacketPayload::StartVideoCapture,
            ::PlayerVideoCapturePacketPayload::StopVideoCapture>>
        mParams;
#endif // @header-generator platform
    // NOLINTEND
};
