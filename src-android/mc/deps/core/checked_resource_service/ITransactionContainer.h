#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct ITransactionContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITransactionContainer();

    virtual std::unique_ptr<mce::IDeferredDebugUpdate> apply() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ITransactionContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

} // namespace mce
