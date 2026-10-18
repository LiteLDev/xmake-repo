#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class RandomBlockStateFunction : public ::LootItemFunction {
public:
    // RandomBlockStateFunction inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum RemapComplexAliasBlockResult : uint {
#else // @header-generator platform
    enum class RemapComplexAliasBlockResult : int {
#endif // @header-generator platform
        NotComplexAlias = 0,
        Succeed         = 1,
        Fail            = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mValues;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mBlockStateName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>      mBlockStateName;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    RandomBlockStateFunction();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RandomBlockStateFunction();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RandomBlockStateFunction();
#else // @header-generator platform
    virtual ~RandomBlockStateFunction() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const;
#else // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int, ::Block const*&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI RandomBlockStateFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::RandomValueBounds&                                   values,
        ::std::string const&                                   blockStateName
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getBlockStateName() const;

    MCNAPI ::RandomValueBounds getValues() const;
#else // @header-generator platform
    MCAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int randomInt, ::Block const*& inOutItemBlock, ::std::string const& originalNameStr);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LootItemFunction>
    deserialize(::Json::Value, std::vector<std::unique_ptr<LootItemCondition>>&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::RandomValueBounds&                                   values,
        ::std::string const&                                   blockStateName
    );
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
    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
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
