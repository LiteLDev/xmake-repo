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
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystem_generic : public ::Core::FileSystemImpl {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FileSystem_generic();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FileSystem_generic();
#else // @header-generator platform
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
    virtual bool _fileExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _fileExists(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteFile(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _createOneDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _directoryExists(::Core::PathView);
#else // @header-generator platform
    virtual bool _directoryExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);
#else // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual bool _fileOrDirectoryExists(::Core::PathView);

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSystem_generic(
        ::Core::FileAccessType,
        std::shared_ptr<Core::FileStorageArea>,
        std::shared_ptr<Core::FlatFileManifestTracker>
    );
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
    MCNAPI ::Core::Result
    $_openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    MCNAPI bool $_fileExists(::Core::PathView);

    MCNAPI ::Core::Result $_deleteFile(::Core::PathView);

    MCNAPI ::Core::Result $_getFileSize(::Core::PathView, ulong*);

    MCNAPI ::Core::Result $_renameFile(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $_createOneDirectory(::Core::PathView);

    MCNAPI bool $_directoryExists(::Core::PathView);

    MCNAPI ::Core::Result $_deleteEmptyDirectory(::Core::PathView);

    MCNAPI ::Core::Result $_renameDirectory(::Core::PathView, ::Core::PathView);

    MCNAPI ::Core::Result $_iterateOverDirectory(
#else // @header-generator platform
    virtual ::Core::Result _iterateOverDirectory(
#endif // @header-generator platform
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
#if defined(LL_PLAT_A) // @header-generator platform
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
    );
#else // @header-generator platform
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_fileOrDirectoryExists(::Core::PathView);
#else // @header-generator platform
    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getEntryType(::Core::PathView, ::Core::FileType&);
#else // @header-generator platform
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getLastModificationTime(::Core::PathView, long*);
#else // @header-generator platform
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
