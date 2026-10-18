#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/debug/brstd/static_vector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileAccessType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FlatFileManifestTracker; }
namespace Core { class MemoryFileSystemEntry; }
namespace Core { class MemoryFileSystemEntryDir; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { struct MemoryFileSystemData; }
namespace Core { struct PendingWrite; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class MemoryFileSystem : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::MemoryFileSystemData>> mData;
    ::ll::UntypedStorage<8, 48>                                            mGetCurrentTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk152713;
    ::ll::UntypedStorage<8, 64> mUnkb7d9d3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MemoryFileSystem& operator=(MemoryFileSystem const&);
    MemoryFileSystem(MemoryFileSystem const&);
#endif // @header-generator platform
    MemoryFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
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
    virtual ::Core::Result _createEmptyFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createEmptyFile(::Core::PathView fileName) /*override*/;
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
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView directoryPath) /*override*/;
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
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _writeOperation(::Core::PathView, ::Core::Result&&, std::function<void (Core::FileStorageArea*)>, ulong);
#else // @header-generator platform
    virtual void _initializeInternal() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initializeInternal();
#else // @header-generator platform
    virtual ::Core::Result _writeOperation(
        ::Core::PathView,
        ::Core::Result&&,
        ::std::function<void(::Core::FileStorageArea*)>,
        uint64
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileImpl> _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, ulong);
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileImpl>
    _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, uint64);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
