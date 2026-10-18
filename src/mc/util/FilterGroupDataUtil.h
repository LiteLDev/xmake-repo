#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FilterGroup;
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
// clang-format on

namespace FilterGroupDataUtil {
// functions
// NOLINTBEGIN
MCNAPI void convertToFilterGroupData(
    ::SharedTypes::v1_21_20::FilterGroupData& filterGroupData,
    ::FilterGroup const&                      actorFilterGroup
);
// NOLINTEND

} // namespace FilterGroupDataUtil
#endif // @header-generator platform
