#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileAccessType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class LruCacheFileSystem : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mFileSystem;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk1199a3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LruCacheFileSystem& operator=(LruCacheFileSystem const&);
    LruCacheFileSystem(LruCacheFileSystem const&);
#endif // @header-generator platform
    LruCacheFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LruCacheFileSystem() = default;
#else // @header-generator platform
    virtual ~LruCacheFileSystem() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();
#else // @header-generator platform
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileExists(::Core::PathView);
#else // @header-generator platform
    virtual bool _fileExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _directoryExists(::Core::PathView);
#else // @header-generator platform
    virtual bool _directoryExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteRecursively(::Core::PathView, ::Core::FileType);
#else // @header-generator platform
    virtual ::Core::Result
    _deleteRecursively(::Core::PathView directoryPath, ::Core::FileType deleteFileType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);
#else // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView);
#else // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);
#else // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _endTransaction();
    // clang-format on
#else // @header-generator platform
    virtual ::Core::Result _endTransaction() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
