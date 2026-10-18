#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileSystem.h"
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileSizePresetManager; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FileSizePresetToken; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class StandardFileSystem : public ::Core::FileSystem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSizePresetManager>> mFileSizePresetManager;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkef3570;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StandardFileSystem& operator=(StandardFileSystem const&);
    StandardFileSystem(StandardFileSystem const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StandardFileSystem();
#else // @header-generator platform
    virtual ::Core::Result openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result openFile(::Core::PathView, ::Core::File&, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
    virtual bool fileExists(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool fileExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result deleteFile(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result deleteFilePriority(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteFilePriority(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getFileSize(::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result renameFile(::Core::PathView sourceName, ::Core::PathView targetName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result renameFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result createEmptyFile(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createEmptyFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyFileWithLimit(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result readFileData(::Core::PathView filePath, ::std::vector<uchar>& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result readFileData(::Core::PathView, std::vector<uchar>&);
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readFile(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> writeFile(::Core::PathView filePath, ::std::string_view data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> writeFile(::Core::PathView, std::string_view);
#else // @header-generator platform
    virtual ::Core::Result createOneDirectory(::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createOneDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView dirName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result createDirectoryRecursively(::Core::PathView dirName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createDirectoryRecursively(::Core::PathView);
#else // @header-generator platform
    virtual bool directoryExists(::Core::PathView dirName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool directoryExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView dirPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView dirName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result renameDirectory(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);
#else // @header-generator platform
    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAndSizes(std::vector<Core::FileSystem::BasicFileData>&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual bool isDirectoryPartiallyCopied(::Core::PathView directory) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDirectoryPartiallyCopied(::Core::PathView);
#else // @header-generator platform
    virtual bool fileOrDirectoryExists(::Core::PathView fileOrDirectoryName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool fileOrDirectoryExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result isValidPath(::Core::PathView path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result isValidPath(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result
    createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createFlatFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual bool isDirectoryPathAFlatFile(::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDirectoryPathAFlatFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
#else // @header-generator platform
    virtual ::Core::Result createDirectoryForFile(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createDirectoryForFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForFile(::Core::PathView filePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getUniqueFilePathForFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::PathView directoryPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getUniqueFilePathForDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> createUniquePathFromSeed(::Core::PathView, std::function<std::string (int)>);
#else // @header-generator platform
    virtual ::std::vector<::Core::PathBuffer<::std::string>>
    splitPathIntoFullPathSegments(::Core::PathView path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Core::PathBuffer<std::string>> splitPathIntoFullPathSegments(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result readFileDataExt(::Core::PathView, ulong, ulong, std::vector<uchar>&, ulong&);
#else // @header-generator platform
    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result cleanPath_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result cleanPathSeparators_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);
#else // @header-generator platform
    virtual bool checkStorageCorrupt(::Core::PathView path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkStorageCorrupt(::Core::PathView);
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::PathView path, uint64 initialSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileSizePresetToken> presetFileInitialSize(::Core::PathView, ulong);
#else // @header-generator platform
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(::Core::PathView, std::vector<Core::PathBuffer<std::string>>&, std::vector<Core::FileSystem::BasicFileData>&);
#else // @header-generator platform
    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyDirectoryStructure(::Core::PathView, ::Core::PathView, std::vector<Core::PathBuffer<std::string>> const&, ::Core::FileSystemImpl*);
#else // @header-generator platform
    virtual ::Core::Result _copyFilesWithLimit(
        ::Core::PathView                                  from,
        ::Core::PathView                                  to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFilesWithLimit(::Core::PathView, ::Core::PathView, std::vector<Core::FileSystem::BasicFileData>&, ulong&, ulong const, std::function<Core::Result (Core::PathView, Core::PathView, Core::FileSystem::FileTransferProgress&)> const&);
#else // @header-generator platform
    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);

    virtual std::optional<ulong> _checkFileInitialSize(::Core::PathView);
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView path) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StandardFileSystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $openFile(::Core::PathView, ::Core::File&, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    MCNAPI bool $fileExists(::Core::PathView);

    MCNAPI ::Core::Result $deleteFile(::Core::PathView);

    MCNAPI ::Core::Result $deleteFilePriority(::Core::PathView);

    MCNAPI ::Core::Result $getFileSize(::Core::PathView, ulong*);

    MCNAPI ::Core::Result $renameFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $createEmptyFile(::Core::PathView);

    MCNAPI ::Core::Result $copyFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $copyFileWithLimit(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $readFileData(::Core::PathView, std::vector<uchar>&);

    MCNAPI ::Bedrock::Result<std::string, std::error_code> $readFile(::Core::PathView);

    MCNAPI ::Bedrock::Result<void, std::error_code> $writeFile(::Core::PathView, std::string_view);

    MCNAPI ::Core::Result $createOneDirectory(::Core::PathView);

    MCNAPI ::Core::Result $createOneDirectoryIfNotExisting(::Core::PathView);

    MCNAPI ::Core::Result $createDirectoryRecursively(::Core::PathView);

    MCNAPI bool $directoryExists(::Core::PathView);

    MCNAPI ::Core::Result $deleteEmptyDirectory(::Core::PathView);

    MCNAPI ::Core::Result $deleteDirectoryAndContentsRecursively(::Core::PathView);

    MCNAPI ::Core::Result $deleteDirectoryContentsRecursively(::Core::PathView);

    MCNAPI ::Core::Result $renameDirectory(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
#else // @header-generator platform
    MCNAPI ::Core::Result $openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI bool $fileExists(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesAndSizes(std::vector<Core::FileSystem::BasicFileData>&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $deleteFile(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $deleteFilePriority(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $getFileSize(::Core::PathView filePath, uint64* pFileSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $renameFile(::Core::PathView sourceName, ::Core::PathView targetName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $createEmptyFile(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDirectoryPartiallyCopied(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $fileOrDirectoryExists(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $readFileData(::Core::PathView filePath, ::std::vector<uchar>& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getFileOrDirectorySize(::Core::PathView, ulong*);
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::std::string> $readFile(::Core::PathView filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $addIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<void> $writeFile(::Core::PathView filePath, ::std::string_view data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $removeIgnoredThrottlePath(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $createOneDirectory(::Core::PathView directoryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $isValidPath(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $createOneDirectoryIfNotExisting(::Core::PathView dirName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    MCNAPI ::Core::Result $createDirectoryRecursively(::Core::PathView dirName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI bool $directoryExists(::Core::PathView dirName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $createFlatFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $deleteEmptyDirectory(::Core::PathView dirPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDirectoryPathAFlatFile(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $deleteDirectoryAndContentsRecursively(::Core::PathView dirName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
#else // @header-generator platform
    MCNAPI ::Core::Result $deleteDirectoryContentsRecursively(::Core::PathView directoryName);

    MCNAPI ::Core::Result $renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName);

    MCNAPI ::Core::Result $iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $createDirectoryForFile(::Core::PathView);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>> $getUniqueFilePathForFile(::Core::PathView);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>> $getUniqueFilePathForDirectory(::Core::PathView);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>>
        $createUniquePathFromSeed(::Core::PathView, std::function<std::string(int)>);

    MCNAPI std::vector<Core::PathBuffer<std::string>> $splitPathIntoFullPathSegments(::Core::PathView);

    MCNAPI ::Core::Result $readFileDataExt(::Core::PathView, ulong, ulong, std::vector<uchar>&, ulong&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::Core::Result
#if defined(LL_PLAT_A) // @header-generator platform
    $cleanPath_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);
#else // @header-generator platform
    $getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result
    $cleanPathSeparators_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkStorageCorrupt(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Core::FileSizePresetToken> $presetFileInitialSize(::Core::PathView, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);

    MCNAPI ::Core::Result $getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    );

    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to);

    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to);

    MCNAPI bool $isDirectoryPartiallyCopied(::Core::PathView directory);

    MCNAPI bool $fileOrDirectoryExists(::Core::PathView fileOrDirectoryName);

    MCNAPI ::Core::Result $getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut);

    MCNAPI ::Core::Result $addIgnoredThrottlePath(::Core::PathView path);

    MCNAPI ::Core::Result $removeIgnoredThrottlePath(::Core::PathView path);

    MCNAPI ::Core::Result $isValidPath(::Core::PathView path);

    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime);

    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCNAPI ::Core::Result $createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCNAPI bool $isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCNAPI ::Core::Result $copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCNAPI ::Core::Result $createDirectoryForFile(::Core::PathView filePath);

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForFile(::Core::PathView filePath);

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForDirectory(::Core::PathView directoryPath);

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator);

    MCNAPI ::std::vector<::Core::PathBuffer<::std::string>> $splitPathIntoFullPathSegments(::Core::PathView path);

    MCNAPI ::Core::Result $readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    );

    MCNAPI ::Core::Result $cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    );

    MCNAPI ::Core::Result $cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    );

    MCNAPI bool $checkStorageCorrupt(::Core::PathView path);

    MCNAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetFileInitialSize(::Core::PathView path, uint64 initialSize);
#endif // @header-generator platform

    MCNAPI ::Core::Result $_getDirectoriesAndFileSizesRecursively(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        std::vector<Core::PathBuffer<std::string>>&,
        std::vector<Core::FileSystem::BasicFileData>&
#else // @header-generator platform
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
#endif // @header-generator platform
    );

    MCNAPI ::Core::Result $_copyDirectoryStructure(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::PathBuffer<std::string>> const&,
        ::Core::FileSystemImpl*
#else // @header-generator platform
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
#endif // @header-generator platform
    );

    MCNAPI ::Core::Result $_copyFilesWithLimit(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::FileSystem::BasicFileData>&,
        ulong&,
        ulong const,
        std::function<Core::Result(Core::PathView, Core::PathView, Core::FileSystem::FileTransferProgress&)> const&
#else // @header-generator platform
        ::Core::PathView                                  from,
        ::Core::PathView                                  to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
#endif // @header-generator platform
    );

    MCNAPI ::Core::Result $_copyFlatFile(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
#else // @header-generator platform
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ulong> $_checkFileInitialSize(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::std::optional<uint64> $_checkFileInitialSize(::Core::PathView path);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
