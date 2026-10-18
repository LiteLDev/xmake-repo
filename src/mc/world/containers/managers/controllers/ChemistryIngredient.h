#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/CompoundType.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/ElementType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ChemistryIngredient {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItem;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnkb02e94;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ChemistryIngredient& operator=(ChemistryIngredient const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ChemistryIngredient(ChemistryIngredient const&);
    ChemistryIngredient();
#endif // @header-generator platform
};
