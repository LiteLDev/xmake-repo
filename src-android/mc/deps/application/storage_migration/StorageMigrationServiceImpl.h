#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/StorageMigrationInputs.h"
#include "mc/deps/application/storage_migration/StorageMigrationService.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { class MigrationDetector; }
namespace Bedrock::StorageMigration { class StorageMigrator; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrationServiceImpl : public ::Bedrock::StorageMigration::StorageMigrationService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::ManifestData>>      mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::MigrationDetector>> mDetector;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::StorageMigrator>>   mMigrator;
    ::ll::TypedStorage<8, 112, ::Bedrock::StorageMigration::StorageMigrationInputs>          mInputs;
    ::ll::UntypedStorage<1, 24>                                                              mManifestFolder;
    ::ll::TypedStorage<4, 4, ::Bedrock::StorageMigration::StorageMigrationType>              mType;
    ::ll::TypedStorage<1, 1, bool>                                                           mUIActive;
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
