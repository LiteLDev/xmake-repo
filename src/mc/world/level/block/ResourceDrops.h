#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on
#endif // @header-generator platform

struct ResourceDrops {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    ::ll::TypedStorage<4, 4, int>                     mExperienceCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    ::ll::TypedStorage<4, 4, int>                         mExperienceCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ResourceDrops& operator=(ResourceDrops const&);
    ResourceDrops(ResourceDrops const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ResourceDrops();
#else // @header-generator platform
    MCAPI ~ResourceDrops();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
