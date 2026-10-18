#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RecursiveCriticalSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk432f9f;
    // NOLINTEND

public:
    // prevent constructor by default
    RecursiveCriticalSection& operator=(RecursiveCriticalSection const&);
    RecursiveCriticalSection(RecursiveCriticalSection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecursiveCriticalSection();

    MCNAPI ~RecursiveCriticalSection();
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
};

} // namespace webrtc
#endif // @header-generator platform
