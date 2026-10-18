#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace dragon::tasks { class GraphicsTasks; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct TaskGroupExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroupExecutor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TaskGroupExecutor(::dragon::tasks::GraphicsTasks&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::tasks::GraphicsTasks&);
    // NOLINTEND
};
#else // @header-generator platform
struct TaskGroupExecutor {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
