#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileSystem.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSizePresetManager; }
namespace Core { class FileSizePresetToken; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class StandardFileSystem : public ::Core::FileSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSizePresetManager>> mFileSizePresetManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StandardFileSystem();

    virtual ::Core::Result openFile(::Core::PathView, ::Core::File&, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    virtual bool fileExists(::Core::PathView);

    virtual ::Core::Result deleteFile(::Core::PathView);

    virtual ::Core::Result deleteFilePriority(::Core::PathView);

    virtual ::Core::Result getFileSize(::Core::PathView, ulong*);

    virtual ::Core::Result renameFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result createEmptyFile(::Core::PathView);

    virtual ::Core::Result copyFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result copyFileWithLimit(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result readFileData(::Core::PathView, std::vector<uchar>&);

    virtual ::Bedrock::Result<std::string, std::error_code> readFile(::Core::PathView);

    virtual ::Bedrock::Result<void, std::error_code> writeFile(::Core::PathView, std::string_view);

    virtual ::Core::Result createOneDirectory(::Core::PathView);

    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView);

    virtual ::Core::Result createDirectoryRecursively(::Core::PathView);

    virtual bool directoryExists(::Core::PathView);

    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView);

    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView);

    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView);

    virtual ::Core::Result renameDirectory(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual ::Core::Result getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    virtual ::Core::Result getDirectoryFilesAndSizes(std::vector<Core::FileSystem::BasicFileData>&, ::Core::PathView);

    virtual ::Core::Result getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    virtual ::Core::Result getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);

    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);

    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView, ::Core::PathView);

    virtual bool isDirectoryPartiallyCopied(::Core::PathView);

    virtual bool fileOrDirectoryExists(::Core::PathView);

    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView, ulong*);

    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView);

    virtual ::Core::Result isValidPath(::Core::PathView);

    virtual ::Core::Result getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result createFlatFile(::Core::PathView, ::Core::PathView);

    virtual bool isDirectoryPathAFlatFile(::Core::PathView);

    virtual ::Core::Result copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);

    virtual ::Core::Result createDirectoryForFile(::Core::PathView);

    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getUniqueFilePathForFile(::Core::PathView);

    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getUniqueFilePathForDirectory(::Core::PathView);

    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> createUniquePathFromSeed(::Core::PathView, std::function<std::string (int)>);

    virtual std::vector<Core::PathBuffer<std::string>> splitPathIntoFullPathSegments(::Core::PathView);

    virtual ::Core::Result readFileDataExt(::Core::PathView, ulong, ulong, std::vector<uchar>&, ulong&);

    virtual ::Core::Result cleanPath_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);

    virtual ::Core::Result cleanPathSeparators_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);

    virtual bool checkStorageCorrupt(::Core::PathView);

    virtual std::unique_ptr<Core::FileSizePresetToken> presetFileInitialSize(::Core::PathView, ulong);

    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(::Core::PathView, std::vector<Core::PathBuffer<std::string>>&, std::vector<Core::FileSystem::BasicFileData>&);

    virtual ::Core::Result _copyDirectoryStructure(::Core::PathView, ::Core::PathView, std::vector<Core::PathBuffer<std::string>> const&, ::Core::FileSystemImpl*);

    virtual ::Core::Result _copyFilesWithLimit(::Core::PathView, ::Core::PathView, std::vector<Core::FileSystem::BasicFileData>&, ulong&, ulong const, std::function<Core::Result (Core::PathView, Core::PathView, Core::FileSystem::FileTransferProgress&)> const&);

    virtual ::Core::Result _copyFlatFile(::Core::PathView, ::Core::PathView, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);

    virtual std::optional<ulong> _checkFileInitialSize(::Core::PathView);
    // clang-format on
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
    );

    MCNAPI ::Core::Result $getDirectoryFiles(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    MCNAPI ::Core::Result $getDirectoryFilesAndSizes(std::vector<Core::FileSystem::BasicFileData>&, ::Core::PathView);

    MCNAPI ::Core::Result $getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>>&, ::Core::PathView);

    MCNAPI ::Core::Result $getDirectoryFilesSizeRecursively(ulong&, ::Core::PathView);

    MCNAPI ::Core::Result $getDirectoryFilesAllocatedSizeRecursively(ulong&, ulong&, ::Core::PathView);

    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView, ::Core::PathView);

    MCNAPI bool $isDirectoryPartiallyCopied(::Core::PathView);

    MCNAPI bool $fileOrDirectoryExists(::Core::PathView);

    MCNAPI ::Core::Result $getFileOrDirectorySize(::Core::PathView, ulong*);

    MCNAPI ::Core::Result $addIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result $removeIgnoredThrottlePath(::Core::PathView);

    MCNAPI ::Core::Result $isValidPath(::Core::PathView);

    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView, long*);

    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $createFlatFile(::Core::PathView, ::Core::PathView);

    MCNAPI bool $isDirectoryPathAFlatFile(::Core::PathView);

    MCNAPI ::Core::Result $copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
    );

    MCNAPI ::Core::Result $createDirectoryForFile(::Core::PathView);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>> $getUniqueFilePathForFile(::Core::PathView);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>> $getUniqueFilePathForDirectory(::Core::PathView);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>>
        $createUniquePathFromSeed(::Core::PathView, std::function<std::string(int)>);

    MCNAPI std::vector<Core::PathBuffer<std::string>> $splitPathIntoFullPathSegments(::Core::PathView);

    MCNAPI ::Core::Result $readFileDataExt(::Core::PathView, ulong, ulong, std::vector<uchar>&, ulong&);

    MCNAPI ::Core::Result
    $cleanPath_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);

    MCNAPI ::Core::Result
    $cleanPathSeparators_deprecated(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, ::Core::PathView);

    MCNAPI bool $checkStorageCorrupt(::Core::PathView);

    MCNAPI std::unique_ptr<Core::FileSizePresetToken> $presetFileInitialSize(::Core::PathView, ulong);

    MCNAPI ::Core::Result $_getDirectoriesAndFileSizesRecursively(
        ::Core::PathView,
        std::vector<Core::PathBuffer<std::string>>&,
        std::vector<Core::FileSystem::BasicFileData>&
    );

    MCNAPI ::Core::Result $_copyDirectoryStructure(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::PathBuffer<std::string>> const&,
        ::Core::FileSystemImpl*
    );

    MCNAPI ::Core::Result $_copyFilesWithLimit(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::FileSystem::BasicFileData>&,
        ulong&,
        ulong const,
        std::function<Core::Result(Core::PathView, Core::PathView, Core::FileSystem::FileTransferProgress&)> const&
    );

    MCNAPI ::Core::Result $_copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
    );

    MCNAPI std::optional<ulong> $_checkFileInitialSize(::Core::PathView);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
