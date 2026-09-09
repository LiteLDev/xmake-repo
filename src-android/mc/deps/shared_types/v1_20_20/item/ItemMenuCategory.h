#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_19_40/item/ItemCategory.h"

namespace SharedTypes::v1_20_20 {

struct ItemMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>                            mCreativeCategory;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mCreativeGroupName;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mIsHiddenInCommands;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_20
