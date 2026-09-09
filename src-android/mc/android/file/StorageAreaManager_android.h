#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/asset_manager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
class IStorageAreaConfig_android;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
// clang-format on

class StorageAreaManager_android {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FileStorageDirectory>                  mCurrentStorageSetting;
    ::ll::TypedStorage<4, 40, std::mutex>                             mPathLock;
    ::ll::UntypedStorage<8, 24>                                       mHomePath;
    ::ll::UntypedStorage<8, 24>                                       mSandboxedExternalFileStoragePath;
    ::ll::UntypedStorage<8, 24>                                       mLegacyExternalFileStoragePath;
    ::ll::UntypedStorage<8, 24>                                       mCurrentFileStoragePath;
    ::ll::UntypedStorage<8, 24>                                       mInternalFileStoragePath;
    ::ll::UntypedStorage<8, 24>                                       mLoggingPath;
    ::ll::UntypedStorage<8, 24>                                       mOptionsTestPath;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<std::string>*>        mActiveExternalFileStoragePath;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mExternalFileStorageArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mAppDataFileStorageArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mAssetStorageArea;
    ::ll::UntypedStorage<8, 16>                                       mStorageMigrationService;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageAreaManager_android();

    MCNAPI void _initStorageMigration();

    MCNAPI ::FileStorageDirectory _setInitialStorageArea(bool, int);

    MCNAPI ::Core::PathBuffer<std::string> getAppDataOptionsLocation() const;

    MCNAPI ::Core::PathBuffer<std::string> getCurrentStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> getExternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> getHomePath() const;

    MCNAPI ::Core::PathBuffer<std::string> getInternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> getLoggingPath() const;

    MCNAPI ::FileStorageDirectory getStorageDirectory() const;

    MCNAPI void initStorageAreas(::AAssetManager*, ::Core::PathView);

    MCNAPI ::FileStorageDirectory initStoragePaths(::IStorageAreaConfig_android const&);

    MCNAPI void selectExternalStorage();

    MCNAPI void selectInternalStorage();

    MCNAPI void teardownStorageAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
