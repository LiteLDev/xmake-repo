#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class UntypedFormatSpec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk66dac3;
    // NOLINTEND

public:
    // prevent constructor by default
    UntypedFormatSpec& operator=(UntypedFormatSpec const&);
    UntypedFormatSpec(UntypedFormatSpec const&);
    UntypedFormatSpec();
};

} // namespace absl
#endif // @header-generator platform
