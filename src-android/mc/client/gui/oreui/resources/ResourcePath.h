#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

namespace OreUI {

struct ResourcePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                    path;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem> fileSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePath& operator=(ResourcePath const&);
    ResourcePath();
};

} // namespace OreUI
