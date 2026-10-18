#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_C) // @header-generator platform
enum class ContainerActionType : int {
    None                      = 0,
    TakeAllItems              = 1,
    TakeHalfItems             = 2,
    PlaceAllItems             = 3,
    PlaceOneItem              = 4,
    GatherAllOrAutoPlaceItems = 5,
    AutoPlaceItems            = 6,
    StartSplitSingleItem      = 7,
    StartSplitMultipleItems   = 8,
    SplitSingleItem           = 9,
    SplitMultipleItems        = 10,
    DropAllItems              = 11,
    DropOneItem               = 12,
    TakeTopBundleItem         = 13,
    PutItemInBundle           = 14,
    SelectRecipe              = 15,
    AutoCraftOneItem          = 16,
    AutoCraftAllItems         = 17,
};
#else // @header-generator platform
enum class ContainerActionType : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
