#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/StoreConfigDocument.h"

struct StoreConfigSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StoreConfigDocument>> mDocuments;
    // NOLINTEND
};
#else // @header-generator platform
struct StoreConfigSearchResults {};
#endif // @header-generator platform
