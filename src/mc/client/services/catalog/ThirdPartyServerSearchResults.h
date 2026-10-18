#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/ThirdPartyServerDocument.h"

struct ThirdPartyServerSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ThirdPartyServerDocument>> mDocuments;
    // NOLINTEND
};
#else // @header-generator platform
struct ThirdPartyServerSearchResults {};
#endif // @header-generator platform
