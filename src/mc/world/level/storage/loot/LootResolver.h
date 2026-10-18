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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::vector<ItemStack>>
    getItemsFromKilling(::Actor*, ::Actor*, ::ItemStack const&, ::CommandOutput*);
#else // @header-generator platform
    MCAPI static ::std::optional<::std::vector<::ItemStack>>
    getItemsFromKilling(::Actor* killer, ::Actor* victim, ::ItemStack const& tool, ::CommandOutput* commandOutput);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::vector<ItemStack>>
    getItemsFromLooting(std::string const&, ::ItemStack const&, ::Level&, ::DimensionType, ::CommandOutput*);
#else // @header-generator platform
    MCAPI static ::std::optional<::std::vector<::ItemStack>> getItemsFromLooting(
        ::std::string const& lootTableDir,
        ::ItemStack const&   tool,
        ::Level&             level,
        ::DimensionType      dimensionId,
        ::CommandOutput*     commandOutput
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::vector<ItemStack>>
    getItemsFromMining(::BlockSource const&, ::BlockPos const, ::ItemStack const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::std::vector<::ItemStack>>
    getItemsFromMining(::BlockSource const& region, ::BlockPos positionToMine, ::ItemStack const& tool);
#endif // @header-generator platform
    // NOLINTEND
};
