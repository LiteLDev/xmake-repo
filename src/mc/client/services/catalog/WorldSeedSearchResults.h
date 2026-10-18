#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/WorldSeedDocument.h"

struct WorldSeedSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<WorldSeedDocument>> mDocuments;
    // NOLINTEND
};
#else // @header-generator platform
struct WorldSeedSearchResults {};
#endif // @header-generator platform
