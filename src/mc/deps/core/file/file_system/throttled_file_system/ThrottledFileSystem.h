#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/UniqueLock.h"

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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class ThrottledFileSystemData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { struct DirectoryIterationItem; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core::Internal { class FileData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class ThrottledFileSystem : public ::Core::FileSystemImpl {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ThrottledFileSystem inner types define
    using CreateBaseFileSystemTransactionFunc =
        std::function<std::unique_ptr<Core::FileSystemImpl>(Core::FileAccessType)>;

    using DataLock = ::Bedrock::Threading::UniqueLock<std::shared_timed_mutex>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                     mCreateBaseFileSystemTransaction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mFileSystem;
    ::ll::UntypedStorage<8, 24>                                     mThrottledData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk51168a;
    ::ll::UntypedStorage<8, 8>  mUnk32da3f;
    ::ll::UntypedStorage<8, 16> mUnke52853;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ThrottledFileSystem& operator=(ThrottledFileSystem const&);
    ThrottledFileSystem(ThrottledFileSystem const&);
#endif // @header-generator platform
    ThrottledFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ThrottledFileSystem() = default;
#else // @header-generator platform
    virtual ~ThrottledFileSystem() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldCommit();
#else // @header-generator platform
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();
#else // @header-generator platform
    virtual bool _fileExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteFilePriority(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createEmptyFile(::Core::PathView fileName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createEmptyFile(::Core::PathView);
#else // @header-generator platform
    virtual bool _directoryExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _directoryExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);
#else // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);
#else // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);
#else // @header-generator platform
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _endTransaction() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    virtual bool shouldCommit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _endTransaction();
#else // @header-generator platform
    virtual ::Core::Result _deleteFilePriority(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initializeInternal();
    // clang-format on
#else // @header-generator platform
    virtual void _initializeInternal() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
