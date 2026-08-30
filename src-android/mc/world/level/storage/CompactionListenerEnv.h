#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"

class CompactionListenerEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::leveldb::Env*> mTarget;
    ::ll::TypedStorage<4, 40, std::mutex>     mLock;
    ::ll::UntypedStorage<1, 16>               mCompactionRunning;
    ::ll::UntypedStorage<8, 48>               mCompactionCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    CompactionListenerEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompactionListenerEnv();

    virtual void Schedule(void (*)(void*), void*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Schedule(void (*)(void*), void*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
