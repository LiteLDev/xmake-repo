#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class MutexImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkd8313b;
    // NOLINTEND

public:
    // prevent constructor by default
    MutexImpl& operator=(MutexImpl const&);
    MutexImpl(MutexImpl const&);
    MutexImpl();
};

} // namespace webrtc
#endif // @header-generator platform
