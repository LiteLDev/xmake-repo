#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
class MigrationDetector : public ::std::enable_shared_from_this<Bedrock::StorageMigration::MigrationDetector> {
#else // @header-generator platform
class MigrationDetector : public ::std::enable_shared_from_this<::Bedrock::StorageMigration::MigrationDetector> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // MigrationDetector inner types define
    using MigrationTask = std::function<TaskResult()>;
#else // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~MigrationDetector() = default;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles> getFoundFiles() const = 0;

    virtual void _runDetector(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>) = 0;
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Bedrock::StorageMigration
