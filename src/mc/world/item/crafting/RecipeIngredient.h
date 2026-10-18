#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class Item;
class ItemDescriptor;
class ReadOnlyBinaryStream;
struct ItemTag;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class RecipeIngredient : public ::ItemDescriptorCount {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RecipeIngredient(::ReadOnlyBinaryStream&);

    MCNAPI RecipeIngredient(::ItemDescriptor const&, ushort);

    MCNAPI RecipeIngredient(::BlockType const&, ushort);

    MCNAPI RecipeIngredient(::ItemTag const&, ushort);

    MCNAPI RecipeIngredient(::Item const&, int, ushort);

    MCNAPI bool isEmpty() const;
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RecipeIngredient& EMPTY_INGREDIENT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ReadOnlyBinaryStream&);

    MCNAPI void* $ctor(::ItemDescriptor const&, ushort);

    MCNAPI void* $ctor(::BlockType const&, ushort);

    MCNAPI void* $ctor(::ItemTag const&, ushort);

    MCNAPI void* $ctor(::Item const&, int, ushort);
#else // @header-generator platform
    MCAPI static ::RecipeIngredient& EMPTY_INGREDIENT();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
