#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Screenshots {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShowcasedScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> guid;
    ::ll::UntypedStorage<8, 24>            thumbnailPath;
    ::ll::UntypedStorage<8, 24>            imagePath;
    ::ll::TypedStorage<8, 24, std::string> imageUrl;
    ::ll::TypedStorage<8, 8, long>         captureTime;
    ::ll::TypedStorage<8, 8, long>         lastModifiedTime;
    ::ll::TypedStorage<1, 1, bool>         featured;
    ::ll::TypedStorage<1, 1, bool>         loadingImage;
    // NOLINTEND
};
#else // @header-generator platform
struct ShowcasedScreenshot {};
#endif // @header-generator platform

} // namespace Screenshots
