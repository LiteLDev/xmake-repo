#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/storage_migration/StorageMigrationInputs.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/application/storage_migration/StorageMigrationService.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { class MigrationDetector; }
namespace Bedrock::StorageMigration { class StorageMigrator; }
namespace Bedrock::StorageMigration { struct ManifestData; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::StorageMigration { struct StorageMigrationInputs; }
namespace Core { class Path; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrationServiceImpl : public ::Bedrock::StorageMigration::StorageMigrationService {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::ManifestData>>      mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::MigrationDetector>> mDetector;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::StorageMigrator>>   mMigrator;
    ::ll::TypedStorage<8, 112, ::Bedrock::StorageMigration::StorageMigrationInputs>          mInputs;
    ::ll::UntypedStorage<1, 24>                                                              mManifestFolder;
    ::ll::TypedStorage<4, 4, ::Bedrock::StorageMigration::StorageMigrationType>              mType;
    ::ll::TypedStorage<1, 1, bool>                                                           mUIActive;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnk7e1e61;
    ::ll::UntypedStorage<8, 16>  mUnkd8cb36;
    ::ll::UntypedStorage<8, 16>  mUnk78404f;
    ::ll::UntypedStorage<8, 136> mUnk8ff8e3;
    ::ll::UntypedStorage<8, 32>  mUnk2c4679;
    ::ll::UntypedStorage<4, 4>   mUnk6b6842;
    ::ll::UntypedStorage<1, 1>   mUnk6aeab6;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationServiceImpl& operator=(StorageMigrationServiceImpl const&);
    StorageMigrationServiceImpl(StorageMigrationServiceImpl const&);
    StorageMigrationServiceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize(
        ::Bedrock::StorageMigration::StorageMigrationInputs const&,
        ::Core::Path const&,
        ::std::function<::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator>(
            ::Bedrock::StorageMigration::StorageMigrationInputs const&,
            ::Core::Path const&,
            ::std::string const&
        )>,
        ::Bedrock::StorageMigration::StorageMigrationType
    ) /*override*/;

    virtual bool checkMigrationPreviouslyCompleted() /*override*/;

    virtual bool checkMigrationInProgress() /*override*/;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData> loadManifest() /*override*/;

    virtual void setMigrationUIActive(bool) /*override*/;

    virtual ::Bedrock::StorageMigration::StorageMigrationType getMigrationType() const /*override*/;

    virtual ::Bedrock::StorageMigration::StorageMigrationInputs const& getInputs() const /*override*/;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::MigrationDetector> getDetector() const /*override*/;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator> getMigrator() const /*override*/;

    virtual bool isMigrationUIActive() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
