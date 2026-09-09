#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/StorageMigrationFiles.h"
#include "mc/deps/application/storage_migration/StorageMigrationFolders.h"

namespace Bedrock::StorageMigration {

struct StorageMigrationInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::StorageMigration::StorageMigrationFolders>> mFolders;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::StorageMigration::StorageMigrationFiles>>   mFiles;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>                              mSuccessCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                                 mExcludeExtensions;
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
