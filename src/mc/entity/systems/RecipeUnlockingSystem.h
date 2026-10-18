#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorOwnerComponent;
class Level;
class RecipeIngredient;
class Recipes;
class ServerPlayer;
class StrictEntityContext;
class UnlockedRecipesServerComponent;
template<typename... T0> class Include;
struct ServerPlayerComponent;
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class RecipeUnlockingSystem {
public:
    // RecipeUnlockingSystem inner types declare
    // clang-format off
    struct InventoryChangedData;
    // clang-format on

    // RecipeUnlockingSystem inner types define
    struct InventoryChangedData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<const ItemStack*>> allItemSlots;
        ::ll::TypedStorage<8, 8, std::unordered_set<int> const&> changedItemSlotIndices;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack const*>> allItemSlots;
        ::ll::TypedStorage<8, 8, ::std::unordered_set<int> const&>   changedItemSlotIndices;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        InventoryChangedData& operator=(InventoryChangedData const&);
        InventoryChangedData(InventoryChangedData const&);
        InventoryChangedData();
    };

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static bool isEnabled(::Level const&);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
