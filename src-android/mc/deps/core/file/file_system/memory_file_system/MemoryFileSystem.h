#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class MemoryFileSystemEntry; }
namespace Core { class MemoryFileSystemEntryDir; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct MemoryFileSystemData; }
namespace Core { struct PendingWrite; }
// clang-format on

namespace Core {

class MemoryFileSystem : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::MemoryFileSystemData>> mData;
    ::ll::UntypedStorage<8, 48>                                            mGetCurrentTime;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    virtual bool _fileExists(::Core::PathView);

    virtual ::Core::Result _deleteFile(::Core::PathView);

    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _createEmptyFile(::Core::PathView);

    virtual ::Core::Result _createOneDirectory(::Core::PathView);

    virtual bool _directoryExists(::Core::PathView);

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);

    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView);

    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView);

    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual bool _fileOrDirectoryExists(::Core::PathView);

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _writeOperation(::Core::PathView, ::Core::Result&&, std::function<void (Core::FileStorageArea*)>, ulong);

    virtual void _initializeInternal();

    virtual std::unique_ptr<Core::FileImpl> _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, ulong);
    // clang-format on
    // NOLINTEND
};

} // namespace Core
