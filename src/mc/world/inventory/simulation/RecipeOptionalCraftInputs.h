#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/simulation/RecipeCraftInputs.h"

struct RecipeOptionalCraftInputs : public ::RecipeCraftInputs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mPreviewName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk9ae5fb;
    ::ll::UntypedStorage<8, 72> mUnka567b8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RecipeOptionalCraftInputs& operator=(RecipeOptionalCraftInputs const&);
    RecipeOptionalCraftInputs(RecipeOptionalCraftInputs const&);
#endif // @header-generator platform
    RecipeOptionalCraftInputs();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecipeOptionalCraftInputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
