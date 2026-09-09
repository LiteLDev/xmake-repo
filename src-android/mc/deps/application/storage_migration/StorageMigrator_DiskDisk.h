#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationResult.h"
#include "mc/deps/application/storage_migration/StorageMigrationInputs.h"
#include "mc/deps/application/storage_migration/StorageMigrator.h"
#include "mc/deps/core/file/Path.h"

namespace Bedrock::StorageMigration {

class StorageMigrator_DiskDisk : public ::Bedrock::StorageMigration::StorageMigrator {
public:
    // StorageMigrator_DiskDisk inner types define
    using AbortCallback = std::function<void(Bedrock::StorageMigration::MigrationResult, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::Bedrock::StorageMigration::StorageMigrationInputs const> mInputs;
    ::ll::UntypedStorage<1, 24>                                                           mManifestFolder;
    ::ll::TypedStorage<8, 24, std::string>                                                mMigrationType;
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
