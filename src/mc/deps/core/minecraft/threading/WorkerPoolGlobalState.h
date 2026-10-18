#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { class WorkerPoolManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WorkerPoolGlobalState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk54ac73;
    ::ll::UntypedStorage<8, 16> mUnk7f4e01;
    ::ll::UntypedStorage<8, 16> mUnk7a8823;
    ::ll::UntypedStorage<8, 16> mUnk85d8bb;
    ::ll::UntypedStorage<8, 16> mUnk4f15a0;
    ::ll::UntypedStorage<8, 16> mUnkf5ffa2;
    ::ll::UntypedStorage<8, 16> mUnk180b5b;
    ::ll::UntypedStorage<8, 16> mUnk2265cb;
    ::ll::UntypedStorage<8, 16> mUnk6e9ba2;
    ::ll::UntypedStorage<8, 16> mUnk206bd2;
    ::ll::UntypedStorage<8, 16> mUnk49f4a5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolGlobalState& operator=(WorkerPoolGlobalState const&);
    WorkerPoolGlobalState(WorkerPoolGlobalState const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
    WorkerPoolGlobalState();
#endif // @header-generator platform
};
