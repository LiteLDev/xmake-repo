#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/PositiveRange.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
struct RangeFilterInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mFilterId;
    ::ll::TypedStorage<4, 8, ::catalog::PositiveRange> mRange;
    // NOLINTEND

public:
    // prevent constructor by default
    RangeFilterInfo& operator=(RangeFilterInfo const&);
    RangeFilterInfo();
};
#else // @header-generator platform
struct RangeFilterInfo {};
#endif // @header-generator platform

} // namespace catalog
