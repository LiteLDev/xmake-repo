#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
