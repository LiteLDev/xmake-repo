#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileStats.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/file_system/FlatFileSystemImpl.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Core { class FileStats; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc9bc1f;
    ::ll::UntypedStorage<1, 1>  mUnk26049b;
    ::ll::UntypedStorage<1, 1>  mUnkf94830;
    ::ll::UntypedStorage<1, 1>  mUnk9bcf95;
    ::ll::UntypedStorage<4, 4>  mUnka1996d;
    ::ll::UntypedStorage<4, 4>  mUnk906cc5;
    ::ll::UntypedStorage<8, 64> mUnkdc96a2;
    ::ll::UntypedStorage<8, 80> mUnk3b13c8;
    ::ll::UntypedStorage<8, 24> mUnk104955;
    ::ll::UntypedStorage<8, 24> mUnkaaf50d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileSystemImpl& operator=(FileSystemImpl const&);
    FileSystemImpl(FileSystemImpl const&);
#endif // @header-generator platform
    FileSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~FileSystemImpl();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    virtual ::Core::Result getLastModificationTime(::Core::PathView entryPath, int64* lastModificationTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);
#endif // @header-generator platform

    virtual bool shouldCommit();

    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTransactionWriteSizeLimit() const;
#else // @header-generator platform
    virtual uint64 getTransactionWriteSizeLimit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode) = 0;
