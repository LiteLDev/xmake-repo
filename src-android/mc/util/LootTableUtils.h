#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
class BlockSource;
class Container;
class ILevel;
class ItemStack;
class Level;
class LootTable;
class LootTableContext;
class Player;
class Random;
class Spawner;
struct DimensionType;
// clang-format on

namespace Util {

class LootTableUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string convertFromJavaLootTableName(std::string const&);

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
    );

    MCNAPI static std::vector<ItemStack> getRandomItems(std::string const&, ::Random&, ::LootTableContext&);

    MCNAPI static std::vector<ItemStack> getRandomItems(::LootTable const&, ::Random&, ::LootTableContext&);

    MCNAPI static int givePlayer(::Player&, std::vector<ItemStack>&, bool);

    MCNAPI static ::LootTable* lookupLootTable(std::string const&, ::ILevel&);
    // NOLINTEND
};

} // namespace Util
