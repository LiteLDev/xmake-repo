#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
// clang-format on

class ScriptTaskGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                          mScheduler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTaskGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptTaskGroup(::Bedrock::NonOwnerPointer<Scheduler>);

    MCNAPI ::TaskGroup& getTaskGroup();

    MCNAPI ~ScriptTaskGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<Scheduler>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
