#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationResult.h"
#include "mc/deps/application/storage_migration/StorageMigrationInputs.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class TaskResult;
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrator : public ::std::enable_shared_from_this<Bedrock::StorageMigration::StorageMigrator> {
public:
    // StorageMigrator inner types declare
    // clang-format off
    class MigrationProgress;
    // clang-format on

    // StorageMigrator inner types define
    class MigrationProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                                 mPercentComplete;
        ::ll::TypedStorage<4, 4, uint>                                                  mNumFilesCopied;
        ::ll::TypedStorage<4, 4, uint>                                                  mNumFilesTotal;
        ::ll::TypedStorage<8, 8, ulong>                                                 mBytesTransferred;
        ::ll::TypedStorage<8, 8, ulong>                                                 mBytesTotal;
        ::ll::TypedStorage<8, 24, std::string>                                          mProgressMessage;
        ::ll::UntypedStorage<8, 24>                                                     mCurrentProcessingFolder;
        ::ll::TypedStorage<8, 112, ::Bedrock::StorageMigration::StorageMigrationInputs> mInputs;
        // NOLINTEND
    };

    using MigrationTask = std::function<TaskResult()>;

    using ProgressCallback = std::function<void(Bedrock::StorageMigration::StorageMigrator::MigrationProgress)>;

    using CompletionCallback = std::function<void(Bedrock::StorageMigration::MigrationResult)>;
};

} // namespace Bedrock::StorageMigration
