#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationDetector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::StorageMigration { struct StorageMigrationInputs; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock::StorageMigration {

class MigrationDetector_Disk : public ::Bedrock::StorageMigration::MigrationDetector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::StorageMigration::StorageMigrationInputs const&> mInputs;
    ::ll::TypedStorage<8, 24, std::string const>                                         mType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::ManifestData>>  mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::StorageMigration::FoundFiles>>    mFoundFiles;
    ::ll::TypedStorage<1, 1, bool>                                                       mDoneDetecting;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkf4902b;
    ::ll::UntypedStorage<8, 32> mUnkb54b47;
    ::ll::UntypedStorage<8, 16> mUnk1689de;
    ::ll::UntypedStorage<8, 16> mUnke0be58;
    ::ll::UntypedStorage<1, 1>  mUnk86b830;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MigrationDetector_Disk& operator=(MigrationDetector_Disk const&);
    MigrationDetector_Disk(MigrationDetector_Disk const&);
    MigrationDetector_Disk();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MigrationDetector_Disk() /*override*/ = default;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles> getFoundFiles() const /*override*/;

    virtual void _runDetector(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>) /*override*/;
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Bedrock::StorageMigration
