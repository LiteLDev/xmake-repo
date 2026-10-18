#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/ResourcePackTreatmentDocument.h"

struct ResourcePackTreatmentSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ResourcePackTreatmentDocument>> mDocuments;
    // NOLINTEND
};
#else // @header-generator platform
struct ResourcePackTreatmentSearchResults {};
#endif // @header-generator platform
