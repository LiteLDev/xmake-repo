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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result
    copyDirectory(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
#else // @header-generator platform
    MCNAPI static ::Core::Result copyFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result
    copyFile(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
#else // @header-generator platform
    MCNAPI static ::Core::Result moveDirectory(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceDirectoryPath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetDirectoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result
    moveDirectory(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);

    MCNAPI static ::Core::Result
    moveFile(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
#else // @header-generator platform
    MCNAPI static ::Core::Result moveFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
