#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60 { struct ItemMenuCategory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ItemMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                            mCreativeCategory;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mCreativeGroupName;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mIsHiddenInCommands;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_110::ItemMenuCategory const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCreativeCategory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mCreativeGroupName;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                        mIsHiddenInCommands;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void upgrade(::SharedTypes::v1_21_60::ItemMenuCategory&, ::SharedTypes::v1_21_110::ItemMenuCategory&);
#else // @header-generator platform
    MCAPI static void
    upgrade(::SharedTypes::v1_21_60::ItemMenuCategory& oldData, ::SharedTypes::v1_21_110::ItemMenuCategory& newData);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
