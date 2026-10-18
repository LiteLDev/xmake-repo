#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CloneBlocksError.h"

namespace CloneBlocksUtils {

struct CloneBlocksResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<CloneBlocksUtils::CloneBlocksError>> error;
    ::ll::TypedStorage<4, 4, int>                                               count;
    // NOLINTEND
};

} // namespace CloneBlocksUtils
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
