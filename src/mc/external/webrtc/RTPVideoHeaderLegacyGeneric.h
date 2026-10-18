#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderLegacyGeneric {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnka9a5c1;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPVideoHeaderLegacyGeneric& operator=(RTPVideoHeaderLegacyGeneric const&);
    RTPVideoHeaderLegacyGeneric(RTPVideoHeaderLegacyGeneric const&);
    RTPVideoHeaderLegacyGeneric();
};

} // namespace webrtc
#endif // @header-generator platform
