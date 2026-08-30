#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

namespace SharedTypes::v1_20_50 {

struct FoodItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Legacy::ItemDescriptor> mUsingConvertsTo;
    ::ll::TypedStorage<4, 4, int>                                    mNutrition;
    ::ll::TypedStorage<4, 4, float>                                  mSaturationModifier;
    ::ll::TypedStorage<1, 1, bool>                                   mCanAlwaysEat;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
