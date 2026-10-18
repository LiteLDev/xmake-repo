#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/ms_graph/DriveItem.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph::Models {

#if defined(LL_PLAT_A) // @header-generator platform
struct DriveItemCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MSGraph::Models::DriveItem>> driveItems;
    ::ll::TypedStorage<8, 24, std::string>                             nextLink;
    // NOLINTEND
};
#else // @header-generator platform
struct DriveItemCollection {};
#endif // @header-generator platform

} // namespace MSGraph::Models
