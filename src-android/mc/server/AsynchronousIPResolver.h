#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

class AsynchronousIPResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mUrl;
    ::ll::UntypedStorage<8, 16>                           mIp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    AsynchronousIPResolver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsynchronousIPResolver(std::string);

    MCNAPI void _resolveIfNeeded();

    MCNAPI ::Bedrock::Threading::SharedAsync<std::string> getAsyncIp() const;

    MCNAPI std::string getIp() const;

    MCNAPI bool isDone() const;

    MCNAPI ~AsynchronousIPResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
