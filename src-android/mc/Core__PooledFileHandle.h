#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"

namespace Core {

struct PooledFileHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Core::File> mFile;
    ::ll::TypedStorage<4, 40, std::mutex>   mMutex;
    // NOLINTEND
};

} // namespace Core
