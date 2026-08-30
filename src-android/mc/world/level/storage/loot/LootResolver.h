#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CommandOutput;
class ItemStack;
class Level;
struct DimensionType;
// clang-format on

class LootResolver {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<std::vector<ItemStack>>
    getItemsFromKilling(::Actor*, ::Actor*, ::ItemStack const&, ::CommandOutput*);

    MCNAPI static std::optional<std::vector<ItemStack>>
    getItemsFromLooting(std::string const&, ::ItemStack const&, ::Level&, ::DimensionType, ::CommandOutput*);

    MCNAPI static std::optional<std::vector<ItemStack>>
    getItemsFromMining(::BlockSource const&, ::BlockPos const, ::ItemStack const&);
    // NOLINTEND
};
