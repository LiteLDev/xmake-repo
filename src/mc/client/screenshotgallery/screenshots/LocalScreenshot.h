#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Screenshots {

#if defined(LL_PLAT_A) // @header-generator platform
struct LocalScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> guid;
    ::ll::UntypedStorage<8, 24>            filePath;
    ::ll::TypedStorage<8, 8, long>         captureTime;
    // NOLINTEND
};
#else // @header-generator platform
struct LocalScreenshot {};
#endif // @header-generator platform

} // namespace Screenshots
