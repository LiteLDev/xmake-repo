#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/GiftPromotionCustom.h"

struct GiftPromotionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument>     mCommon;
    ::ll::TypedStorage<8, 24, ::GiftPromotionCustom> mCustom;
    // NOLINTEND
};
#else // @header-generator platform
struct GiftPromotionDocument {};
#endif // @header-generator platform
