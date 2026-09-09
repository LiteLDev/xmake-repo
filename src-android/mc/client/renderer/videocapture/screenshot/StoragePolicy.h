#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/renderdragon/PendingScreenshotImage.h"

namespace videocapture::screenshot {

struct StoragePolicy {
public:
    // StoragePolicy inner types define
    using FrameNumber = uint;

    using StorageElement = ::renderdragon::PendingScreenshotImage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::deque<std::tuple<uint, renderdragon::PendingScreenshotImage>>> mPendingImages;
    // NOLINTEND
};

} // namespace videocapture::screenshot
