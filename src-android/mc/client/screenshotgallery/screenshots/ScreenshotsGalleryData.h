#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/screenshotgallery/screenshots/GalleryScreenshot.h"

namespace Screenshots {

struct ScreenshotsGalleryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Screenshots::GalleryScreenshot>> mScreenshots;
    ::ll::TypedStorage<8, 8, ulong>                                                            mCount;
    ::ll::TypedStorage<8, 8, ulong>                                                            mUndownloadedCount;
    // NOLINTEND
};

} // namespace Screenshots
