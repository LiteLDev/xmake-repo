#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"

class ResourceUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceFileSystem pathFromString(std::string_view);

    MCNAPI static std::string_view stringFromPath(::ResourceFileSystem);
    // NOLINTEND
};
#else // @header-generator platform
class ResourceUtil {};
#endif // @header-generator platform
