#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestInfo; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct ExcludedPath; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class FlatFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result copyFlatFile(
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        std::vector<Core::ExcludedPath> const&
    );

    MCNAPI static ::Core::Result createFlatFile(
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        ::Core::FileSystemImpl*,
        ::Core::PathView,
        std::vector<Core::ExcludedPath> const&,
        bool
    );

    MCNAPI static ::Core::Result
    createFlatFileManifest(::Core::FileSystemImpl&, ::Core::PathView, std::vector<Core::FlatFileManifestInfo> const&);

    MCNAPI static ::Core::Result replaceFlatFileManifest(
        ::Core::FileSystemImpl&,
        ::Core::PathView,
        std::vector<Core::FlatFileManifestInfo> const&,
        bool
    );

    MCNAPI static ::Core::Result
    transferFlatFileDirectory(::Core::FileSystemImpl*, ::Core::PathView, ::Core::FileSystemImpl*, ::Core::PathView);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& FLAT_FILE_CURRENT_VERSION();

    MCNAPI static std::string const& FLAT_FILE_EMPTY_MANIFEST_FILE();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& FLAT_FILE_EXTENSION();

    MCNAPI static ulong const& FLAT_FILE_INVALID_VERSION();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& FLAT_FILE_MANIFEST_EXTENSION();

    MCNAPI static ulong const& FLAT_FILE_WRITE_CHUNK_SIZE();
    // NOLINTEND
};

} // namespace Core
