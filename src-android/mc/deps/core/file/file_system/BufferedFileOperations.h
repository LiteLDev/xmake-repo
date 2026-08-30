#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class BufferedFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result _copyFileSection(
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ulong const,
        ulong const,
        ulong&,
        ulong&
    );

    MCNAPI static ::Core::Result
    copyFile(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);

    MCNAPI static ::Core::Result copyFileWithLimit(
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ulong,
        ulong&,
        ulong&
    );

    MCNAPI static ::Core::Result
    moveFile(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
    // NOLINTEND
};

} // namespace Core
