#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::layout::model {

enum class PageableDataBaseDiscriminator : int {
    PageableDataBase                       = 0,
    PageableStandardMarketplaceItemPreview = 1,
    PageableExperiences                    = 2,
};

}
