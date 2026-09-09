#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { class ThrottledFileSystemData; }
namespace Core { struct DirectoryIterationItem; }
namespace Core::Internal { class FileData; }
// clang-format on

namespace Core {

class ThrottledFileSystem : public ::Core::FileSystemImpl {
public:
    // ThrottledFileSystem inner types define
    using CreateBaseFileSystemTransactionFunc =
        std::function<std::unique_ptr<Core::FileSystemImpl>(Core::FileAccessType)>;

    using DataLock = ::Bedrock::Threading::UniqueLock<std::shared_timed_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                     mCreateBaseFileSystemTransaction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mFileSystem;
    ::ll::UntypedStorage<8, 24>                                     mThrottledData;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ThrottledFileSystem() = default;

    virtual bool shouldCommit();

    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    virtual bool _fileExists(::Core::PathView);

    virtual ::Core::Result _deleteFile(::Core::PathView);

    virtual ::Core::Result _deleteFilePriority(::Core::PathView);

    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _createEmptyFile(::Core::PathView);

    virtual ::Core::Result _createOneDirectory(::Core::PathView);

    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView);

    virtual bool _directoryExists(::Core::PathView);

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);

    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual bool _fileOrDirectoryExists(::Core::PathView);

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);

    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _endTransaction();

    virtual void _initializeInternal();
    // clang-format on
    // NOLINTEND
};

} // namespace Core
