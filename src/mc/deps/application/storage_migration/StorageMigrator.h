#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/storage_migration/StorageMigrationInputs.h"
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class TaskResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::StorageMigration {

#if defined(LL_PLAT_A) // @header-generator platform
class StorageMigrator : public ::std::enable_shared_from_this<Bedrock::StorageMigration::StorageMigrator> {
#else // @header-generator platform
class StorageMigrator : public ::std::enable_shared_from_this<::Bedrock::StorageMigration::StorageMigrator> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                                                 mPercentComplete;
        ::ll::TypedStorage<4, 4, uint>                                                  mNumFilesCopied;
        ::ll::TypedStorage<4, 4, uint>                                                  mNumFilesTotal;
        ::ll::TypedStorage<8, 8, ulong>                                                 mBytesTransferred;
        ::ll::TypedStorage<8, 8, ulong>                                                 mBytesTotal;
        ::ll::TypedStorage<8, 24, std::string>                                          mProgressMessage;
        ::ll::UntypedStorage<8, 24>                                                     mCurrentProcessingFolder;
        ::ll::TypedStorage<8, 112, ::Bedrock::StorageMigration::StorageMigrationInputs> mInputs;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>   mUnkdd4c51;
        ::ll::UntypedStorage<4, 4>   mUnk43a903;
        ::ll::UntypedStorage<4, 4>   mUnk1ca0e6;
        ::ll::UntypedStorage<8, 8>   mUnk6b5656;
        ::ll::UntypedStorage<8, 8>   mUnkcb3610;
        ::ll::UntypedStorage<8, 32>  mUnkc298e1;
        ::ll::UntypedStorage<8, 32>  mUnkaeacc9;
        ::ll::UntypedStorage<8, 136> mUnkaff333;
        // NOLINTEND

    public:
        // prevent constructor by default
        MigrationProgress& operator=(MigrationProgress const&);
        MigrationProgress(MigrationProgress const&);
        MigrationProgress();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~MigrationProgress();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using MigrationTask = std::function<TaskResult()>;
#else // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrator() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ProgressCallback = std::function<void(Bedrock::StorageMigration::StorageMigrator::MigrationProgress)>;
#else // @header-generator platform
    virtual bool doQuickCompletionCheck() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using CompletionCallback = std::function<void(Bedrock::StorageMigration::MigrationResult)>;
#else // @header-generator platform
    virtual void _runMigration(
        ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>,
        ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles>,
        ::std::function<void(::Bedrock::StorageMigration::StorageMigrator::MigrationProgress)>,
        ::std::function<void(::Bedrock::StorageMigration::MigrationResult)>
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::function<::TaskResult()> createMigrationTask(
        ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>                           manifest,
        ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles>                             filesToMigrate,
        ::std::function<void(::Bedrock::StorageMigration::StorageMigrator::MigrationProgress)> progressCallback,
        ::std::function<void(::Bedrock::StorageMigration::MigrationResult)>                    completeCallback
    );
#endif
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Bedrock::StorageMigration
