#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileOpenMode.h"
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

struct PendingWrite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                    mWritePath;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode> mOpenMode;
    // NOLINTEND
};

} // namespace Core
