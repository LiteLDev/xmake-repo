#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ProcessInterval {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdfb0f0;
    ::ll::UntypedStorage<8, 16> mUnke908fd;
    // NOLINTEND

public:
    // prevent constructor by default
    ProcessInterval& operator=(ProcessInterval const&);
    ProcessInterval(ProcessInterval const&);
    ProcessInterval();
};

} // namespace webrtc
#endif // @header-generator platform
