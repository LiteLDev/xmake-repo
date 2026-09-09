#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FullCopyFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result
    copyDirectory(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);

    MCNAPI static ::Core::Result
    copyFile(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);

    MCNAPI static ::Core::Result
    moveDirectory(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);

    MCNAPI static ::Core::Result
    moveFile(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
    // NOLINTEND
};

} // namespace Core
