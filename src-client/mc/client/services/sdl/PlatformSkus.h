#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/OfferCategory.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace SDL {

struct PlatformSkus {
public:
    // PlatformSkus inner types define
    using PlatFormSkuVector = std::vector<std::pair<std::string, std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<OfferCategory, std::vector<std::pair<std::string, std::string>>>> mSkus;
    // NOLINTEND
};

} // namespace SDL
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
