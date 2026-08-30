#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/item/ItemCooldownType.h"

namespace SharedTypes::v1_20_50 {

struct CooldownItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mDuration;
    ::ll::TypedStorage<1, 1, ::SharedTypes::ItemCooldownType> mType;
    ::ll::TypedStorage<8, 24, std::string>                    mCategory;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
