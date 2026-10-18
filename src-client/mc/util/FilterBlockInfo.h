#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace CloneBlocksUtils {

struct FilterBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>                                  onlyCompareBlockType;
    ::ll::TypedStorage<8, 48, std::function<bool(const Block&)>> skipDueToFilter;
    // NOLINTEND
};

} // namespace CloneBlocksUtils
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
