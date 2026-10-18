#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class LootPool;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mDir;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootPool>>> mPools;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                mDir;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootPool>>> mPools;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserialize(::Json::Value const&, bool);
#else // @header-generator platform
    MCAPI void deserialize(::Json::Value const& table, bool usingUpcomingCreatorFeaturesExperiment);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fill(::Container&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void fill(::Container& container, ::Random& random, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDir() const;

    MCNAPI std::vector<std::unique_ptr<LootPool>> const& getPools() const;

    MCNAPI std::vector<ItemStack> getRandomItems(::Random&, ::LootTableContext&) const;
#else // @header-generator platform
    MCFOLD ::std::string getDir() const;
#endif // @header-generator platform
    // NOLINTEND
};
