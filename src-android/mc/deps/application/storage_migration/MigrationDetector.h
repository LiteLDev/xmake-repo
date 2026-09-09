#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskResult;
// clang-format on

namespace Bedrock::StorageMigration {

class MigrationDetector : public ::std::enable_shared_from_this<Bedrock::StorageMigration::MigrationDetector> {
public:
    // MigrationDetector inner types define
    using MigrationTask = std::function<TaskResult()>;
};

} // namespace Bedrock::StorageMigration
