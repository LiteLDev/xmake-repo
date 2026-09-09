#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace CodeBuilder {

class RequestInterpreter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>    mTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mFilePath;
    // NOLINTEND
};

} // namespace CodeBuilder
