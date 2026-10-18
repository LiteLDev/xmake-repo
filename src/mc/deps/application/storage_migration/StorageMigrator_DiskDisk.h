#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/storage_migration/StorageMigrationInputs.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/application/storage_migration/StorageMigrator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::StorageMigration {

class StorageMigrator_DiskDisk : public ::Bedrock::StorageMigration::StorageMigrator {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // StorageMigrator_DiskDisk inner types define
    using AbortCallback = std::function<void(Bedrock::StorageMigration::MigrationResult, const std::string&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 112, ::Bedrock::StorageMigration::StorageMigrationInputs const> mInputs;
    ::ll::UntypedStorage<1, 24>                                                           mManifestFolder;
    ::ll::TypedStorage<8, 24, std::string>                                                mMigrationType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 136> mUnkcf230f;
    ::ll::UntypedStorage<8, 32>  mUnk48badf;
    ::ll::UntypedStorage<8, 32>  mUnk937225;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrator_DiskDisk& operator=(StorageMigrator_DiskDisk const&);
    StorageMigrator_DiskDisk(StorageMigrator_DiskDisk const&);
    StorageMigrator_DiskDisk();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrator_DiskDisk() /*override*/ = default;

    virtual bool doQuickCompletionCheck() /*override*/;

    virtual void _runMigration(
        ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>,
        ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles>,
        ::std::function<void(::Bedrock::StorageMigration::StorageMigrator::MigrationProgress)>,
        ::std::function<void(::Bedrock::StorageMigration::MigrationResult)>
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
