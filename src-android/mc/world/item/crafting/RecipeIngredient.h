#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class Item;
class ItemDescriptor;
class ReadOnlyBinaryStream;
struct ItemTag;
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {
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

public:
    // static variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
