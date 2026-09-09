#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationDetector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
namespace Bedrock::StorageMigration { struct StorageMigrationInputs; }
// clang-format on

namespace Bedrock::StorageMigration {

class MigrationDetector_Disk : public ::Bedrock::StorageMigration::MigrationDetector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::StorageMigration::StorageMigrationInputs const&> mInputs;
    ::ll::TypedStorage<8, 24, std::string const>                                         mType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::ManifestData>>  mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::FoundFiles>>    mFoundFiles;
    ::ll::TypedStorage<1, 1, bool>                                                       mDoneDetecting;
    // NOLINTEND

public:
    // prevent constructor by default
    MigrationDetector_Disk& operator=(MigrationDetector_Disk const&);
    MigrationDetector_Disk(MigrationDetector_Disk const&);
    MigrationDetector_Disk();
};

} // namespace Bedrock::StorageMigration
