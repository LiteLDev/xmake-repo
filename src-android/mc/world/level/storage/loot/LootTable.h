#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class LootPool;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mDir;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootPool>>> mPools;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deserialize(::Json::Value const&, bool);

    MCNAPI void fill(::Container&, ::Random&, ::LootTableContext&);

    MCNAPI std::string getDir() const;

    MCNAPI std::vector<std::unique_ptr<LootPool>> const& getPools() const;

    MCNAPI std::vector<ItemStack> getRandomItems(::Random&, ::LootTableContext&) const;
    // NOLINTEND
};
