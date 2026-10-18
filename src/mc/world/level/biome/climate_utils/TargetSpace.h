#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct TargetSpace {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, std::array<long, 7>> mParams;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::std::array<int64, 7>> mParams;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ClimateUtils
