#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoBitrateAllocationParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk88380c;
    ::ll::UntypedStorage<8, 8> mUnk277567;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoBitrateAllocationParameters& operator=(VideoBitrateAllocationParameters const&);
    VideoBitrateAllocationParameters(VideoBitrateAllocationParameters const&);
    VideoBitrateAllocationParameters();
};

} // namespace webrtc
#endif // @header-generator platform
