#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileClient.h"

namespace Core::Profile {

class NoOp_ProfileClient : public ::Core::Profile::ProfileClient {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NoOp_ProfileClient();
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
#else // @header-generator platform
    virtual ~NoOp_ProfileClient() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::Profile
