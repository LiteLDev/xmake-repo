#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct RawShowcasedScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        guid;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> thumbnail;
    ::ll::TypedStorage<8, 24, std::string>        imageUrl;
    ::ll::TypedStorage<8, 8, long>                captureTime;
    ::ll::TypedStorage<8, 8, long>                lastModifiedTime;
    ::ll::TypedStorage<1, 1, bool>                featured;
    // NOLINTEND
};

} // namespace Screenshots
