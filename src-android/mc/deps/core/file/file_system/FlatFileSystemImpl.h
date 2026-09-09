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
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
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
    ::ll::TypedStorage<8, 8, ::Core::FileSystemImpl&>                         mFileSystemImpl;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FlatFileManifestTracker>> mFlatFileManifestTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileSystemImpl& operator=(FlatFileSystemImpl const&);
    FlatFileSystemImpl(FlatFileSystemImpl const&);
    FlatFileSystemImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::FlatFileSearchResult _findFileOrDirectoryEntry(::Core::PathView, ::Core::PathView, bool);

    MCNAPI ::Core::Result _getSeekPositionAndSize(::Core::PathView, ::Core::PathView, ulong&, ulong&);

    MCNAPI bool isDirectoryPathAFlatFile(::Core::PathView);

    MCNAPI bool shouldAccessFlatFile(::Core::PathView, ::Core::PathBuffer<std::string>&, bool);
    // NOLINTEND
};

} // namespace Core
