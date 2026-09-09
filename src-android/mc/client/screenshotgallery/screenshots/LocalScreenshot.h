#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Screenshots {

struct LocalScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> guid;
    ::ll::UntypedStorage<8, 24>            filePath;
    ::ll::TypedStorage<8, 8, long>         captureTime;
    // NOLINTEND
};

} // namespace Screenshots
