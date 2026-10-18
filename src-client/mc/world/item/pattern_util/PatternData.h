#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/pattern_util/PatternLayer.h"

namespace PatternUtil {

struct PatternData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PatternUtil::PatternLayer>> mPatterns;
    ::ll::TypedStorage<1, 1, uchar>                                   mBaseColor;
    // NOLINTEND
};

} // namespace PatternUtil
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
