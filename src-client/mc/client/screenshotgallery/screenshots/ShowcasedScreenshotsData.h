#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/screenshotgallery/screenshots/ShowcasedScreenshot.h"
#include "mc/deps/core/file/PathBuffer.h"

namespace Screenshots {

struct ShowcasedScreenshotsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Screenshots::ShowcasedScreenshot>> screenshots;
    ::ll::TypedStorage<8, 8, ulong>                                                              count;
    ::ll::UntypedStorage<8, 24>                                                                  featuredScreenshotPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshotsData& operator=(ShowcasedScreenshotsData const&);
    ShowcasedScreenshotsData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ShowcasedScreenshotsData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Screenshots
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
