#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundType.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/ElementType.h"

struct ChemistryIngredient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ChemistryIngredient& operator=(ChemistryIngredient const&);
};