#else // @header-generator platform
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>& uptFileOut,
        ::Core::PathView                     filename,
        ::Core::FileOpenMode                 fileOpenMode,
        ::Core::FileBufferingMode            bufferingMode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileExists(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool _fileExists(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteFilePriority(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteFilePriority(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView filePath, uint64* pFileSizeOut) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createEmptyFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createEmptyFile(::Core::PathView fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFileWithLimit(::Core::PathView, ::Core::PathView, ulong, ulong&, ulong&);
#else // @header-generator platform
    virtual ::Core::Result _copyFileWithLimit(
        ::Core::PathView sourceFileName,
        ::Core::PathView targetFileName,
        uint64           startPosition,
        uint64&          outBytesWritten,
        uint64&          outBytesRemaining
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readFileData(::Core::PathView, ::brstd::function_ref<void*(ulong)>, ulong*);
#else // @header-generator platform
    virtual ::Core::Result
    _readFileData(::Core::PathView filePath, ::brstd::function_ref<void*(uint64)> data, uint64* bytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _writeFileData(::Core::PathView, void const*, ulong);
#else // @header-generator platform
    virtual ::Core::Result _writeFileData(::Core::PathView filePath, void const* data, uint64 size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _directoryExists(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool _directoryExists(::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteRecursively(::Core::PathView, ::Core::FileType);
#else // @header-generator platform
    virtual ::Core::Result _deleteRecursively(::Core::PathView directoryPath, ::Core::FileType deleteFileType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result
    _renameDirectory(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>) = 0;
#else // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    _getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& filesOut,
        ::Core::PathView                                  directoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalSizeAllocated,
        ::Core::PathView directoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    _copyDirectoryAndContentsRecursively(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView entryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView entryName, uint64* pFileSizeOut);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView entryPath, ::Core::FileType& fileTypeOut) = 0;
#endif // @header-generator platform

    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createFlatFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _flatFileFileExists(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual bool _flatFileFileExists(::Core::PathView filePath, ::Core::PathView manifestPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _flatFileDirectoryExists(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual bool _flatFileDirectoryExists(::Core::PathView directoryPath, ::Core::PathView manifestPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _flatFileIterateOverDirectory(::Core::PathView, ::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);
#else // @header-generator platform
    virtual ::Core::Result _flatFileIterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::PathView                                                             manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isDirectoryPathAFlatFile(::Core::PathView);
#else // @header-generator platform
    virtual bool _isDirectoryPathAFlatFile(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
#else // @header-generator platform
    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _flatFileDeleteFileOrDirectory(::Core::PathView, ::Core::PathView, bool, bool);
#else // @header-generator platform
    virtual ::Core::Result _flatFileDeleteFileOrDirectory(
        ::Core::PathView fileOrDirectoryPath,
        ::Core::PathView manifestPath,
        bool             directoryDeleteEnabled,
        bool             deleteRecursively
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _flatFileGetFileSize(::Core::PathView, ::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result
    _flatFileGetFileSize(::Core::PathView filePath, ::Core::PathView manifestPath, uint64* pFileSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView filePath, int64* pModificationTime) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result
    _copyTimeAndAccessRights(::Core::PathView sourceEntryPath, ::Core::PathView targetEntryPath) = 0;
#endif // @header-generator platform

    virtual ::Core::Result _endTransaction();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _writeOperation(::Core::PathView, ::Core::Result&&, std::function<void (Core::FileStorageArea*)>, ulong);
#else // @header-generator platform
    virtual ::Core::Result _writeOperation(
        ::Core::PathView,
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesWritten
    );
#endif // @header-generator platform

    virtual void _initializeInternal();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSystemImpl(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::FileAccessType,
        std::shared_ptr<Core::FileStorageArea>,
        std::shared_ptr<Core::FlatFileManifestTracker>
#else // @header-generator platform
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addFile(::Core::FileImpl*);
#else // @header-generator platform
    MCNAPI FileSystemImpl(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::Core::TransactionFlags                           transactionFlags,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize();
#else // @header-generator platform
    MCNAPI void _addFile(::Core::FileImpl* pFile);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result _readOperation(::Core::Result&&, ulong);

    MCNAPI void _removeFile(::Core::FileImpl*);

    MCNAPI ::Core::Result addIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result _readWriteOperation(
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesRead,
        uint64                                          numBytesWritten
    );
#endif // @header-generator platform

    MCNAPI ::Core::Result commit();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result copyFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result copyFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result copyFileWithLimit(::Core::PathView, ::Core::PathView, ulong, ulong&, ulong&);

    MCNAPI ::Core::Result copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
#else // @header-generator platform
    MCNAPI ::Core::Result copyFileWithLimit(
        ::Core::PathView sourceFileName,
        ::Core::PathView targetFileName,
        uint64           startPosition,
        uint64&          outBytesWritten,
        uint64&          outBytesRemaining
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result createDirectoryRecursively(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result createDirectoryRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result createEmptyFile(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result createEmptyFile(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result createFlatFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result createOneDirectory(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result createOneDirectory(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result deleteEmptyDirectory(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result deleteEmptyDirectory(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result deleteFile(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result deleteFile(::Core::PathView);
#else // @header-generator platform
    MCNAPI bool directoryExists(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result deleteFilePriority(::Core::PathView);
#else // @header-generator platform
    MCNAPI bool fileExists(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool directoryExists(::Core::PathView);
#else // @header-generator platform
    MCNAPI bool fileOrDirectoryExists(::Core::PathView entryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enumerateFiles(std::function<void(Core::FileImpl*)> const&);
#else // @header-generator platform
    MCNAPI ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI bool isDirectoryPathAFlatFile(::Core::PathView directoryPath);
#endif // @header-generator platform

    MCNAPI ::Core::Result iterateOverDirectory(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
#else // @header-generator platform
        ::Core::PathView                                                             directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result
    openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
    MCNAPI ::Core::Result openFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::PathView                     filePath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result readFileData(::Core::PathView, ::brstd::function_ref<void*(ulong)>);
#else // @header-generator platform
    MCNAPI ::Core::Result renameDirectory(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result removeIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result renameDirectory(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result renameFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result writeFileData(::Core::PathView, void const*, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result renameFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result isValidPath(::Core::PathView);
#else // @header-generator platform
    MCNAPI static ::Core::Result isValidPath(::Core::PathView path);
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::FileAccessType,
        std::shared_ptr<Core::FileStorageArea>,
        std::shared_ptr<Core::FlatFileManifestTracker>
#else // @header-generator platform
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );

    MCNAPI void* $ctor(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::Core::TransactionFlags                           transactionFlags,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView entryPath, int64* lastModificationTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);
#endif // @header-generator platform

    MCNAPI bool $shouldCommit();

    MCNAPI ::Core::CrossStorageCopyMode $getCrossStorageCopyMode();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getTransactionWriteSizeLimit() const;
#else // @header-generator platform
    MCNAPI uint64 $getTransactionWriteSizeLimit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_deleteFilePriority(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_deleteFilePriority(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_createEmptyFile(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_createEmptyFile(::Core::PathView fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_copyFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_copyFileWithLimit(::Core::PathView, ::Core::PathView, ulong, ulong&, ulong&);
#else // @header-generator platform
    MCNAPI ::Core::Result $_copyFileWithLimit(
        ::Core::PathView sourceFileName,
        ::Core::PathView targetFileName,
        uint64           startPosition,
        uint64&          outBytesWritten,
        uint64&          outBytesRemaining
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_readFileData(::Core::PathView, ::brstd::function_ref<void*(ulong)>, ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result
    $_readFileData(::Core::PathView filePath, ::brstd::function_ref<void*(uint64)> data, uint64* bytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_writeFileData(::Core::PathView, void const*, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $_writeFileData(::Core::PathView filePath, void const* data, uint64 size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_createOneDirectoryIfNotExisting(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_createOneDirectoryIfNotExisting(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_createDirectoryRecursively(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_createDirectoryRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_deleteDirectoryAndContentsRecursively(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_deleteDirectoryContentsRecursively(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_deleteDirectoryContentsRecursively(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_deleteRecursively(::Core::PathView, ::Core::FileType);
#else // @header-generator platform
    MCNAPI ::Core::Result $_deleteRecursively(::Core::PathView directoryPath, ::Core::FileType deleteFileType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result
    $_getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& filesOut,
        ::Core::PathView                                  directoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalSizeAllocated,
        ::Core::PathView directoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result
    $_copyDirectoryAndContentsRecursively(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getFileOrDirectorySize(::Core::PathView, ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getFileOrDirectorySize(::Core::PathView entryName, uint64* pFileSizeOut);
#endif // @header-generator platform

    MCNAPI ::Core::Result $_addIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result $_removeIgnoredThrottlePath(::Core::PathView);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_createFlatFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $_createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_flatFileFileExists(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI bool $_flatFileFileExists(::Core::PathView filePath, ::Core::PathView manifestPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_flatFileDirectoryExists(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI bool $_flatFileDirectoryExists(::Core::PathView directoryPath, ::Core::PathView manifestPath);
#endif // @header-generator platform

    MCNAPI ::Core::Result $_flatFileIterateOverDirectory(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
#else // @header-generator platform
        ::Core::PathView                                                             directoryPath,
        ::Core::PathView                                                             manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isDirectoryPathAFlatFile(::Core::PathView);
#else // @header-generator platform
    MCNAPI bool $_isDirectoryPathAFlatFile(::Core::PathView directoryPath);
#endif // @header-generator platform

    MCNAPI ::Core::Result $_copyFlatFile(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
#else // @header-generator platform
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_flatFileDeleteFileOrDirectory(::Core::PathView, ::Core::PathView, bool, bool);
#else // @header-generator platform
    MCNAPI ::Core::Result $_flatFileDeleteFileOrDirectory(
        ::Core::PathView fileOrDirectoryPath,
        ::Core::PathView manifestPath,
        bool             directoryDeleteEnabled,
        bool             deleteRecursively
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_flatFileGetFileSize(::Core::PathView, ::Core::PathView, ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result
    $_flatFileGetFileSize(::Core::PathView filePath, ::Core::PathView manifestPath, uint64* pFileSize);
#endif // @header-generator platform

    MCNAPI ::Core::Result $_endTransaction();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result
    $_writeOperation(::Core::PathView, ::Core::Result&&, std::function<void(Core::FileStorageArea*)>, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $_writeOperation(
        ::Core::PathView,
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesWritten
    );
#endif // @header-generator platform

    MCNAPI void $_initializeInternal();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
