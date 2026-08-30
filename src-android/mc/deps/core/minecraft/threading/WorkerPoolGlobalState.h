#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { class WorkerPoolManager; }
// clang-format on

struct WorkerPoolGlobalState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                    mWorkerPoolManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mAsyncHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mDiskHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mNetworkHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mRenderingHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mLevelDBHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mLevelDBCompactionHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mConnectedStorageHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mWatchdogHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mInputHandle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::WorkerPoolHandleInterface>> mGamefaceLayoutHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolGlobalState& operator=(WorkerPoolGlobalState const&);
    WorkerPoolGlobalState(WorkerPoolGlobalState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorkerPoolGlobalState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
