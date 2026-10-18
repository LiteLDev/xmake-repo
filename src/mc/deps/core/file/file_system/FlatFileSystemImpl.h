#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FlatFileSearchResult; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FlatFileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Core::FileSystemImpl&>                         mFileSystemImpl;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FlatFileManifestTracker>> mFlatFileManifestTracker;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke799e3;
    ::ll::UntypedStorage<8, 16> mUnkf2e326;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileSystemImpl& operator=(FlatFileSystemImpl const&);
    FlatFileSystemImpl(FlatFileSystemImpl const&);
    FlatFileSystemImpl();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::FlatFileSearchResult _findFileOrDirectoryEntry(::Core::PathView, ::Core::PathView, bool);
#else // @header-generator platform
    MCNAPI ::Core::FlatFileSearchResult
    _findFileOrDirectoryEntry(::Core::PathView filePath, ::Core::PathView manifestPath, bool skipDeleted);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result _getSeekPositionAndSize(::Core::PathView, ::Core::PathView, ulong&, ulong&);
#else // @header-generator platform
    MCNAPI ::Core::Result _getSeekPositionAndSize(
        ::Core::PathView filePath,
        ::Core::PathView manifestPath,
        uint64&          seekPositionOut,
        uint64&          fileSizeOut
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isDirectoryPathAFlatFile(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::Core::Result copyFlatFile(
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAccessFlatFile(::Core::PathView, ::Core::PathBuffer<std::string>&, bool);
#else // @header-generator platform
    MCNAPI ::Core::Result createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCNAPI ::Core::Result deleteFileOrDirectory(
        ::Core::PathView fileOrDirectoryPath,
        ::Core::PathView manifestPath,
        bool             directoryDeleteEnabled,
        bool             deleteRecursively
    );

    MCNAPI bool fileOrDirectoryExists(::Core::PathView path, ::Core::PathView manifestPath);

    MCNAPI bool isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCNAPI ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::PathView                                                             manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCNAPI ::Core::Result openFlatFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::PathView                     filePath,
        ::Core::PathView                     manifestPath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCNAPI bool shouldAccessFlatFile(
        ::Core::PathView                   path,
        ::Core::PathBuffer<::std::string>& manifestFilePath,
        bool                               shouldIncludeParentDir
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
