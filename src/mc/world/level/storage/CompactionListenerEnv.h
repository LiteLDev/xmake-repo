#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#else // @header-generator platform
#endif // @header-generator platform

class CompactionListenerEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::leveldb::Env*> mTarget;
    ::ll::TypedStorage<4, 40, std::mutex>     mLock;
    ::ll::UntypedStorage<1, 16>               mCompactionRunning;
    ::ll::UntypedStorage<8, 48>               mCompactionCallback;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk91de58;
    ::ll::UntypedStorage<8, 80> mUnk1753cf;
    ::ll::UntypedStorage<1, 1>  mUnk17bf1b;
    ::ll::UntypedStorage<8, 64> mUnk21aba1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CompactionListenerEnv& operator=(CompactionListenerEnv const&);
    CompactionListenerEnv(CompactionListenerEnv const&);
#endif // @header-generator platform
    CompactionListenerEnv();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CompactionListenerEnv();

    virtual void Schedule(void (*)(void*), void*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void Schedule(void (*function)(void*), void* arg) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $Schedule(void (*)(void*), void*);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $Schedule(void (*function)(void*), void* arg);
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
