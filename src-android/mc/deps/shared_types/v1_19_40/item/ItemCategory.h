#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_19_40 {

struct ItemCategory {
public:
    // ItemCategory inner types define
    enum class CreativeItemCategory : uchar {
        All             = 0,
        Construction    = 1,
        Nature          = 2,
        Equipment       = 3,
        Items           = 4,
        ItemCommandOnly = 5,
        Undefined       = 6,
        _Count          = 7,
    };

    enum class CreativeItemCategoryStringError : uchar {
        EmptyString = 0,
        NotFound    = 1,
    };
};

} // namespace SharedTypes::v1_19_40
