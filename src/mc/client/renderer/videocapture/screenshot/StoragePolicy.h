#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/util/renderdragon/PendingScreenshotImage.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace videocapture::screenshot {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct StoragePolicy {};
#endif // @header-generator platform

} // namespace videocapture::screenshot
