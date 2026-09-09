#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class Level;
class RecipeIngredient;
class Recipes;
class ServerPlayer;
class StrictEntityContext;
class UnlockedRecipesServerComponent;
template<typename... T0> class Include;
struct ServerPlayerComponent;
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
        ::ll::TypedStorage<8, 24, std::vector<const ItemStack*>> allItemSlots;
        ::ll::TypedStorage<8, 8, std::unordered_set<int> const&> changedItemSlotIndices;
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
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static bool isEnabled(::Level const&);
    // NOLINTEND
};
