#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolManager.h"
#include "mc/deps/profiler/ThreadFrameType.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
struct WorkerPoolConfig;
namespace Bedrock { class WorkerPoolHandleImpl; }
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class WorkerPoolManagerImpl : public ::Bedrock::WorkerPoolManager {
public:
    // WorkerPoolManagerImpl inner types declare
    // clang-format off
    struct PoolEntry;
    // clang-format on

    // WorkerPoolManagerImpl inner types define
    struct PoolEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<WorkerPool>>                   mPool;
        ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::WorkerPoolHandleImpl>> mHandle;
        // NOLINTEND

    public:
        // prevent constructor by default
        PoolEntry& operator=(PoolEntry const&);
        PoolEntry(PoolEntry const&);
        PoolEntry();
    };

    using PoolEntryMap = std::map<std::string, Bedrock::WorkerPoolManagerImpl::PoolEntry>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<std::string, Bedrock::WorkerPoolManagerImpl::PoolEntry>> mPoolEntries;
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorkerPoolManagerImpl();

    virtual void init();

    virtual std::shared_ptr<Bedrock::WorkerPoolHandleInterface> createWorkerPool(std::string_view, ::Core::Profile::ThreadFrameType, ::WorkerPoolConfig const&);

    virtual void tick();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI std::shared_ptr<Bedrock::WorkerPoolHandleInterface>
           $createWorkerPool(std::string_view, ::Core::Profile::ThreadFrameType, ::WorkerPoolConfig const&);

    MCNAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
