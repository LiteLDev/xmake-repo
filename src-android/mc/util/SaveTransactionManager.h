#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

class SaveTransactionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // SaveTransactionManager inner types define
    using ShowIconFunction = std::function<void(bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>   mLock;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 48>             mShowIconFunction;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveTransactionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SaveTransactionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SaveTransactionManager(::WorkerPool&, ::Scheduler&, std::function<void(bool)>);

    MCNAPI void _hideGlobalSaveIcon();

    MCNAPI void _showGlobalSaveIcon();

    MCNAPI void onBeginCompaction();

    MCNAPI void onEndCompaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, std::function<void(bool)>);
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
