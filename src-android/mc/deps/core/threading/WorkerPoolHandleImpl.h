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
    ::ll::UntypedStorage<8, 24> mWorkerPool;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolHandleImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkerPoolHandleImpl();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorkerPool>> get() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorkerPool>> $get() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
