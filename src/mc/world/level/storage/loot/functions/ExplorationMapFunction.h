#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackBase;
class LootItemCondition;
#else // @header-generator platform
#endif // @header-generator platform
class LootTableContext;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ExplorationMapFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDestination;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDestination;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ExplorationMapFunction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExplorationMapFunction();
#else // @header-generator platform
    virtual ~ExplorationMapFunction() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemInstance& item, ::Random&, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getDestination() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
