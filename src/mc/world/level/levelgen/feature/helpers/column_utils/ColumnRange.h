#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ColumnUtils {

struct ColumnRange {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>> floor;
    ::ll::TypedStorage<4, 8, std::optional<int>> ceiling;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>> floor;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> ceiling;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ColumnUtils
