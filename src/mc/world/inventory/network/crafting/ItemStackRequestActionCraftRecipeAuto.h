#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/crafting/RecipeIngredient.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class RecipeIngredient;
struct RecipeNetIdTag;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftRecipeAuto
: public ::ItemStackRequestActionCraft<TypedServerNetId<RecipeNetIdTag, uint, 0>, (ItemStackRequestActionType)13> {
#else // @header-generator platform
class ItemStackRequestActionCraftRecipeAuto : public ::ItemStackRequestActionCraft<::RecipeNetId, 13> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>> mIngredients;
    ::ll::TypedStorage<1, 1, uchar>                          mNumIngredients;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>> mIngredients;
    ::ll::TypedStorage<1, 1, uchar>                              mNumIngredients;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestActionCraftRecipeAuto();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestActionCraftRecipeAuto();
#else // @header-generator platform
    virtual void _write(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestActionCraftRecipeAuto(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const);

    MCNAPI ItemStackRequestActionCraftRecipeAuto(
        ::TypedServerNetId<RecipeNetIdTag, uint, 0> const&,
        uchar const,
        std::vector<RecipeIngredient> const&
    );

    MCNAPI std::vector<RecipeIngredient> const* getIngredients() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionCraftRecipeAuto(
        ::RecipeNetId const&                     recipeNetId,
        uchar                                    numCrafts,
        ::std::vector<::RecipeIngredient> const& ingredients
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const);

    MCNAPI void*
    $ctor(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const, std::vector<RecipeIngredient> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::RecipeNetId const& recipeNetId, uchar numCrafts, ::std::vector<::RecipeIngredient> const& ingredients);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_write(::BinaryStream&) const;
#else // @header-generator platform
    MCNAPI void $_write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
