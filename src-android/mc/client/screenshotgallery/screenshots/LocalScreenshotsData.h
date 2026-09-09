#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/screenshotgallery/screenshots/LocalScreenshot.h"

namespace Screenshots {

struct LocalScreenshotsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Screenshots::LocalScreenshot>> screenshots;
    ::ll::TypedStorage<8, 8, ulong>                                                          count;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalScreenshotsData& operator=(LocalScreenshotsData const&);
    LocalScreenshotsData();
};

} // namespace Screenshots
