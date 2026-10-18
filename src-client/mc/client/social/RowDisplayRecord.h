#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ItemDisplayRecord.h"

namespace Social::Events {

struct RowDisplayRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                    controlId;
    ::ll::TypedStorage<8, 24, std::string>                                    telemetryId;
    ::ll::TypedStorage<8, 24, std::string>                                    sectionName;
    ::ll::TypedStorage<4, 4, int>                                             rowIndex;
    ::ll::TypedStorage<4, 4, int>                                             numItemsInRow;
    ::ll::TypedStorage<4, 4, int>                                             visiblePerRow;
    ::ll::TypedStorage<1, 1, bool>                                            isRowInitiallyVisible;
    ::ll::TypedStorage<1, 1, bool>                                            seenByPlayer;
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::ItemDisplayRecord>> itemInRow;
    // NOLINTEND
};

} // namespace Social::Events
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
