#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolHandleInterface.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

namespace Bedrock {

class WorkerPoolHandleImpl : public ::Bedrock::WorkerPoolHandleInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mWorkerPool;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk12adf5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorkerPoolHandleImpl& operator=(WorkerPoolHandleImpl const&);
    WorkerPoolHandleImpl(WorkerPoolHandleImpl const&);
#endif // @header-generator platform
    WorkerPoolHandleImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorkerPoolHandleImpl();
#else // @header-generator platform
    virtual ~WorkerPoolHandleImpl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorkerPool>> get() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorkerPool> get() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorkerPool>> $get() const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorkerPool> $get() const;
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
