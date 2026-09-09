#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftRecipeAuto
: public ::ItemStackRequestActionCraft<TypedServerNetId<RecipeNetIdTag, uint, 0>, (ItemStackRequestActionType)13> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>> mIngredients;
    ::ll::TypedStorage<1, 1, uchar>                          mNumIngredients;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionCraftRecipeAuto();

    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionCraftRecipeAuto(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const);

    MCNAPI ItemStackRequestActionCraftRecipeAuto(
        ::TypedServerNetId<RecipeNetIdTag, uint, 0> const&,
        uchar const,
        std::vector<RecipeIngredient> const&
    );

    MCNAPI std::vector<RecipeIngredient> const* getIngredients() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const);

    MCNAPI void*
    $ctor(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const, std::vector<RecipeIngredient> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
