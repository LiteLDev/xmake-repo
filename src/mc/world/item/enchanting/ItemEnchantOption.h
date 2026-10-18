#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/enchanting/ItemEnchants.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

#endif // @header-generator platform
struct ItemEnchantOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             mCost;
    ::ll::TypedStorage<8, 80, ::ItemEnchants> mEnchants;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mEnchantName;
    ::ll::UntypedStorage<4, 8>                mEnchantNetId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mEnchantName;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>   mEnchantNetId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemEnchantOption& operator=(ItemEnchantOption const&);
    ItemEnchantOption();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemEnchantOption& operator=(::ItemEnchantOption&&);

    MCNAPI bool operator==(::ItemEnchantOption const&) const;

    MCNAPI ~ItemEnchantOption();
#else // @header-generator platform
    MCAPI ItemEnchantOption(::ItemEnchantOption const&);
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
    MCAPI void* $ctor(::ItemEnchantOption const&);
#endif // @header-generator platform
    // NOLINTEND
};
