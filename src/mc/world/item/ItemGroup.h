#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"

class ItemGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance>   mItemTemplate;
    ::ll::TypedStorage<4, 8, std::optional<int>> mStackSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance>     mItemTemplate;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mStackSize;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ItemGroup(ItemGroup const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemGroup();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemGroup(::ItemInstance const&);

    MCNAPI ItemGroup(::ItemInstance const&, int);

    MCNAPI int getCount() const;

    MCNAPI ::ItemInstance const& getItemInstance() const;

    MCNAPI ::ItemInstance getItemInstanceCopy() const;

    MCNAPI bool isEmpty() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ItemGroup(::ItemInstance const& itemInstance, int count);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const&);

    MCNAPI void* $ctor(::ItemInstance const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ItemInstance const& itemInstance, int count);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
