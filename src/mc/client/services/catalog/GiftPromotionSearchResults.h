#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/GiftPromotionDocument.h"

struct GiftPromotionSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GiftPromotionDocument>> mDocuments;
    // NOLINTEND
};
#else // @header-generator platform
struct GiftPromotionSearchResults {};
#endif // @header-generator platform
