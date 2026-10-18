#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolManager.h"
#include "mc/deps/profiler/ThreadFrameType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WorkerPool;
#else // @header-generator platform
#endif // @header-generator platform
struct WorkerPoolConfig;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class WorkerPoolHandleImpl; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<WorkerPool>>                   mPool;
        ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::WorkerPoolHandleImpl>> mHandle;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk6f67eb;
        ::ll::UntypedStorage<8, 16> mUnke865a9;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PoolEntry& operator=(PoolEntry const&);
        PoolEntry(PoolEntry const&);
        PoolEntry();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PoolEntryMap = std::map<std::string, Bedrock::WorkerPoolManagerImpl::PoolEntry>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<std::string, Bedrock::WorkerPoolManagerImpl::PoolEntry>> mPoolEntries;
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk2e7b67;
    ::ll::UntypedStorage<8, 80> mUnkf15882;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WorkerPoolManagerImpl& operator=(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WorkerPoolManagerImpl();
#else // @header-generator platform
    virtual void init() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init();
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        ::std::string_view               name,
        ::Core::Profile::ThreadFrameType frameType,
        ::WorkerPoolConfig const&        config
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Bedrock::WorkerPoolHandleInterface> createWorkerPool(std::string_view, ::Core::Profile::ThreadFrameType, ::WorkerPoolConfig const&);

    virtual void tick();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Bedrock::WorkerPoolHandleInterface>
           $createWorkerPool(std::string_view, ::Core::Profile::ThreadFrameType, ::WorkerPoolConfig const&);
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> $createWorkerPool(
        ::std::string_view               name,
        ::Core::Profile::ThreadFrameType frameType,
        ::WorkerPoolConfig const&        config
    );
#endif // @header-generator platform

    MCNAPI void $tick();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
