#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ms_graph/DriveItem.h"

namespace MSGraph::Models {

struct DriveItemCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MSGraph::Models::DriveItem>> driveItems;
    ::ll::TypedStorage<8, 24, std::string>                             nextLink;
    // NOLINTEND
};

} // namespace MSGraph::Models
