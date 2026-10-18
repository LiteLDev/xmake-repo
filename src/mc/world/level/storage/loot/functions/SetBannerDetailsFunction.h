#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetBannerDetailsFunction : public ::LootItemFunction {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerBlockType>                         mBannerType;
    ::ll::TypedStorage<1, 1, ::ItemColor>                               mBaseColor;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<uchar, ItemColor>>> mBannerPatterns;
    // NOLINTEND
#else // @header-generator platform
    // SetBannerDetailsFunction inner types define
    using Pattern = ::std::pair<uchar, ::ItemColor>;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SetBannerDetailsFunction();
#else // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerBlockType>                               mBannerType;
    ::ll::TypedStorage<1, 1, ::ItemColor>                                     mBaseColor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uchar, ::ItemColor>>> mBannerPatterns;
    // NOLINTEND
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SetBannerDetailsFunction();
#else // @header-generator platform
    virtual ~SetBannerDetailsFunction() /*override*/ = default;
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
    MCNAPI void _apply(::ItemStackBase&, ::Random&, ::LootTableContext&) const;

    MCNAPI ::BannerBlockType getBannerType() const;

    MCNAPI ::ItemColor getBaseColor() const;

    MCNAPI std::vector<std::pair<uchar, ItemColor>> const& getPatterns() const;
#else // @header-generator platform
    MCAPI void _apply(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _parseBannerPattern(std::vector<std::pair<uchar, ItemColor>>&, ::Json::Value const&);
#else // @header-generator platform
    MCAPI static void
    _parseBannerPattern(::std::vector<::std::pair<uchar, ::ItemColor>>& patternVec, ::Json::Value const& object);
#endif // @header-generator platform

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
