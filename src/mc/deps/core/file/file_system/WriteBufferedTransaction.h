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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/file_system/PendingWrite.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class MemoryFileSystem; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
namespace Core { class Result; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class WriteBufferedFileStorageArea; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { struct DirectoryIterationItem; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 1032>              fullPathStr;
        ::ll::TypedStorage<8, 8, ulong>            fileSize;
        ::ll::TypedStorage<4, 4, ::Core::FileType> fileType;
        ::ll::UntypedStorage<8, 1032>              name;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 1032> mUnk57ae0e;
        ::ll::UntypedStorage<8, 8>    mUnk4e123c;
        ::ll::UntypedStorage<4, 4>    mUnk79eb3b;
        ::ll::UntypedStorage<8, 1032> mUnkae7371;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DirectoryItem& operator=(DirectoryItem const&);
        DirectoryItem(DirectoryItem const&);
        DirectoryItem();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::MemoryFileSystem>>           mMemoryFileSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>>              mTargetFileSystem;
    ::ll::TypedStorage<8, 24, std::vector<Core::PendingWrite>>                   mOpenWriteFiles;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::WriteBufferedFileStorageArea>> mWriteBufferedStorageArea;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk322229;
    ::ll::UntypedStorage<8, 8>  mUnk77f55c;
    ::ll::UntypedStorage<8, 24> mUnk714ccc;
    ::ll::UntypedStorage<8, 16> mUnkf9ece4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WriteBufferedTransaction& operator=(WriteBufferedTransaction const&);
    WriteBufferedTransaction(WriteBufferedTransaction const&);
#endif // @header-generator platform
    WriteBufferedTransaction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
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
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView entryName, uint64* pFileSizeOut) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);
#else // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView, ulong*);
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
