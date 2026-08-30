#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/deps/core/file/file_system/PendingWrite.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class MemoryFileSystem; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { class WriteBufferedFileStorageArea; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class WriteBufferedTransaction : public ::Core::FileSystemImpl {
public:
    // WriteBufferedTransaction inner types declare
    // clang-format off
    struct DirectoryItem;
    // clang-format on

    // WriteBufferedTransaction inner types define
    struct DirectoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032>              fullPathStr;
        ::ll::TypedStorage<8, 8, ulong>            fileSize;
        ::ll::TypedStorage<4, 4, ::Core::FileType> fileType;
        ::ll::UntypedStorage<8, 1032>              name;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::MemoryFileSystem>>           mMemoryFileSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>>              mTargetFileSystem;
    ::ll::TypedStorage<8, 24, std::vector<Core::PendingWrite>>                   mOpenWriteFiles;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::WriteBufferedFileStorageArea>> mWriteBufferedStorageArea;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteBufferedTransaction();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    virtual bool _fileExists(::Core::PathView);

    virtual ::Core::Result _deleteFile(::Core::PathView);

    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _createOneDirectory(::Core::PathView);

    virtual bool _directoryExists(::Core::PathView);

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);

    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView);

    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual bool _fileOrDirectoryExists(::Core::PathView);

    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView, ulong*);

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _endTransaction();
    // clang-format on
    // NOLINTEND
};

} // namespace Core
