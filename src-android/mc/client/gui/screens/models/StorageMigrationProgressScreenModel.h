#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/StorageMigrationStatus.h"
#include "mc/deps/application/storage_migration/MigrationResult.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/application/storage_migration/StorageMigrator.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct MinecraftScreenModelContext;
namespace Bedrock::StorageMigration { class MigrationDetector; }
namespace Bedrock::StorageMigration { class StorageMigrationService; }
namespace Bedrock::StorageMigration { class StorageMigrator; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

class StorageMigrationProgressScreenModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::StorageMigrationStatus>                                     mTransferStatus;
    ::ll::TypedStorage<4, 4, ::Bedrock::StorageMigration::StorageMigrationType>              mMigrationType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::ManifestData>>      mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::MigrationDetector>> mDetector;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::StorageMigrator>>   mMigrator;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                                  mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationProgressScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrationProgressScreenModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageMigrationProgressScreenModel(::MinecraftScreenModelContext);

    MCNAPI void beginTransfer();

    MCNAPI ulong getAvailableDiskFreeSpace() const;

    MCNAPI ::StorageMigrationStatus const& getTransferStatus() const;

    MCNAPI void
    initTransferSystem(::Bedrock::NonOwnerPointer<Bedrock::StorageMigration::StorageMigrationService> const&);

    MCNAPI void resetTransfer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
