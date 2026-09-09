#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/asset_manager.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStorageArea.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryManifest; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class AssetStorageArea_android : public ::Core::FileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AAssetManager*>                                   mAssetManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const Bedrock::DirectoryManifest>> mDirManifest;
    // NOLINTEND

public:
    // prevent constructor by default
    AssetStorageArea_android();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AssetStorageArea_android();

    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType);

    virtual bool supportsSizeQuery() const;

    virtual ulong getTotalSize() const;

    virtual ::Core::Result getUsedSize(ulong&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AssetStorageArea_android(::Core::PathView, ::AAssetManager*);

    MCNAPI void init();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathView, ::AAssetManager*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Core::FileSystemImpl> $createTransaction(::Core::FileAccessType);

    MCNAPI bool $supportsSizeQuery() const;

    MCNAPI ulong $getTotalSize() const;

    MCNAPI ::Core::Result $getUsedSize(ulong&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
