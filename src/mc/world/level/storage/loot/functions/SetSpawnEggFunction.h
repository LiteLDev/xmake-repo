#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetSpawnEggFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActor;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SetSpawnEggFunction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SetSpawnEggFunction();
#else // @header-generator platform
    virtual ~SetSpawnEggFunction() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getCanonicalName() const;
#else // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LootItemFunction>
    deserialize(::Json::Value, std::vector<std::unique_ptr<LootItemCondition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void $apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext& context);
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
