#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestInfo; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct ExcludedPath; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class FlatFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result copyFlatFile(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
#else // @header-generator platform
        ::Core::FileSystemImpl*                    sourceTransaction,
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::FileSystemImpl*                    targetTransaction,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& exclusionDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
#endif // @header-generator platform
    );

    MCNAPI static ::Core::Result createFlatFile(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        bool
#else // @header-generator platform
        ::Core::FileSystemImpl*                    sourceTransaction,
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::FileSystemImpl*                    targetTransaction,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& exclusionPaths,
        bool                                       deleteSourceDirectory
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result
    createFlatFileManifest(::Core::FileSystemImpl&, ::Core::PathView, std::vector<Core::FlatFileManifestInfo> const&);

    MCNAPI static ::Core::Result replaceFlatFileManifest(
        ::Core::FileSystemImpl&,
        ::Core::PathView,
        std::vector<Core::FlatFileManifestInfo> const&,
        bool
#else // @header-generator platform
    MCNAPI static ::Core::Result createFlatFileManifest(
        ::Core::FileSystemImpl&                            transaction,
        ::Core::PathView                                   flatFileManifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result
    transferFlatFileDirectory(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
#else // @header-generator platform
    MCNAPI static ::Core::Result replaceFlatFileManifest(
        ::Core::FileSystemImpl&                            transaction,
        ::Core::PathView                                   flatFileManifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector,
        bool                                               keepCached
    );

    MCNAPI static ::Core::Result transferFlatFileDirectory(
        ::Core::FileSystemImpl* sourceTransaction,
        ::Core::PathView        sourceDirectoryPath,
        ::Core::FileSystemImpl* targetTransaction,
        ::Core::PathView        targetDirectoryPath
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong const& FLAT_FILE_CURRENT_VERSION();
#else // @header-generator platform
    MCNAPI static ::std::string const& FLAT_FILE_EMPTY_MANIFEST_FILE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& FLAT_FILE_EMPTY_MANIFEST_FILE();
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& FLAT_FILE_EXTENSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& FLAT_FILE_EXTENSION();

    MCNAPI static ulong const& FLAT_FILE_INVALID_VERSION();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& FLAT_FILE_MANIFEST_EXTENSION();

    MCNAPI static ulong const& FLAT_FILE_WRITE_CHUNK_SIZE();
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& FLAT_FILE_MANIFEST_EXTENSION();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
