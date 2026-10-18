#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

class SaveTransactionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SaveTransactionManager inner types define
    using ShowIconFunction = std::function<void(bool)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>   mLock;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 48>             mShowIconFunction;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80>  mUnk5ac7c8;
    ::ll::UntypedStorage<8, 336> mUnk54446c;
    ::ll::UntypedStorage<8, 64>  mUnk97a76d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SaveTransactionManager& operator=(SaveTransactionManager const&);
    SaveTransactionManager(SaveTransactionManager const&);
#endif // @header-generator platform
    SaveTransactionManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SaveTransactionManager();
#else // @header-generator platform
    virtual ~SaveTransactionManager() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SaveTransactionManager(::WorkerPool&, ::Scheduler&, std::function<void(bool)>);
#else // @header-generator platform
    MCNAPI SaveTransactionManager(
        ::WorkerPool&               workerPool,
        ::Scheduler&                scheduler,
        ::std::function<void(bool)> showIconFunction
    );
#endif // @header-generator platform

    MCNAPI void _hideGlobalSaveIcon();

    MCNAPI void _showGlobalSaveIcon();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void onBeginCompaction();

    MCNAPI void onEndCompaction();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, std::function<void(bool)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::function<void(bool)> showIconFunction);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
