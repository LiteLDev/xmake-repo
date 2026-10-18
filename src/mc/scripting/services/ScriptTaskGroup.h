#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScriptTaskGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                          mScheduler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk86a7e9;
    ::ll::UntypedStorage<8, 8>  mUnka4e895;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptTaskGroup& operator=(ScriptTaskGroup const&);
    ScriptTaskGroup(ScriptTaskGroup const&);
#endif // @header-generator platform
    ScriptTaskGroup();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptTaskGroup(::Bedrock::NonOwnerPointer<Scheduler>);

    MCNAPI ::TaskGroup& getTaskGroup();
#else // @header-generator platform
    MCNAPI explicit ScriptTaskGroup(::Bedrock::NonOwnerPointer<::Scheduler> scheduler);
#endif // @header-generator platform

    MCNAPI ~ScriptTaskGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<Scheduler>);
#else // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::Scheduler> scheduler);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
