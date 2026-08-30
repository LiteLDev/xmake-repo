#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Screenshots {

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

} // namespace Screenshots
