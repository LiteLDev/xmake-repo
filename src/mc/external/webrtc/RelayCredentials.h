#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RelayCredentials {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk20328c;
    ::ll::UntypedStorage<8, 32> mUnk97803e;
    // NOLINTEND

public:
    // prevent constructor by default
    RelayCredentials& operator=(RelayCredentials const&);
    RelayCredentials(RelayCredentials const&);
    RelayCredentials();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RelayCredentials();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
