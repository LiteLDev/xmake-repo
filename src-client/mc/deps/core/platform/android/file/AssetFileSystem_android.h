#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/asset_manager.h"
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryManifest; }
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Bedrock {

class AssetFileSystem_android : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AAssetManager*>                                         mAssetManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const Bedrock::DirectoryManifest> const> mDirManifest;
    // NOLINTEND

public:
    // prevent constructor by default
    AssetFileSystem_android();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AssetFileSystem_android();

    virtual ::Core::Result _openFile(std::unique_ptr<Core::FileImpl>&, ::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    virtual bool _fileExists(::Core::PathView);

    virtual ::Core::Result _deleteFile(::Core::PathView);

    virtual ::Core::Result _getFileSize(::Core::PathView, ulong*);

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _createOneDirectory(::Core::PathView);

    virtual bool _directoryExists(::Core::PathView);

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView);

    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView);

    virtual ::Core::Result _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<Core::Result (const Core::DirectoryIterationItem&)>);

    virtual bool _fileOrDirectoryExists(::Core::PathView);

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&);

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, long*);

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
    // clang-format on
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
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<Core::Result(const Core::DirectoryIterationItem&)>
    );

    MCNAPI bool $_fileOrDirectoryExists(::Core::PathView);

    MCNAPI ::Core::Result $_getEntryType(::Core::PathView, ::Core::FileType&);

    MCNAPI ::Core::Result $_getLastModificationTime(::Core::PathView, long*);

    MCNAPI ::Core::Result $_copyTimeAndAccessRights(::Core::PathView, ::Core::PathView);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
