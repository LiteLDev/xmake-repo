#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class Item;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetItemDataFunction : public ::LootItemFunction {
public:
    // SetItemDataFunction inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ApplyForComplexAliasBlockResult : uchar {
#else // @header-generator platform
    enum class ApplyForComplexAliasBlockResult : uchar {
#endif // @header-generator platform
        NotComplexAliasBlock           = 0,
        FailedToRemapComplexAliasBlock = 1,
        Success                        = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum ApplyForItemResult : uchar {
#else // @header-generator platform
    enum class ApplyForItemResult : uchar {
#endif // @header-generator platform
        AsNewItem   = 0,
        SetAuxValue = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mValue;
    ::ll::UntypedStorage<4, 4>                    mType;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>              mValue;
    ::ll::TypedStorage<4, 4, ::LootItemFunction::FunctionType> mType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SetItemDataFunction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SetItemDataFunction();
#else // @header-generator platform
    virtual ~SetItemDataFunction() /*override*/ = default;
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
    MCNAPI ::SetItemDataFunction::ApplyForComplexAliasBlockResult
    _applyImplForComplexAliasBlock(::Item const*&, std::string const&, ::Random&, int&);
#else // @header-generator platform
    MCAPI ::SetItemDataFunction::ApplyForComplexAliasBlockResult _applyImplForComplexAliasBlock(
        ::Item const*&       inOutItemDef,
        ::std::string const& originalItemName,
        ::Random&            random,
        int&                 outResultAux
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SetItemDataFunction::ApplyForItemResult
    _applyImplForItem(std::string const&, std::string const&, ::Random&, int&, ::WeakPtr<Item>&);

    MCNAPI ::RandomValueBounds getValue() const;
#else // @header-generator platform
    MCAPI ::SetItemDataFunction::ApplyForItemResult _applyImplForItem(
        ::std::string const& originalItemName,
        ::std::string const& itemRawNameId,
        ::Random&            random,
        int&                 outAux,
        ::WeakPtr<::Item>&   outItem
    );
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
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
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
    MCAPI ::LootItemFunction::FunctionType $getFunctionType() const;
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
