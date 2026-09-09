#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileStats.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FlatFileSystemImpl.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mpStorageArea;
    ::ll::TypedStorage<1, 1, bool>                                    mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                    mLoggingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mTransactionEnded;
    ::ll::TypedStorage<4, 4, ::Core::TransactionFlags>                mTransactionFlags;
    ::ll::TypedStorage<4, 4, ::Core::FileAccessType>                  mAccessType;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                      mStats;
    ::ll::TypedStorage<4, 40, std::mutex>                             mFileLock;
    ::ll::TypedStorage<8, 24, std::vector<Core::FileImpl*>>           mFiles;
    ::ll::TypedStorage<8, 24, ::Core::FlatFileSystemImpl>             mFlatFileSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FileSystemImpl();

    virtual ::Core::Result getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    virtual bool shouldCommit();

    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    virtual ulong getTransactionWriteSizeLimit() const;

    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode) = 0;

    virtual bool _fileExists(::Core::PathView) = 0;

    virtual ::Core::Result _deleteFile(::Core::PathView) = 0;

    virtual ::Core::Result _deleteFilePriority(::Core::PathView);

    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*) = 0;

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result _createEmptyFile(::Core::PathView);

    virtual ::Core::Result _copyFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _copyFileWithLimit(::Core::PathView, ::Core::PathView, ulong, ulong&, ulong&);

    virtual ::Core::Result _readFileData(::Core::PathView, ::brstd::function_ref<void*(ulong)>, ulong*);

    virtual ::Core::Result _writeFileData(::Core::PathView, void const*, ulong);

    virtual ::Core::Result _createOneDirectory(::Core::PathView) = 0;

    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::PathView);

    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView);

    virtual bool _directoryExists(::Core::PathView) = 0;

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) = 0;

    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView);

    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView);

    virtual ::Core::Result _deleteRecursively(::Core::PathView, ::Core::FileType);

    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>) = 0;

    virtual ::Core::Result _getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    virtual ::Core::Result _getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    virtual ::Core::Result _getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);

    virtual ::Core::Result _getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);

    virtual ::Core::Result _copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);

    virtual bool _fileOrDirectoryExists(::Core::PathView) = 0;

    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView, ulong*);

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) = 0;

    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result _createFlatFile(::Core::PathView, ::Core::PathView);

    virtual bool _flatFileFileExists(::Core::PathView, ::Core::PathView);

    virtual bool _flatFileDirectoryExists(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _flatFileIterateOverDirectory(::Core::PathView, ::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual bool _isDirectoryPathAFlatFile(::Core::PathView);

    virtual ::Core::Result _copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);

    virtual ::Core::Result _flatFileDeleteFileOrDirectory(::Core::PathView, ::Core::PathView, bool, bool);

    virtual ::Core::Result _flatFileGetFileSize(::Core::PathView, ::Core::PathView, ulong*);

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*) = 0;

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result _endTransaction();

    virtual ::Core::Result _writeOperation(::Core::PathView, ::Core::Result&&, std::function<void (Core::FileStorageArea*)>, ulong);

    virtual void _initializeInternal();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSystemImpl(
        ::Core::FileAccessType,
        std::shared_ptr<Core::FileStorageArea>,
        std::shared_ptr<Core::FlatFileManifestTracker>
    );

    MCNAPI void _addFile(::Core::FileImpl*);

    MCNAPI void _initialize();

    MCNAPI ::Core::Result _readOperation(::Core::Result&&, ulong);

    MCNAPI void _removeFile(::Core::FileImpl*);

    MCNAPI ::Core::Result addIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result commit();

    MCNAPI ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result copyFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result copyFileWithLimit(::Core::PathView, ::Core::PathView, ulong, ulong&, ulong&);

    MCNAPI ::Core::Result copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
    );

    MCNAPI ::Core::Result createDirectoryRecursively(::Core::PathView);

    MCNAPI ::Core::Result createEmptyFile(::Core::PathView);

    MCNAPI ::Core::Result createFlatFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result createOneDirectory(::Core::PathView);

    MCNAPI ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView);

    MCNAPI ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView);

    MCNAPI ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView);

    MCNAPI ::Core::Result deleteEmptyDirectory(::Core::PathView);

    MCNAPI ::Core::Result deleteFile(::Core::PathView);

    MCNAPI ::Core::Result deleteFilePriority(::Core::PathView);

    MCNAPI bool directoryExists(::Core::PathView);

    MCNAPI void enumerateFiles(std::function<void(Core::FileImpl*)> const&);

    MCNAPI bool fileExists(::Core::PathView);

    MCNAPI bool fileOrDirectoryExists(::Core::PathView);

    MCNAPI ::Core::FileAccessType getAccessType() const;

    MCNAPI ::Core::Result getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    MCNAPI ::Core::Result getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);

    MCNAPI ::Core::Result getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    MCNAPI ::Core::Result getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);

    MCNAPI ::Core::Result getEntryType(::Core::PathView, ::Core::FileType&);

    MCNAPI ::Core::Result getFileOrDirectorySize(::Core::PathView, ulong*);

    MCNAPI ::Core::Result getFileSize(::Core::PathView, ulong*);

    MCNAPI bool isDirectoryPathAFlatFile(::Core::PathView);

    MCNAPI ::Core::Result iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
    );

    MCNAPI ::Core::Result
    openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    MCNAPI ::Core::Result readFileData(::Core::PathView, ::brstd::function_ref<void*(ulong)>);

    MCNAPI ::Core::Result removeIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result renameDirectory(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result renameFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result writeFileData(::Core::PathView, void const*, ulong);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result isValidPath(::Core::PathView);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::FileStats& sStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::FileAccessType,
        std::shared_ptr<Core::FileStorageArea>,
        std::shared_ptr<Core::FlatFileManifestTracker>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView, long*);

    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    MCNAPI bool $shouldCommit();

    MCNAPI ::Core::CrossStorageCopyMode $getCrossStorageCopyMode();

    MCNAPI ulong $getTransactionWriteSizeLimit() const;

    MCNAPI ::Core::Result $_deleteFilePriority(::Core::PathView);

    MCNAPI ::Core::Result $_createEmptyFile(::Core::PathView);

    MCNAPI ::Core::Result $_copyFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $_copyFileWithLimit(::Core::PathView, ::Core::PathView, ulong, ulong&, ulong&);

    MCNAPI ::Core::Result $_readFileData(::Core::PathView, ::brstd::function_ref<void*(ulong)>, ulong*);

    MCNAPI ::Core::Result $_writeFileData(::Core::PathView, void const*, ulong);

    MCNAPI ::Core::Result $_createOneDirectoryIfNotExisting(::Core::PathView);

    MCNAPI ::Core::Result $_createDirectoryRecursively(::Core::PathView);

    MCNAPI ::Core::Result $_deleteDirectoryAndContentsRecursively(::Core::PathView);

    MCNAPI ::Core::Result $_deleteDirectoryContentsRecursively(::Core::PathView);

    MCNAPI ::Core::Result $_deleteRecursively(::Core::PathView, ::Core::FileType);

    MCNAPI ::Core::Result $_getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    MCNAPI ::Core::Result $_getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    MCNAPI ::Core::Result $_getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);

    MCNAPI ::Core::Result $_getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);

    MCNAPI ::Core::Result $_copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $_getFileOrDirectorySize(::Core::PathView, ulong*);

    MCNAPI ::Core::Result $_addIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result $_removeIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result $_createFlatFile(::Core::PathView, ::Core::PathView);

    MCNAPI bool $_flatFileFileExists(::Core::PathView, ::Core::PathView);

    MCNAPI bool $_flatFileDirectoryExists(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $_flatFileIterateOverDirectory(
        ::Core::PathView,
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
    );

    MCNAPI bool $_isDirectoryPathAFlatFile(::Core::PathView);

    MCNAPI ::Core::Result $_copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
    );

    MCNAPI ::Core::Result $_flatFileDeleteFileOrDirectory(::Core::PathView, ::Core::PathView, bool, bool);

    MCNAPI ::Core::Result $_flatFileGetFileSize(::Core::PathView, ::Core::PathView, ulong*);

    MCNAPI ::Core::Result $_endTransaction();

    MCNAPI ::Core::Result
    $_writeOperation(::Core::PathView, ::Core::Result&&, std::function<void(Core::FileStorageArea*)>, ulong);

    MCNAPI void $_initializeInternal();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
