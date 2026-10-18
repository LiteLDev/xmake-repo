#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DedicatedServerInitialization {

#if defined(LL_PLAT_C) // @header-generator platform
struct DedicatedServerInitResult {};
#else // @header-generator platform
struct DedicatedServerInitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkaf2b47;
    ::ll::UntypedStorage<8, 32> mUnk421dcb;
    ::ll::UntypedStorage<8, 8>  mUnk67a935;
    ::ll::UntypedStorage<8, 8>  mUnk59e110;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServerInitResult& operator=(DedicatedServerInitResult const&);
    DedicatedServerInitResult(DedicatedServerInitResult const&);
    DedicatedServerInitResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DedicatedServerInitResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace DedicatedServerInitialization
#endif // @header-generator platform
