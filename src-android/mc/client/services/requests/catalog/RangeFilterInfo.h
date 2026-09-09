#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/PositiveRange.h"

namespace catalog {

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

} // namespace catalog
