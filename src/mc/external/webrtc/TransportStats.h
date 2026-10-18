#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TransportStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk210569;
    ::ll::UntypedStorage<8, 24> mUnk515553;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportStats& operator=(TransportStats const&);
    TransportStats(TransportStats const&);
    TransportStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransportStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
