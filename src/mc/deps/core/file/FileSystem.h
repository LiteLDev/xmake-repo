#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class FileOpenMode; }
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

class FileSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileSystem inner types declare
    // clang-format off
    struct BasicFileData;
    struct FileTransferProgress;
    // clang-format on

    // FileSystem inner types define
    struct BasicFileData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>     mPath;
        ::ll::TypedStorage<8, 8, ulong> mSize;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnka2f01d;
        ::ll::UntypedStorage<8, 8>  mUnk7ec39a;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        BasicFileData& operator=(BasicFileData const&);
        BasicFileData(BasicFileData const&);
        BasicFileData();
    };

    struct FileTransferProgress {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> mStartPosition;
        ::ll::TypedStorage<8, 8, ulong> mBytesWritten;
        ::ll::TypedStorage<8, 8, ulong> mBytesRemaining;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk1ae043;
        ::ll::UntypedStorage<8, 8> mUnkd6dcba;
        ::ll::UntypedStorage<8, 8> mUnke8d3af;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        FileTransferProgress& operator=(FileTransferProgress const&);
        FileTransferProgress(FileTransferProgress const&);
        FileTransferProgress();
#endif // @header-generator platform
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Core::Result openFile(::Core::PathView, ::Core::File&, ::Core::FileOpenMode, ::Core::FileBufferingMode) = 0;
#else // @header-generator platform
    virtual ::Core::Result openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool fileExists(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool fileExists(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result deleteFile(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteFilePriority(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result deleteFilePriority(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getFileSize(::Core::PathView, ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result renameFile(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result renameFile(::Core::PathView sourceName, ::Core::PathView targetName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createEmptyFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result createEmptyFile(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyFile(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyFileWithLimit(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result readFileData(::Core::PathView, std::vector<uchar>&) = 0;
#else // @header-generator platform
    virtual ::Core::Result readFileData(::Core::PathView filePath, ::std::vector<uchar>& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> readFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> readFile(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> writeFile(::Core::PathView, std::string_view) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> writeFile(::Core::PathView filePath, ::std::string_view data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createOneDirectory(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result createOneDirectory(::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView dirName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createDirectoryRecursively(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result createDirectoryRecursively(::Core::PathView dirName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool directoryExists(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool directoryExists(::Core::PathView dirName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView dirPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView dirName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result renameDirectory(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>) = 0;
#else // @header-generator platform
    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAndSizes(std::vector<Core::FileSystem::BasicFileData>&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDirectoryPartiallyCopied(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool isDirectoryPartiallyCopied(::Core::PathView directory) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool fileOrDirectoryExists(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool fileOrDirectoryExists(::Core::PathView fileOrDirectoryName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView, ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result isValidPath(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result isValidPath(::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getLastModificationTime(::Core::PathView, long*) = 0;
#else // @header-generator platform
    virtual ::Core::Result getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createFlatFile(::Core::PathView, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result
    createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDirectoryPathAFlatFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool isDirectoryPathAFlatFile(::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&) = 0;
#else // @header-generator platform
    virtual ::Core::Result copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result createDirectoryForFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result createDirectoryForFile(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getUniqueFilePathForFile(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForFile(::Core::PathView filePath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getUniqueFilePathForDirectory(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::PathView directoryPath) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> createUniquePathFromSeed(::Core::PathView, std::function<std::string (int)>) = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Core::PathBuffer<std::string>> splitPathIntoFullPathSegments(::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::std::vector<::Core::PathBuffer<::std::string>> splitPathIntoFullPathSegments(::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result readFileDataExt(::Core::PathView, ulong, ulong, std::vector<uchar>&, ulong&) = 0;
#else // @header-generator platform
    virtual ::Core::Result readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result cleanPath_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result cleanPathSeparators_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView) = 0;
#else // @header-generator platform
    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkStorageCorrupt(::Core::PathView) = 0;
#else // @header-generator platform
    virtual bool checkStorageCorrupt(::Core::PathView path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileSizePresetToken> presetFileInitialSize(::Core::PathView, ulong) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::PathView path, uint64 initialSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(::Core::PathView, std::vector<Core::PathBuffer<std::string>>&, std::vector<Core::FileSystem::BasicFileData>&) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyDirectoryStructure(::Core::PathView, ::Core::PathView, std::vector<Core::PathBuffer<std::string>> const&, ::Core::FileSystemImpl*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFilesWithLimit(::Core::PathView, ::Core::PathView, std::vector<Core::FileSystem::BasicFileData>&, ulong&, ulong const, std::function<Core::Result (Core::PathView, Core::PathView, Core::FileSystem::FileTransferProgress&)> const&) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&) = 0;
#else // @header-generator platform
    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ulong> _checkFileInitialSize(::Core::PathView) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView path) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::FileSystem& get();
    // NOLINTEND
};

} // namespace Core
