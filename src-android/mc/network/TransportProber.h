#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

class TransportProber : public ::Bedrock::Threading::AsyncResultBase<Bedrock::Result<std::string, std::error_code>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mUrls;
    ::ll::TypedStorage<8, 240, ::TaskGroup>             mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportProber();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransportProber();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransportProber(std::vector<std::string>, ::WorkerPool&, ::Scheduler&);

    MCNAPI void _tryNextUrl(ulong);

    MCNAPI void start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<std::string>, ::WorkerPool&, ::Scheduler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
