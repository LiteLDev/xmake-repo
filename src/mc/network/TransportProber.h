#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class TransportProber : public ::Bedrock::Threading::AsyncResultBase<Bedrock::Result<std::string, std::error_code>> {
#else // @header-generator platform
class TransportProber : public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Result<::std::string>> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mUrls;
    ::ll::TypedStorage<8, 240, ::TaskGroup>             mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnk29e78d;
    ::ll::UntypedStorage<8, 336> mUnk515969;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TransportProber& operator=(TransportProber const&);
    TransportProber(TransportProber const&);
#endif // @header-generator platform
    TransportProber();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TransportProber();
#else // @header-generator platform
    virtual ~TransportProber() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TransportProber(std::vector<std::string>, ::WorkerPool&, ::Scheduler&);

    MCNAPI void _tryNextUrl(ulong);

    MCNAPI void start();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI TransportProber(::std::vector<::std::string> urls, ::WorkerPool& workerPool, ::Scheduler& scheduler);

    MCNAPI void _tryNextUrl(uint64 index);

    MCNAPI void start();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<std::string>, ::WorkerPool&, ::Scheduler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::vector<::std::string> urls, ::WorkerPool& workerPool, ::Scheduler& scheduler);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
