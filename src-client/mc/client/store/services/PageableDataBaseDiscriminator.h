#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::layout::model {

enum class PageableDataBaseDiscriminator : int {
    PageableDataBase                       = 0,
    PageableStandardMarketplaceItemPreview = 1,
    PageableExperiences                    = 2,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
