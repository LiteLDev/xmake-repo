#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Container;
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class Level;
class LootTable;
class LootTableContext;
class Player;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
class Spawner;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
// clang-format on

namespace Util {

class LootTableUtils {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string convertFromJavaLootTableName(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::string convertFromJavaLootTableName(::std::string const& lootTableName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int dropItems(::BlockSource&, ::Spawner&, ::Actor*, std::vector<ItemStack> const&, ::BlockPos const&);

    MCNAPI static int fillContainer(::Container&, std::vector<ItemStack>&);

    MCNAPI static void fillContainer(::Level&, ::Container&, ::Random&, std::string const&, ::DimensionType, ::Actor*);

    MCNAPI static std::vector<ItemStack> generateRandomDeathLoot(
        ::LootTable const&,
        ::Actor&,
        ::ActorDamageSource const*,
        ::ItemStack const*,
        ::Player*,
        float
#else // @header-generator platform
    MCAPI static void fillContainer(
        ::Level&             level,
        ::Container&         container,
        ::Random&            random,
        ::std::string const& tableName,
        ::DimensionType      dimensionId,
        ::Actor*             entity
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ItemStack> getRandomItems(std::string const&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI static ::std::vector<::ItemStack> generateRandomDeathLoot(
        ::LootTable const&         table,
        ::Actor&                   lootSourceEntity,
        ::ActorDamageSource const* damageSource,
        ::ItemStack const*         tool,
        ::Player*                  killer,
        float                      luck
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ItemStack> getRandomItems(::LootTable const&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI static ::std::vector<::ItemStack>
    getRandomItems(::std::string const& tableName, ::Random& random, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int givePlayer(::Player&, std::vector<ItemStack>&, bool);

    MCNAPI static ::LootTable* lookupLootTable(std::string const&, ::ILevel&);
#else // @header-generator platform
    MCAPI static int givePlayer(::Player& player, ::std::vector<::ItemStack>& items, bool shouldAddWhenFull);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util
