#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/GiftContent.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

struct GiftPromotionCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GiftContent>> mPromotionItems;
    // NOLINTEND
};
#else // @header-generator platform
struct GiftPromotionCustom {};
#endif // @header-generator platform
