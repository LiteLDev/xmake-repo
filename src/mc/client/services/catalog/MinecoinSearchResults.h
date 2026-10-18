#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/MinecoinDocument.h"

struct MinecoinSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MinecoinDocument>> mDocuments;
    // NOLINTEND
};
#else // @header-generator platform
struct MinecoinSearchResults {};
#endif // @header-generator platform
