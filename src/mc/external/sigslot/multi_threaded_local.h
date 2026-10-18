#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class multi_threaded_local {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk21dfbd;
    // NOLINTEND

public:
    // prevent constructor by default
    multi_threaded_local& operator=(multi_threaded_local const&);
    multi_threaded_local(multi_threaded_local const&);
    multi_threaded_local();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~multi_threaded_local();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace sigslot
#endif // @header-generator platform
